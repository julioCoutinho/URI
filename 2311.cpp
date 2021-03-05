#include <bits/stdc++.h>

using namespace std;

int main (){

    int n;
    string lixo;
    double peso,total = 0,x;
    vector<double> v;
    cin >> n;
    while(n-->0)
    {
        cin >> lixo >> peso;
        for(int i =0; i < 7;i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        v.pop_back();
        reverse(v.begin(),v.end());
        v.pop_back();

        for(int i = 0; i < 5; i++)
        {
            total += v[i];
        }
        cout.precision(2);
        cout << fixed << lixo << " " << total*peso << endl;
        total = 0;
        v.clear();
    }

    return 0;
}
