# x=float(input("x0 = "))
# xn=float(input("xn = "))
# y=float(input("y0 = "))
# n=int(input("n = "))
# h=(xn-x)/n

# f = lambda x,y: y*(1+x**2)

# while(x != xn):
#     k1 = h * f(x,y)
#     k2 = h * f(x + h/2 ,y + k1/2)
#     k3 = h * f(x + h/2, y + k2/2)
#     k4 = h * f(x + h ,y + k3)

#     y = y + 1/6 * (k1+2*k2+2*k3+k4)
#     x=x+h

# print("Ans = ",y)
from pickle import TRUE
import numpy;

x0,y0 = input("Enter the initial value of x , y (float(x0),float(y0)): ").split(',')

xn =float(input("Enter the final value of x (xn): "))

n = int(input("Enter the number of intervals required: "))

h = (xn-float(x0))/n
def calcFunction (x,y):
    return h*(y*(1+x*x))

x = numpy.linspace( float(x0) , xn, num = n+1 , endpoint=TRUE)
y = numpy.zeros(n+1)
y[0] = float(y0)

print('h = ',h)

for i in range(n):
    k1 = calcFunction(x[i] , y[i])
    k2 = calcFunction(x[i] + h/2, y[i] + k1/2)
    k3 = calcFunction(x[i] + h/2, y[i] + k2/2)
    k4 = calcFunction(x[i] + h, y[i] + k3)

    y[i+1] = y[i] + 1/6 * (k1 + 2*k2 + 2*k3 + k4)

for i in range(n+1):
    print(x[i],'\t',y[i])

