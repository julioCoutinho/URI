#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,k,i,x,tam,pos;
	int v[100][2];
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
	while(n-->0)
	{
		i = 1;
		cin >> m >> k;
		tam = 1000,pos = 1;
		while(m-->0)
		{
			cin >> x;
			v[i][0] = abs(x-k);
			if(v[i][0] < tam)
			{
				tam = v[i][0];
				pos = i;
			}
			i++;
		}
		
		cout << pos << endl;
	}

	return 0;
}
