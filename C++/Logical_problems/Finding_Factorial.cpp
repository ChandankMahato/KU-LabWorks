#include <iostream>

int factorial(int n)
{
    
    int result =1;
    for (int i=1;i<=n;i++)
    {
        result*=i;
    }
    return result;
}

int main()
{
    int n;
    std::cout<<"n=?";
    std::cin>>n;

    try
    {
        if(n<0)
        {
            std::string msg = "n cannot be negative number";
            throw msg;
        }

        int f=factorial(n);
        std::cout<<n<<"!="<<f<<std::endl;
    }
      catch(const std::string &message)
    {
        std::cout <<message<<std::endl;
    }
}