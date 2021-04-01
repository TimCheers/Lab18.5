#pragma once
#include <iostream>
using namespace std;
class object
{
public:
	object() {}
	~object() {}
	virtual void Show() = 0; //virtual function
};