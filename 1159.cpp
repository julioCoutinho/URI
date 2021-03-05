#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,i,soma;
  
  while(cin >> n)
  {
    if(n == 0)
      break;
    i = 0;soma=0;
    if(abs(n)%2 == 1)
      n+=1;
    while(i != 5)
    {
      soma += n;
      n+=2;
      i++;
    }
    cout << soma << endl;
  }

  return 0;
}
