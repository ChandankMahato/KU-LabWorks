#!/usr/bin/env python
# coding: utf-8

# In[22]:


# pip install prettytable 


# In[2]:


import math
import matplotlib.pyplot as plt


# In[3]:


from prettytable import PrettyTable as pt


# In[4]:


euler = pt(["x", "y"])


# In[11]:


#function
dy = lambda x,y : (y*(1+x**2)) #((y**2 - x**2) / (y**2 + x**2))
# f = lambda x: math.exp(2*x)


# In[16]:


#initialization
a=0 ; b=1; h= 0.2
n= int ((b-a) / h)
x = 0; y = 1

x_plot = []; y_plot = []; # y_analytic = []

for i in range(0, n+1):
    euler.add_row(['%.4f' % x ,'%.4f' % y])
    x_plot.append(x); y_plot.append(y); #y_analytic.append(f(x))
    y = y + dy(x,y) * h
    x += h

print(euler)
plt.plot(x_plot, y_plot,'go-') #, x_plot, y_analytic)
# plt.legend(['Euler', 'Analytical'])
plt.xlabel('x-axis'); plt.ylabel('y-axis')
euler.clear_rows()


# euler.add_row(['%.4f' % x ,'%.4f' % y])
# x_plot.append(x); y_plot.append(y); y_analytic.append(f(x))


# In[ ]:





# In[ ]:




