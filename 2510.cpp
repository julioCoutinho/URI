#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t-->0)
    {
        string nome;
        cin >> nome;

        if(nome == "batmain")
            cout << 'N' << endl;
        else
            cout << 'Y' << endl;

    }

    return 0;
}
