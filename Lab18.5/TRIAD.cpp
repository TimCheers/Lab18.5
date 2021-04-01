#include "TRIAD.h"
#include <iostream>
using namespace std;
TRIAD::TRIAD()
{
	first = 0;
	secondH = 0;
	third = 0;
}
TRIAD::TRIAD(int first, int second, int third)
{
	this->first = first;
	this->secondH = second;
	this->third = third;
}
TRIAD::TRIAD(const TRIAD& other)
{
	this->first = other.first;
	this->secondH = other.secondH;
	this->third = other.third;
}
TRIAD& TRIAD:: operator = (const TRIAD& other)
{
	this->first = other.first;
	this->secondH = other.secondH;
	this->third = other.third;
	return *this;
}
TRIAD::~TRIAD() {}
void TRIAD::Show()
{
	cout << "TRAD:\nfirst: " << first << "\nsecond: " << secondH << "\nthird: " << third << endl;
}
void TRIAD::setTRIAD(int first, int second, int third)
{
	this->first = first;
	this->secondH = second;
	this->third = third;
}
bool TRIAD:: operator == (const TRIAD& other)
{
	return this->first == other.first && this->secondH == other.secondH && this->third == other.third;
}
bool TRIAD:: operator != (const TRIAD& other)
{
	return !(this->first == other.first && this->secondH == other.secondH && this->third == other.third);
}
bool TRIAD:: operator < (const TRIAD& other)
{
	return this->first < other.first&& this->secondH < other.secondH&& this->third < other.third;
}
bool TRIAD:: operator > (const TRIAD& other)
{
	return this->first > other.first && this->secondH > other.secondH && this->third > other.third;
}
ostream& operator << (ostream& out, const TRIAD& other)
{
	return (out << other.first << '_' << other.secondH << "_" << other.third << endl);
}
istream& operator >> (istream& in, TRIAD& other)
{
	int tmp = -1;
	while (tmp < 0)
	{
		cout << "first (hour):\t\t";
		in >> other.first;
		tmp = other.first;
	}
	tmp = -1;
	while (tmp < 0)
	{
		cout << "second (minute):\t";
		in >> other.secondH;
		tmp = other.secondH;
	}
	tmp = -1;
	while (tmp < 0)
	{
		cout << "third (second):\t\t";
		in >> other.third;
		tmp = other.third;
	}
	return in;
}