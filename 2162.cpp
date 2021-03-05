#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fstream f,o;
    f.open("entrada.txt",ios::in);
    o.open("saida.txt", ios::out | ios::trunc);

    int n;

    cin >> n;

    int v[n];

    for(int i=0; i < n; i++)
        cin >> v[i];

    if(n==1)
    {
        cout << 1 << endl;
        return 0;
    }
    bool flag;
    if(v[0] > v[1])
    {
        flag = true;
    }
    else if (v[0] < v[1])
    {
        flag = false;
    }
    else
    {
        cout << 0 << endl;
        return 0;
    }
    
    
    for(int i = 1; i < n; i++)
    {
        if(flag)
        {
            if(v[i-1] > v[i])
            {
                if (i%2==0)
                {
                    cout << 0 << endl;
                    return 0;
                }
            }
            else if (v[i-1] < v[i])
            {
                if (i%2==1)
                {
                    cout << 0 << endl;
                    return 0;
                }
            }
            else
            {
                cout << 0 << endl;
                return 0;
            }
        }
        else
        {
            if(v[i-1] > v[i])
            {
                if (i%2==1)
                {
                    cout << 0 << endl;
                    return 0;
                }
            }
            else if (v[i-1] < v[i])
            {
                if (i%2==0)
                {
                    cout << 0 << endl;
                    return 0;
                }
            }
            else
            {
                cout << 0 << endl;
                return 0;
            }
        }
        
    }
    cout << 1 << endl;
    return 0;
}