#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,v[1000],aux,i;
	cin >> n;
	aux = 0;
	for(i=0;i<1000;i++)
	{
		v[i] = aux;
		aux++;
		if(n <= aux)
			aux = 0;
		
		cout << "N[" << i << "] = " << v[i]<<endl;
	}
	return 0;
}
