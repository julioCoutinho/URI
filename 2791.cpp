#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n=1,feijao;
	
	while(n < 4)
	{
	    cin >> feijao;
	    if(feijao)
	    {
	        cout << n << endl;
		return 0;
            }
	    n++;
	} 
	cout << n << endl;
	return 0;
}