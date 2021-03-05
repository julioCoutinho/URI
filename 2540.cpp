#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n,op,imp;

	while(cin>>n)
	{
		imp = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> op;
			if(op)
			  imp++;
		}	
		double aprovado = (double(n)*2)/3;
		if(imp >= aprovado)
			cout << "impeachment" << endl;
		else
			cout << "acusacao arquivada" << endl;
	}

	return 0;
}