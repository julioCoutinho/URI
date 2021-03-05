#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    double a,b;
    double res;

    cin >> a >> b;
    res  = a / b;

    cout.precision(2);

    cout << fixed << res << endl;

    return 0;
}
