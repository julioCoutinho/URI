#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m, n, x, y, v, s = 0,ss=0;
    //int a[1001] = {0};
    int i;
    cin >> m >> n;
    int a[n+1] = {0};

    for(i=m; i!=0; i--){
        cin >> x >> v >> y;
        a[x] -= v;
        a[y] += v;
        s+= v;
    }

    for(int v : a){
        if(v>0){
            ss+=v;
        }
    }



    if(s != ss)
    {
        cout << "S" << endl;
        cout << ss << endl;
    }
    else
    {
        cout << "N" << endl;
        cout << ss << endl;
    }

    return 0;
}
