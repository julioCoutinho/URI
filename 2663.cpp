#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,k,i,x,ant,ka,size,a;

	vector<int> s;

	while(cin>>n>>k)
	{
		for(i = 0; i < n; i++)
		{
			cin >> x;
			s.push_back(x);	
		}

		sort(s.begin(),s.end());
		ant = s.back();
		while(k>0)
		{
			a = count(s.begin(),s.end(),s.back());

			while(a --> 0)
			{
				s.pop_back();
				k--;
			}
			
		}
		if (s.empty()) 
		{
			size =  0;
		}
		else
		{
			size =  s.size();
		}
		cout << n - size << endl;

		s.clear();
	}

	return 0;
}
