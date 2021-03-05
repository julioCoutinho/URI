#include <bits/stdc++.h>

using namespace std;

int main()
{
  double x,i=2,s=0;
  cout << fixed;
  cout.precision(0);
  cin >> x;
  while(x>=4)
  {
    s+=i;
    i++;
    x--;
  }

  cout << s << endl;

	return 0;
}
