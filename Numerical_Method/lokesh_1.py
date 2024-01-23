#!/usr/bin/env python
# coding: utf-8

# In[22]:


# pip install prettytable 


# In[25]:


from prettytable import PrettyTable as pt


# In[26]:


euler = pt(["x", "y"])


# In[27]:


#function
dy = lambda x,y : ((y**2 - x**2) / (y**2 + x**2))


# In[59]:


#initialization
a=0 ; b=1; h= 0.2
n= int ((b-a) / h)
x = 0; y = 1

for i in range(0, n+1):
    euler.add_row(['%.4f' % x ,'%.4f' % y])
    y = y + dy(x,y) * h
    x += h

print(euler)
euler.clear_rows()




# In[ ]:





# In[ ]:





# In[ ]:




