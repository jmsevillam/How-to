/*This is a simple code that solves the differential equation
  $\frac{d^2\theta}{dt^2}=-k \theta$
*/
//Including libraries
#include<iostream> // This one is used to print using cout.
//Declaration of functions
double dvdt(double x1,double v1,double t1);
double dxdt(double x1,double v1,double t1);
int main(){
  //Initial conditions
  double  dt=0.001;
  double x=1;
  double v=0;
  double t=0;
  double x0,v0;
  int n=100000;
  //Integration by using the simples method
  for(int i=0;i<n;i++){
    //We are using the old values to calculate the newones
    x0=dt*dxdt(x,v,t);
    v0=dt*dvdt(x,v,t);
    //We update the values.
    x+=x0;
    v+=v0;
    t+=dt;
    std::cout<<t<<'\t'<<x<<'\t'<<v<<std::endl;
  } 
  return 0;
}
//Definition of functions
double dvdt(double x1,double v1,double t1){
  double k=1.;
  return -k*x1;
}
double dxdt(double x1,double v1,double t1){
  return v1;
}
