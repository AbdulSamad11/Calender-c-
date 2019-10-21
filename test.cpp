#include "proj1.h"
#include <conio.h>
int main()
{
	int q=1, m, n;
	while (q != 0)
	{
		cout << "\n\n\tinput pattren wise\t\t******INPUT 0 to exit*****" << endl;
		cin >> q >> m >> n;
		date2019 c(m, q);
		cout << n << "days after";
		c.print();
		cout << "is";
		c.plusday(n);
		c.print();
		clrscr();
	}
	system("pause");

	return 0;
}









/*
AUTHOR
          ABDUL SAMAD
	  UETIAN 2018 SESSION
*/