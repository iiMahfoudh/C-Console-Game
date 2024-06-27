//Power Function From Scratch
#include <iostream>
#include <iomanip>

using namespace std;
double ous(double arg,double arg2);

int main(){
  double x,y;
  cin >> x >> y;
  cout << fixed << setprecision(2) << ous(x,y) ;
}

double ous(double arg,double arg2){
  double pow = 1;
  for(int i=1;i<=arg2;i++){
  pow *= arg;
  }
  return pow;
}
