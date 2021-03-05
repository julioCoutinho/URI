#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double area,r,pi;
    pi = 3.14159;
    cin>>r;
    area = pow(r,2)*pi;
    cout.precision(4);
    cout <<std::fixed;
    cout <<"A="<<area<<endl;
    return 0;
}