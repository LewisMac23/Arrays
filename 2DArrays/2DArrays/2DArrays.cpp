// 2DArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//A 2D array is a matrix array
//2D Array initialization | take input | display output | addition | subtraction

int main()
{
    //datatype array name[rows][columns]

    int myarray[5][5]; // initialization
    int myarray1[2][2] = { 1,2,3,4 }; // declaration with initialization
    int myarray2[3][3] = { { 1,1,1 }, { 2,2,2 }, { 3,3,3 } }; // declaration with initialization

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << myarray2[i][j] << "";
        }
        cout << endl;
    }
    cout << endl << "Enter a values for a 2x2 matrix:"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> myarray1[i][j];
        }
        cout << endl;
    }
    cout << endl << "Values for a 2x2 matrix:"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << myarray1[i][j] << "";
        }
        cout << endl;
        
    }

    int A[2][2], B[2][2], addition[2][2], subtraction[2][2];

    cout << endl << "Enter values of 2D array A:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
     
    }
    cout << endl << "Enter values of 2-D array B:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << B[i][j] << "";
        }

    }
   
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            addition[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            subtraction[i][j] = A[i][j] - B[i][j];
        }
        return 0;
    }

    cout << endl << "Values of addition array are:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << addition[i][j] << "";
        }
        cout << endl;

    }
    cout << endl << "Values of subtraction array are:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << subtraction[i][j] << "";
        }
        cout << endl;

    }

}
   



