// PointerArithmetic.cpp : Defines the entry point for the console application.
//pointer-samples is created by Carlos Sanchez licensed under GNU GPL v3
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void modifyPtr(int *)

int main()
{
	//Create two pointers
	int *ptr1 = nullptr;
	int *ptr2 = nullptr;

	//Create two variables to hold input value from user
	int var1 = 0;
	int var2 = 0;

	//Prompt the user for values
	cout << "Please Enter the value";
	cin >> var1;
	cout << "Please Enter the second value";
	cin >> var2;

	//Obtain the address of the variables and store that in the pointer
	ptr1 = &var1;
	ptr2 = &var2;

	//Obtain what is stored in the pointer (memory address) and what that address holds
	cout << "The Value of Pointer 1 is";
	cout << ptr1 << endl;
	cout << *ptr1 << endl;

	cout << "The Value of Pointer 2";
	cout << ptr2 << endl;
	cout << *ptr2 << endl;

	//Compute the sum by using indirection operator
	cout << "The Sum is" << *ptr1 + *ptr2 << endl;

	//Modify the value inside a function
	modifyPtr(ptr1);
	cout << "New value" << *ptr1 << endl;

    return 0;
}

void modifyPtr(int * myPtr) {
	*myPtr = *myPtr + 1;
}