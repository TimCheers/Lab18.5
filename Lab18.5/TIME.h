#pragma once
#include "TRIAD.h"
class TIME : public TRIAD
{
public:
	TIME();
	void set();
	bool operator == (const TIME& other);
	bool operator != (const TIME& other);
	bool operator < (const TIME& other);
	bool operator > (const TIME& other);
	bool operator <= (const TIME& other);
	bool operator >= (const TIME& other);
	void Show() override;
private:
	int second;
	int minute;
	int hour;
};