#include <iostream>
#include <list>
using namespace std;
// функция распечатки  рейтингов 
void displayRatings(const list<int>& playersRatings) {
	for (list<int>::const_iterator it = playersRatings.begin(); it != playersRatings.end(); it++) {
		cout << "Playr reting : " << *it << endl;
	}
}
//функция упорядовчивания
void inssertPlayerIntoOrderedList(int newPlayersRating, list<int>& pleyaersByRating) {
	for (list<int>::iterator it = pleyaersByRating.begin(); it != pleyaersByRating.end(); it++) {
		if (*it > newPlayersRating) {
			pleyaersByRating.insert(it, newPlayersRating);
			return ;
	    }  
	}
	pleyaersByRating.push_back(newPlayersRating);
}


int main()
{
	list<int> allPleyers = { 2,9,6,7,3,1,4,8,3,2,9 }; // все игроки { список рейтингов игроков}
	list<int> beginners;//список начинающие //reting 1-5
	list<int>profi; //список профи  //reting 6-10

	for (list<int>::iterator it = allPleyers.begin(); it != allPleyers.end(); it++) {
		int rating = *it;
		if (rating >= 1 && rating <= 5) {
			inssertPlayerIntoOrderedList(rating, beginners);
		}
		else if (rating >= 6 && rating <= 10) {
			inssertPlayerIntoOrderedList(rating, profi);
		}
	}
	cout << "Beginners :" << endl;
	displayRatings(beginners);
	cout << "PROFI :" << endl;
	displayRatings(profi);

	cin.get();

}
