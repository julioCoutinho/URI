#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i = 1,j;
  fstream file;
  file.open("file.txt",ios::out | ios::trunc);
  while(i!=11)
  {
    cout << "I="<<i<<" J=7"<<endl;
    cout << "I="<<i<<" J=6"<<endl;
    cout << "I="<<i<<" J=5"<<endl;
    i+=2;
  }
  return 0;
}
