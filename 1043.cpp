#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{	
	double a,b,c,area;

	cin >> a >> b >> c ;
	
	cout << fixed << setprecision(1);

	if((abs(b-c) < a ) && a < (b+c))
	{
		if((abs(a-c) < b) && b < (a+c))
		{
			if((abs(a-b) < c ) && c < (a+b))
			{
				area = a+b+c;
				cout << "Perimetro = " << area << endl;
			}
			else
			{
				area = ((a+b)*c)/2;
				cout << "Area = " << area << endl;	
			}
		}
		else
		{
			area = ((a+b)*c)/2;
			cout << "Area = " << area << endl;		
		}
	}
	else
	{
		area = ((a+b)*c)/2;
		cout << "Area = " << area << endl;
	}
}
