#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,c,m,x,size;
	set<int> s;

	set<int>::iterator it;
	while(cin >> n)
	{
		cin >> c;

		cin >> m;

		while(c --> 0)
		{
			cin >> x;
			s.insert(x);
		}

		while(m --> 0)
		{
			cin >> x;

			it = find(s.begin(),s.end(),x);
			if(it != s.end())
			{
				s.erase(s.find(x));
			}
		}

		cout << s.size() << endl;

	}


	return 0;
}
