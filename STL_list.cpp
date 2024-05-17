#include <iostream>
#include <list>
using namespace std;

void displyRatings(list<int>playersRatings) {
	for (list<int>::iterator it = playersRatings.begin(); it != playersRatings.end(); it++) {
		cout << "Playrs reting : " << *it << endl;
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



	cin.get();
}

