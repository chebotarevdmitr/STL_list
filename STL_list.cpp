#include <iostream>
#include <list>
using namespace std;

void displyRatings(const list<int>& playersRatings) {
	for (list<int>::const_iterator it = playersRatings.begin(); it != playersRatings.end(); it++) {
		cout << "Playr reting : " << *it << endl;
	}

}

int main()
{
	list<int> allPleyers = { 2,9,6,7,3,1,4,8,3,2,9 }; // все игроки { список рейтингов игроков}
	list<int> beginners;//список начинающие //reting 1-5
	list<int>profi; //список профи  //reting 6-10

	for (list<int>::iterator it = allPleyers.begin(); it != allPleyers.end(); it++) {
		int rating = *it;
		if (rating >= 1 && rating <= 5) {
			beginners.push_back(rating);
		}
		else if (rating >= 6 && rating <= 10) {
			profi.push_back(rating);
		}
	}
	cout << "Beginners :" << endl;
	displyRatings(beginners);
	cout << "PROFI :"<<endl;
	displyRatings(profi);

	cin.get();
}

