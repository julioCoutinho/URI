#include <bits/stdc++.h>

using namespace std;

int main()
{
  int s = 0;
  string msg;
  while(getline(cin,msg))
  {
    if(msg == "caw caw")
    {
      cout << s << endl;
      s = 0;
    }
    else
    {
      if(msg[0] == '*')
        s += 4;
      if(msg[1] == '*')
        s += 2;
      if(msg[2] == '*')
        s += 1;
    }
  }
  return 0;
}
