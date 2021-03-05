#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,v[1000],m,x,i = 0,resto,seq=0;

	while(cin >> n)
	{
		for(i = 0 ; i < n;i++)
		{
			cin >> v[i];
		}
		if(n != 1)
		{
			resto = v[1] - v[0];
			for(i = 1; i < n; i++)
			{
				if((v[i+1] - v[i]) == resto)
				{
					continue;
				}
				else
				{
					resto = v[i+1] - v[i];
					seq++;
				}
			}
		}
		else
		{
			seq = 1;
		}
		cout << seq << endl;
		seq = 0;
	}


		

	return 0;
}
