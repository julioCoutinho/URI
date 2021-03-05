#include <iostream>
#include <iomanip>

 
using namespace std;
 
int main() {
    
    double lanches[] = {4.00,4.50,5.00,2.00,1.50};


    int numero;
    double quantidade;
    cin >> numero;
    cin >> quantidade;
    cout << fixed << std::setprecision(2);
    cout << "Total: R$ "<<lanches[numero-1]*quantidade;
    cout << endl;
    
    return 0;
}