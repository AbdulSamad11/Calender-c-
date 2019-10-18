#include "proj1.h"

date2019::date2019()
{
	d = 1, m = 1;
}
date2019::date2019(int dd)
{
	if (dd > 0 && dd < 366)
	{
		if (dd < 32)
			d = dd, m = 1;
		else if (dd < 60)
			m = 2, d = dd-31;
		else if (dd < 91)
			m = 3, d = dd-59;
		else if (dd < 121)
			m = 4, d = dd-90;
		else if (dd < 152)
			m = 5, d = dd-120;
		else if (dd < 182)
			m =6, d = dd-151;
		else if (dd < 213)
			m = 7, d = dd-181;
		else if (dd < 244)
			m = 8, d = dd-212;
		else if (dd < 274)
			m = 9, d = dd-243;
		else	if (dd < 305)
			m = 10, d = dd-273;
		else	if (dd < 335)
			m = 11, d = dd-304;
		else if (dd < 366)
			m = 12, d = dd-334;
	}
	else{
		cout << "error in 1p cons" << endl; exit(1);
	}
	
}
date2019::date2019(int dd, int mm)
{
	if (dd < 1 || mm < 1 || dd>365 || mm>12)
		d = -1, m = -1;
		else if (dd < 32 && mm == 1)
			m = mm, d = dd;
			else if (dd < 29 && mm == 2)
		m = mm, d = dd;
				else if (dd < 32 && mm == 3)
			m = mm, d = dd;
					else if (dd < 31 && mm == 4)
				m = mm, d = dd;
						else if (dd < 32 && mm == 5)
				m = mm, d = dd;
							else if (dd < 31 && mm == 6)
				m = mm, d = dd;
								else if (dd < 32 && mm == 7)
				m = mm, d = dd;
									else if (dd < 32 && mm == 8)
				m = mm, d = dd;
										else	if (dd < 31 && mm == 9)
				m = mm, d = dd;
											else	if (dd < 32 && mm == 10)
				m = mm, d = dd;
												else if (dd < 31 && mm == 11)
				m = mm, d = dd;
													else	if (dd < 32 && mm == 12)
				m = mm, d = dd;
		
								else { cout << "error in two parameter constructor" << endl;}
}
void date2019::setdate(int dd, int mm)
{
	if (dd < 1 || mm < 1 || dd>365 || mm>12)
		d = -1, m = -1;
	else if (dd < 32 && mm == 1)
		m = mm, d = dd;
	else if (dd < 29 && mm == 2)
		m = mm, d = dd;
	else if (dd < 32 && mm == 3)
		m = mm, d = dd;
	else if (dd < 31 && mm == 4)
		m = mm, d = dd;
	else if (dd < 32 && mm == 5)
		m = mm, d = dd;
	else if (dd < 31 && mm == 6)
		m = mm, d = dd;
	else if (dd < 32 && mm == 7)
		m = mm, d = dd;
	else if (dd < 32 && mm == 8)
		m = mm, d = dd;
	else	if (dd < 31 && mm == 9)
		m = mm, d = dd;
	else	if (dd < 32 && mm == 10)
		m = mm, d = dd;
	else if (dd < 31 && mm == 11)
		m = mm, d = dd;
	else	if (dd < 32 && mm == 12)
		m = mm, d = dd;
		else { cout << "error in two parameter constructor" << endl; }
}
void date2019::print()
{
	
	string dofweek[7] = { "Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday","Monday" };
	int day = (d - 1) % 7;
	string MofY[12] = { "January","February","March","April","May","June","July","August","September","October","November","December"};
	int month = (m - 1) % 12;
	int Y = 2019;
	cout << "''" << dofweek[day] << "," << MofY[month] << d << "," << Y << "''";
}
void date2019::plusday(int days)
{
	if ((days + d) < 265)
	{
		d = d + days;
		date2019(d);
	}
	else { cout << "you entered in 2020"; }
}