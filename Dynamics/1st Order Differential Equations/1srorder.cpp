/*This is a simple code that solves the differential equation
$\frac{dN}{dt}=-\alpha N$
*/
//Including libraries
#include<iostream> // This one is used to print using cout.
//Declaration of functions
double dNdt(double N,double t);
int main(){
  //Initial conditions
  double  dt=0.001;
  double N0=1;
  double t0=0;
  int n=10000;
  //Integration by using the simples method
  for(int i=0;i<n;i++){
    N0+=dt*dNdt(N0,t0);
    t0+=dt;
    std::cout<<t0<<'\t'<<N0<<std::endl;
  } 
  return 0;
}
//Definition of functions
double dNdt(double N,double t){
  double aux=1.;
  return -aux*N;
}
