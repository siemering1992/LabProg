#include <iostream>
using namespace std;
// local include
#include "stack.h"
#define NUM 7



void main()
{
	Stack<float> aStack; // neues Stack-Objekt

	
	// lege Daten auf den Stapel
	for (float i = 0; i < NUM; i++)
	{
		try
		{
			aStack.push(i);
		}
		catch (exception ex)
		{
			cout << ex.what() << endl;
		}
	}
	// hole Daten vom Stapel
	for (int i = 0; i < NUM; i++)
	{
		try
		{
			cout << aStack.pop() << endl;
		}
		catch (exception ex)
		{
			cout << ex.what() << endl;
		}
	}

	cout << aStack.isempty() << endl;
	cout << aStack.isfull() << endl;

}

