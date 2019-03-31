// Asadullaeva_78A.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	short int res=0;
	//cout << "00" << endl;
	for (int i=0;i<3;i++) 
	{
		//cout << "Input the string" << endl;
		//cout << "01" << endl;
		string word;
		getline(cin,word);
		int counter = 0;
		
		for (int j=0;j<word.length(); j++) 
		{
			
			//cout << word[j] << endl;
			//cout << "02" << endl;

			if ((word[j] == 'a') || (word[j] == 'e') || (word[j] == 'i') || (word[j] == 'o') || (word[j] == 'u')) counter += 1;
			
			//cout << counter << endl;
		}

		if ((i % 2 == 0) && (counter == 5)) res = 1;
		else if ((i % 2 != 0) && (counter == 7)) res = 1;

		

	}

	if (res == 1) cout << "YES" << endl;
	else cout << "NO" << endl;


}
