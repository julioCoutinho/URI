#include <bits/stdc++.h>

using namespace std;

struct jogos
{	
	int x,y;
};

int main(int argc, char const *argv[])
{
	int n,x,i,y,saldo;
	string lixo;
	vector<jogos> v;
	jogos j;
	while(cin >> n)
	{
		n *= 2;

		for(i =0 ;i < n; i++)
		{
			cin >> j.x;
			cin >> lixo;
			cin >> j.y;
			v.push_back(j);
		}
		for(i = 0; i < n; i+=2)
		{
			x = v[i].x + v[i+1].y;
			y = v[i].y + v[i+1].x;
			if(x > y)
			{
				cout << "Time 1" << endl;
			}
			else if(x < y)
			{
				cout << "Time 2" << endl;
			}
			else
			{
				saldo = x-y;
				if(saldo > 0)
				{
					cout << "Time 1" << endl;
				}
				else if(saldo < 0)
				{
					cout << "Time 2" << endl;
				}
				else
				{
					if(v[i+1].y > v[i].y)
					{
						cout << "Time 1" << endl;
					}
					else if(v[i+1].y < v[i].y)
					{
						cout << "Time 2" << endl;
					}
					else
					{
						cout << "Penaltis" << endl;
					}
				}
			}
 		}
 		v.clear();
	}

	return 0;
}
