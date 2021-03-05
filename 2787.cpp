#include <iostream>

using namespace std;

int main()
{
    int n,x,i,j;

    cin >> x >> n;

    if((x % 2 == 1)&& (n%2==1))
        cout << 1 << endl;
    else if(x % 2 == 1 && n%2 == 0)
        cout << 0 << endl;
    else if(x% 2 == 0 && n % 2 == 1)
        cout << 0 << endl;
    else
        cout << 1 << endl;


    return 0;
}
