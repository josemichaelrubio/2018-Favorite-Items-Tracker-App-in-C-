// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Book.h"
#include "Audio.h"
#include <iostream>
using namespace std;


int main()
{
	int nbooks = 0;
	Book myBook("The Stand", "S. King", 30.00, "asd;lkfjadlk", 500);
	Audio myAudio("IT", "S. King", 20.00, "a;slkdfja;ldk", 900);
	myBook.showBook();
	myAudio.showAudio();
	myBook.GetUserData();
	myBook.showBook();

	cout << "how many books?" << endl;
	cin >> nbooks;
	cin.ignore();
	cin.clear();
	Book *ptr = NULL;
	ptr = new Book[nbooks];
	for (int i = 0; i =< nbooks; i++)
	{
		ptr[i].GetUserData();
		ptr[i].showBook();
	}
	delete ptr[];

	system("pause");
	return 0;
}

