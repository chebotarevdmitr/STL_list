#include <iostream>
#include <list>
using namespace std;
int main()
{
	list<int> myList; //  лист инициализация списка
	myList.push_back(10); //добавить в конец списка
	myList.push_back(20); 
	myList.push_front(30);//добавить в начало списка
	/*
	  использование iterator для перебора list от it=myList.begin() начала списка
	  до it!=myList.end() конца списка ,на каждой итерации it++
	*/
	for (list<int>::iterator it = myList.begin(); it != myList.end(); it++) {
		cout << *it << endl;
   }

   cin.get();
}

