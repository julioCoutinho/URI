#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x,fat=1,i;
  cin >> x;
  for(i = x;i!=0;i--)
  {
    fat *=i;
  }

  cout << fat << endl;

  return 0;
}
