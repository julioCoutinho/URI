#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	double a,b;
	cin >> a >> b;
	if(a == 0)
	{
		if(b == 0)
		{
			cout << "Origem" << endl;
		}
		else
		{
			cout << "Eixo Y" << endl;
		}
	}
	else
	{
		if(a > 0)
		{
			if(b == 0)
			{
				cout << "Eixo X" << endl;
			}
			else
			{
				if(b > 0)
				{
					cout << "Q1" << endl;
				}
				else
				{
					cout << "Q4" << endl;
				}	
			}
		}
		else
		{
			if(b == 0)
			{
				cout << "Eixo X" << endl;
			}
			else
			{
				if(b > 0)
				{
					cout << "Q2" << endl;
				}
				else
				{
					cout << "Q3" << endl;
				}
			}	
		}	
	}
	fstream file ;
}