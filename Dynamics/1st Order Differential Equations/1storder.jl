#=
This is a simple code that solves the differential equation
$\frac{dN}{dt}=-\alpha N$
=#
#Definition of Functions
function dNdt(N,t)
    aux=1.
    return -aux*N
end
#Initial conditions
dt=0.001
N0=1. 
t0=0.
n=10000
#integration by using the simples method
for i= 0:n
    global t0,N0
    N0+=dt*dNdt(N0,t0)
    t0+=dt
    println(t0,' ',N0)
end