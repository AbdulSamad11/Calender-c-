#include <iostream>
#include <string>
using namespace std;
class date2019
{
	int d, m;   
public:
	date2019();
	date2019(int dd);
	date2019(int dd, int mm);
	void setdate(int dd, int mm);
	void print();
	void plusday(int days);
};
