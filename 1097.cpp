#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i = 1,j=7;
  fstream file;
  file.open("file.txt",ios::out | ios::trunc);
  while(i!=11)
  {
    cout << "I="<<i<<" J="<<j<<endl;
    cout << "I="<<i<<" J="<<j-1<<endl;
    cout << "I="<<i<<" J="<<j-2 <<endl;
    i+=2;
    j+=2;
  }
  return 0;
}
