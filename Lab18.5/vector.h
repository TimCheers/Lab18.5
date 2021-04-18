#pragma once
#include <iostream>
#include "object.h"
using namespace std;
class vector
{
	object** First;
	int size;
	int pos;
public:
	int Size()
	{
		return size;
	}
	vector()
	{
		First = nullptr;
		size = 0;
		pos = 0;
	}
	vector(int size)
	{
		pos = 0;
		this->size = size;
		First = new object * [size];
	}
	vector(vector& other)
	{
		if (First != nullptr)
		{
			delete[] First;
		}
		else
		{
			int t = other.Size();
			First = new object * [t];
			for (int i = 0; i < t; i++)
			{
				First[i] = other.First[i];
			}
		}
	}
	~vector()
	{
		if (First != nullptr)
		{
			delete[]First;
			First = nullptr;
		}
	}
	void pushback(object* A)
	{
		if (pos < size)
		{
			First[pos] = A;
			pos++;
		}
	}
	friend ostream& operator << (ostream& out, vector& other);
};
ostream& operator << (ostream& out, vector& other)
{
	if (other.size == 0)
	{
		return out << "Вектор пуст!" << endl;
	}
	else
	{
		object** tmp = other.First;
		for (int i = 0; i < other.size; i++)
		{
			out << "-------------------" << endl;
			out << i + 1 << endl;
			(*tmp)->Show();
			tmp++;
			out << "-------------------" << endl;
		}
		return out;
	}
}