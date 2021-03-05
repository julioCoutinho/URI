#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

	ios_base::sync_with_stdio(false);
    cin.tie(0);

	int total = 0,x,c = 0,r = 0,s = 0,n;

	cout << fixed << setprecision(2);
    string op;
	cin >> n;
	while(n-->0)
	{
        cin >> x >> op;
        total += x;
        if(op == "C")
            c+=x;
        else if(op == "R")
            r+=x;
        else
            s+=x;
	}

	cout << "Total: " << total << " cobaias" << endl;
	cout << "Total de coelhos: " << c << endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << "Percentual de coelhos: " << (c*100.0)/total << " %" << endl;
	cout << "Percentual de ratos: " << (r*100.0)/total << " %" << endl;
	cout << "Percentual de sapos: " << (s*100.0)/total << " %" << endl;


}
