#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c,d,totalh,totalm;

	cin >> a >> b >> c >> d;

	if(a >= c)
	{
		totalh = 24 - a + c;
		
		if(b > d)
		{
			if(totalh != 24)
			{
				totalm = 60 - b + d;
				totalh--;
			}
			else
			{
				totalh = 0;
				totalm = 60 - b + d;
			}
		} 
		else if(b < d)
		{
			if(totalh != 24)
			{
				totalm = d - b;
			}
			else
			{
				totalh = 0;
				totalm = d - b;
			}
		}
		else
		{
			totalm = 0;
		}
	}
	else
	{
		totalh = c - a;

		if(b > d)
		{
			if(totalh != 24)
			{
				totalm = 60 - b + d;
				totalh--;
			}
			else
			{
				totalh = 0;
				totalm = 60 - b + d;
			}
		}
		else if(b < d)
		{
			if(totalh != 24)
			{
				totalm = d - b;
			}
			else
			{
				totalm = d - b;
				totalh = 0;
			}
		}
		else
		{
			totalm = 0;
		}
 	}

 	cout << "O JOGO DUROU " << totalh <<   " HORA(S) E " << totalm <<  " MINUTO(S)" << endl;



	return 0;
}
