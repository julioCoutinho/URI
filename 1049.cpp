#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string a,b,c,animal;

	cin >> a >> b >> c;

	if(a == "vertebrado")
	{
		if(b == "ave")
		{
			if(c == "carnivoro")
			{
				animal = "aguia";
			}
			else if(c == "onivoro")
			{
				animal = "pomba";
			}
		}
		else if(b == "mamifero")
		{
			if(c == "onivoro")
			{
				animal = "homem";
			}
			else if(c == "herbivoro")
			{
				animal = "vaca";
			}
		}
	}
	else if(a == "invertebrado")
	{
		if(b == "inseto")
		{
			if(c == "hematofago")
			{
				animal = "pulga";
			}
			else if(c == "herbivoro")
			{
				animal = "lagarta";
			}
		}
		else if(b == "anelideo")
		{
			if(c == "hematofago")
			{
				animal = "sanguessuga";
			}
			else if(c == "onivoro")
			{
				animal = "minhoca";
			}
		}
	}

	cout << animal << endl;

	return 0;
}
