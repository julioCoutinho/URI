#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	double a,b,c;
	std::vector<double> vet;

	cin >> a >> b >> c;

	vet.push_back(a);
	vet.push_back(b);
	vet.push_back(c);

	sort(vet.begin(),vet.end());

	reverse(vet.begin(),vet.end());

    if(vet[0] >= vet[1] + vet[2])
    {
    	cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if(pow(vet[0],2) == pow(vet[1],2) + pow(vet[2],2))
    {
    	cout << "TRIANGULO RETANGULO" << endl;
    }
    else if(pow(vet[0],2) > pow(vet[1],2) + pow(vet[2],2))
    {
		cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if(pow(vet[0],2) < pow(vet[1],2) + pow(vet[2],2))
    {
    	cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(pow(vet[0],2) == pow(vet[1],2) && pow(vet[0],2) == pow(vet[2],2) && pow(vet[1],2) == pow(vet[2],2))
    {
    	cout << "TRIANGULO EQUILATERO" << endl;	
    }
    else if((pow(vet[0],2) == pow(vet[1],2)) || (pow(vet[0],2) == pow(vet[2],2)) || (pow(vet[1],2) == pow(vet[2],2)))
    {
    	cout << "TRIANGULO ISOSCELES" << endl;
    }

	return 0;
}
