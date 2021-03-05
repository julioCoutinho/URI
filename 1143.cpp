#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int i =1,n;

  cin >> n;
  while(n-->0)
  {
    cout << pow(i,1) << " ";
    cout << pow(i,2) << " ";
    cout << pow(i,3) << endl;
    i++;
  }

  return 0;
}
