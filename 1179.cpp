#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x,i=15,j;
  vector<int> p,im;
  while(i != 0)
  {
    cin >> x;
    if(p.size() == 5)
    {
      for(j = 0;j<5;j++)
      {
        cout << "par[" << j << "] = " << p[j] << endl;
      }
      p.clear();
    }
    else if(im.size() == 5)
    {
      for(j = 0;j<5;j++)
      {
        cout << "impar[" << j << "] = " << im[j] << endl;
      }
      im.clear();
    }
    if(x%2 == 0)
    {
      p.push_back(x);
    }
    else
    {
      im.push_back(x);
    }

    i--;
  }
  for (i = 0; i < im.size();i++)
    cout << "impar[" << i << "] = " << im[i] << endl;
  for (i = 0; i < p.size();i++)
    cout << "par[" << i << "] = " << p[i] << endl;




  return 0;
}
