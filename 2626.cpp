#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string leo,dodo,pepper;

    while(cin >> dodo >> leo >> pepper)
    {
        if((leo == "papel") && (dodo == "pedra") && (pepper == "pedra"))
        {
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        }
        else if((leo == "pedra") && (dodo == "tesoura") && (pepper == "tesoura"))
        {
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        }
        else if((leo == "tesoura") && (dodo == "papel") && (pepper == "papel"))
        {
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        }
        else if((dodo == "papel") && (leo == "pedra") && (pepper == "pedra"))
        {
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        }
        else if((dodo == "pedra") && (leo == "tesoura") && (pepper == "tesoura"))
        {
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        }
        else if((dodo == "tesoura") && (leo == "papel") && (pepper == "papel"))
        {
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        }
         else if((pepper == "papel") && (leo == "pedra") && (dodo == "pedra"))
        {
            cout << "Urano perdeu algo muito precioso..." << endl;
        }
        else if((pepper == "pedra") && (leo == "tesoura") && (dodo == "tesoura"))
        {
            cout << "Urano perdeu algo muito precioso..." << endl;
        }
        else if((pepper == "tesoura") && (leo == "papel") && (dodo == "papel"))
        {
            cout << "Urano perdeu algo muito precioso..." << endl;
        }
        else
        {
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        }
    }


    return 0;
}
