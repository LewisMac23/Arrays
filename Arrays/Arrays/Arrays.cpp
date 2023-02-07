// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*
* An array is a series of elements of the same type places in contiguous(right next to each other) memory locations that can be
* individually referenced by adding an index to a unique identifier.
* e.g
* int Arr[5] = {10,20,30,40,50};
* Arr[0] = 10
* Arr[1] = 20 e.t.c
*/

//Basics of array | Array initialisation | Array traversing | Taking input into Arrays | Printing Array Output
int main()
{
   //datatype array name[size];

	//basic integer array
	int arr[3] = { 1,2,3 };

	//basic double array
	double arr1[5];
	arr1[0] = 1.456;
	arr1[1] = 36.765;

	//character array
	char myarr[4];
	myarr[0] = 'a';

	//Taking input into array
	int temp_arr[5];
	cout << "Enter 5 Integer variable" << endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> temp_arr[i];
	}

	//printing array output
	cout << "The values you entered are:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << temp_arr[i] << endl;
	}


	return 0;
}
