#=
This is a simple code that solves the differential equation
$\frac{d^2\theta}{dt^2}=-k \theta$
=#
#Definition of Functions
function dxdt(x1,v1,t1)	
    return v1		
end	   
function dvdt(x1,v1,t1)
    k=1.
    return -k*x1
end
#Initial conditions
dt=0.001
x=1.
v=0.
t=0.
n=10000
#integration by using the simples method
for i= 0:n
    global x,v,t
    x0=dt*dxdt(x,v,t)
    v0=dt*dvdt(x,v,t)
    x+=x0
    v+=v0
    t+=dt
    println(t,' ',x,' ',v)
end