//============================================================================
// Name        : PizzaHashcode.cpp
// Author      : Omat Bishtawi
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include <string>
using namespace std;

int main() {

	/*
	 * 	Write to file
	 */
	ofstream myfile;
	myfile.open ("example.txt");
	myfile << "Writing this to a file.\nhi";
	myfile.close();


	string x;
	ifstream file ("example.txt");
/*
 * 	read variable by variable
 */
	if (file.is_open())
	{
		while ( file >> x  )
		{
			cout << x << '\n';
		}
		file.close();
	}else{
		cout <<"sth wrong";
	}
	/*
	 * 	read line by line
	 */
	cout << "----------------" <<endl;
	string line;
	ifstream file2 ("example.txt");

	if (file2.is_open())
	{
		while ( getline(file2,line)  )
		{
			cout << line << '\n';
		}
	}


	return 0;

}
