#pragma once
#include <iostream>
#include "object.h"
using namespace std;
class TRIAD : public object
{
public:
	TRIAD(int first, int second, int third);
	TRIAD(const TRIAD& other);
	TRIAD();
	virtual ~TRIAD();
	void Show() override;
	void setTRIAD(int first, int second, int third);
	bool operator == (const TRIAD& other);
	bool operator != (const TRIAD& other);
	bool operator < (const TRIAD& other);
	bool operator > (const TRIAD& other);
	TRIAD& operator = (const TRIAD& other);
	friend ostream& operator << (ostream& out, const TRIAD& other);
	friend istream& operator >> (istream& in, TRIAD& other);
protected:
	int first;
	int secondH;
	int third;
};