#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	int n,m,i,x,a;
	set<int> s;
	set<int>::iterator it;
	while(cin >> n)
	{
		cin >> m;
		s.clear();
		while(m-->0)
		{
			cin >> x;
			s.insert(x);
		}

		cout << n - s.size() << endl;
	}


	return 0;
}