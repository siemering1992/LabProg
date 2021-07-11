#pragma once
#include <iostream>
#define MAX 6			//Größe des zu erstellenen Arrays


template <class T> 
class Stack
{
private:
	T _a[MAX];
	int _tos = 0;
	
public:
	Stack():_a{0} {}; // Initialisiere member variable _a
	void push(T a) 
	{
		if (_tos >= MAX)
		{
			throw exception("Der Stack ist voll!");
		}
		_a[_tos] = a;
		cout << _a[_tos] << endl;
		_tos++;
	};

	T pop() 
	{
		if (_tos <= 0)
		{
			throw exception("Der Stack ist leer !");
		}
		_tos--;
		return _a[_tos];
	};
	int isempty()
	{
		//Ternary Operator
		return _tos == 0 ? 1 : 0;
	};

	// Abfrage ob das Array voll ist
	int isfull() 
	{ 
		//Ternary Operator
		return _tos == MAX ? 1 : 0;
	};;
};