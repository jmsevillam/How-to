'''
This is a simple code that solves the differential equation
$\frac{d^2\theta}{dt^2}=-k \theta$
'''
#Definition of functions

def dxdt(x1,v1,t1):
    return v1
def dvdt(x1,v1,t1):
    k=1.
    return -k*x1
#Initial conditions
dt=0.001
x=1.
v=0.
t=0.
n=10000
#Integration by using the simples method
for i in range(n):
    x0=dt*dxdt(x,v,t)
    v0=dt*dvdt(x,v,t)
    x+=x0
    v+=v0
    t+=dt
    print(t,x,v)
