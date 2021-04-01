#include "TIME.h"
#include <iostream>
using namespace std;
TIME::TIME()
{
}
void TIME::set()
{
	this->hour = first;
	this->minute = secondH;
	if (secondH > 60)
	{
		this->hour += secondH / 60;
		this->minute = secondH % 60;
	}
	this->second = third;
	if (third > 60)
	{
		this->minute += third / 60;
		this->second = third % 60;
	}
	if (this->minute > 60)
	{
		this->hour += this->minute / 60;
		this->minute = this->minute % 60;
	}
}
bool TIME:: operator == (const TIME& other)
{
	return this->second == other.second && this->minute == other.minute && this->hour == other.hour;
}
bool TIME:: operator != (const TIME& other)
{
	return !(this->second == other.second && this->minute == other.minute && this->hour == other.hour);
}
bool TIME:: operator < (const TIME& other)
{
	if (this->hour < other.hour)
	{
		return true;
	}
	else
	{
		if (this->hour == other.hour)
		{
			if (this->minute < other.minute)
			{
				return true;
			}
			else
			{
				if (this->minute == other.minute)
				{
					if (this->second < other.second)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
}
bool TIME:: operator > (const TIME& other)
{
	if (this->hour > other.hour)
	{
		return true;
	}
	else
	{
		if (this->hour == other.hour)
		{
			if (this->minute > other.minute)
			{
				return true;
			}
			else
			{
				if (this->minute == other.minute)
				{
					if (this->second > other.second)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
}
bool TIME:: operator >= (const TIME& other)
{
	if (this->hour >= other.hour)
	{
		if (this->minute >= other.minute)
		{
			if (this->second >= other.second)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
bool TIME:: operator <= (const TIME& other)
{
	if (this->hour <= other.hour)
	{
		if (this->minute <= other.minute)
		{
			if (this->second <= other.second)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
void TIME::Show()
{
	cout << hour << ':' << minute << ':' << second << endl;
}