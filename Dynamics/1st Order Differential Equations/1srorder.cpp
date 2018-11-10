#include<iostream>
#include<cmath>
double dNdt(double N,double t);
int main(){
  double  dt=0.001;
  double N0=1;
  double t0=0;
  int n=10000;

  for(int i=0;i<n;i++){
    x0=x0+dt*dNdt(x0,t0);
    t0+=dt;
    std::cout<<t0<<'\t'<<N0<<std::endl;
  } 
  return 0;
}
double dNdt(double N,double t){
  double aux=1.;
  return -aux*N;
}
