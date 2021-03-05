#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,x;

  cin >> n;

  while (n-->0)
  {
    cin >> x;
    if(x%2 == 1)
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }

	return 0;
}
