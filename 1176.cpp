#include <bits/stdc++.h>

using namespace std;

int main()
{
  int64_t i=0,n,x;
  vector<int64_t> v;
  v.push_back(0);
  v.push_back(1);
  cin >> n;
  while(n-->0)
  {
    cin >> x;
    i = v.size();
    if(x >= i)
    {
      while(x >= i)
      {
        if(i == 2)
          v.push_back( v[0] + v[1]);
        else
          v.push_back(v[i-1] + v[i-2]);
        i++;
      }
    }
    cout <<"Fib("<< x <<") = "  << v[x] << endl;
  }

}
