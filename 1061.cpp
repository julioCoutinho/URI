#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string lixo;
	int dia1,dia2, hora1,minuto1,segundo1,hora2,minuto2,segundo2;
	int hora,minuto,segundo,dia;
	cin >> lixo;
	cin >> dia1;
	cin >> hora1;
	cin >> lixo;
	cin >> minuto1;
	cin >> lixo;
	cin >> segundo1;
	cin >> lixo;
	cin >> dia2;
	cin >> hora2;
	cin >> lixo;
	cin >> minuto2;
	cin >> lixo;
	cin >> segundo2;

	dia = dia2-dia1;
	
	if(hora1 > hora2)
	{
		if(dia > 0)
		{
			dia--;
			hora = 24 - (hora1 - hora2);
		}
		else
		{
			dia = 0;
			hora = 24 - (hora1 - hora2);
		}
	}
	else
	{
		hora = hora2 - hora1;
	}


	if(minuto1 > minuto2)
	{
		if(hora > 0)
		{
			hora--;
			minuto = 60 - (minuto1 - minuto2);	
		}
		else
		{
			dia--;
			hora = 23;
			minuto = 60 - (minuto1 - minuto2);
		}
	}
	else
	{
		minuto = minuto2 - minuto1;
	}

	if(segundo1 > segundo2)
	{
		if(minuto > 0)
		{
			minuto--;
			segundo = 60 - (segundo1 - segundo2);
		}
		else
		{
			if(hora > 0)
			{
				hora--;
				minuto = 59;
				segundo = 60 - (segundo1 - segundo2);
				cout << "entrei" << endl;
			}
			else
			{
				dia--;
				hora = 23;
				minuto = 59;
				segundo = 60 - (segundo1 - segundo2);
			}
		}
	}
	else
	{
		segundo = segundo2 - segundo1;
	}
	
	cout << dia << " dia(s)" << endl;
	cout << hora << " hora(s)" << endl;
	cout << minuto << " minuto(s)" << endl;
	cout << segundo << " segundo(s)" << endl;





	return 0;
}
