#include <bits/stdc++.h>

using namespace std;



int main(){

    int n,x,carlos;
    bool ganhou = true;

    cin >> n >> carlos;
    n--;
    while(n-->0)
    {
        cin >>x;
        if(x>carlos)
        {
            ganhou = false;
        }
    }

    if(ganhou)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}
