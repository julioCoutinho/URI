#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

	ios_base::sync_with_stdio(false);
    cin.tie(0);

	int n,x,i,maior = -1,pos = 0;

	for(i = 0; i < 100; i++)
	{
        cin >> x;
        if(x > maior)
        {
            maior = x;
            pos = i;
        }
	}
    pos++;
	cout << maior << endl;
	cout << pos << endl;
}
