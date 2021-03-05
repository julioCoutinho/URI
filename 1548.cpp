#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);

	int n,k,x,i,cont;
	vector<int> v,s;

	cin >> n;

	while(n-->0)
	{

		cin >> k;
		cont = k;
		for(i = 0; i < k;i++)
		{
			cin >> x;
			v.push_back(x);
			s.push_back(x);
		}
		
		sort(s.begin(), s.end(), greater<int>());

		for(i = 0; i < k;i++)
		{
			if(v[i] != s[i])
			{
				cont--;
			}
		}

		cout << cont << endl;
		
		s.clear();
		v.clear();

	}

	return 0;
}
