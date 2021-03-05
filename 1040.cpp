#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a,b,c,d,media,media2;

	cin >> a >> b >> c >> d;

	media = ((a*2) + (b*3) + (c*4) + (d*1))/10;

	cout << fixed << setprecision(1);

	if(media < 5)
	{
		cout << "Media: " << media << endl;
		cout << "Aluno reprovado." << endl;
	} 		
	else
	{
		if(media >= 5 && media < 7)
		{
			cout << "Media: " << media << endl;
			cout << "Aluno em exame." << endl;
			cin >> a;
			media2 = (media + a)/2;
			cout << "Nota do exame: " << a << endl;
			if(media2 >5)
			{
				cout << "Aluno aprovado." << endl;
			}
			else
			{
				cout << "Aluno reprovado." << endl;
			}
			cout << "Media final: " << media2 << endl;
		}
		else
		{
			cout << "Media: " << media << endl;
			cout << "Aluno aprovado." << endl;
		}
	}
}