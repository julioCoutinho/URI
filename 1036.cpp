#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
 double a,b,c,delta,x1,x2;
  cin >> a>>b>>c;
  cout << fixed << setprecision(5);
delta = (b*b) - (4*a*c);
 if(a == 0)
 {
   cout << "Impossivel calcular"<<endl;
 }
 else
 {
   if(((b*b) - (4*a*c)) >= 0)
   {
     x1 = (-b + (sqrt(delta)))/(2*a);
     x2 = (-b - (sqrt(delta)))/(2*a);
     cout << "R1 = " << x1 << endl;
     cout << "R2 = " << x2 << endl;
   }
   else
   {
      cout << "Impossivel calcular" << endl;
   }
 }
}