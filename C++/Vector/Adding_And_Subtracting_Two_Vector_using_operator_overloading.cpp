#include <iostream>
#include <vector>
#include <math.h>

class Vector
{
    private:
        double *x,*y,*z;
        bool isRowVector;
    public:
        Vector();

        Vector(double,double,double,bool);

        Vector operator+(const Vector&V);
        Vector operator-(const Vector&V);

        bool rowVector() const;
        
        ~Vector();

        void execution();

        void output();
};

Vector::Vector()
{
    x=NULL;
    y=NULL;
    z=NULL;
    isRowVector = true;
}

void Vector::output()
{
    std::cout<<"\nResultant Vector:\n";
    std::cout<<*(this->x)<<"\n"<<*(this->y)<<"\n"<<*(this->z)<<std::endl;

    char choice;
    std::cin>>choice;

    if(choice=='y' || choice=='Y')
    {
        execution();
    }
    else if(choice=='n' || choice=='N')
    {
        std::cout<<"Thank for using the programme!\n"<<std::endl;
    }
    else
    {
        std::cout<<"Wrong Input!"<<std::endl;
        std::cout<<"Try Something Else!"<<std::endl;
        std::cin>>choice;
        if(choice=='y'||choice=='Y')
        {
            execution();
        }
    }
}

Vector::Vector(double x, double y, double z, bool isRowVector)
{
    this->x=new double (x);
    this->y=new double (y);
    this->z=new double (z);
    this->isRowVector = isRowVector;
}

Vector Vector::operator+(const Vector&other1)
{
    if(this->rowVector()==other1.rowVector())
    {
        double e1,e2,e3;
        e1=*(this->x)+*(other1.x);
        e2=*(this->y)+*(other1.y);
        e3=*(this->z)+*(other1.z);

        Vector V(e1,e2,e3,true);
        return V;
    }
      else
    {
        std::cout<<"Row Vector andn Column Vector Cannot be Added!\nDo You Want To Continue\nPress Y for Yes And N for No!\n";
        char choice;
        std::cin>>choice;
        if(choice=='Y' || choice=='y')
        {
            execution();
        }
        else if(choice=='N' || choice=='n')
        {
            std::cout<<"Thank You For using my programme!";
        }
        else
        {
            std::cout<<"Wrong Input!"<<std::endl;
            std::cout<<"Try Something Else!"<<std::endl;
            std::cin>>choice;
            if(choice=='y'||choice=='Y')
            {
                execution();
            }
        }
    }

}
Vector Vector::operator-(const Vector&other1)
{
      if(this->rowVector()==other1.rowVector())
    {
        double e1,e2,e3;
        e1=*(this->x)-*(other1.x);
        e2=*(this->y)-*(other1.y);
        e3=*(this->z)-*(other1.z);

        Vector V(e1,e2,e3,true);
        return V;
    }
    else
    {
        std::cout<<"Row Vector and Column Vector Cannot be Subtracted!\nDo You Want To Continue\nPress Y for Yes And N for No!\n";
        char choice;
        std::cin>>choice;
        if(choice=='Y' || choice=='y')
        {
            execution();
        }
        else if(choice=='N' || choice=='n')
        {
            std::cout<<"Thank You For using my programme!";
        }
        else
        {
            std::cout<<"Wrong Input!"<<std::endl;
            std::cout<<"Try Something Else!"<<std::endl;
            std::cin>>choice;
            if(choice=='y'||choice=='Y')
            {
                execution();
            }
        }
    }
}


Vector::~Vector()
{
    delete x,y,z;
}

bool Vector::rowVector() const{
    return this->isRowVector;
}

void Vector::execution()
{
    double a1,a2,a3;
    double b1,b2,b3;

    std::cout<<"\n This Progaram is for row vector's or column vector's and currently takes only three inputs!\n";

    std::cout<<"Input Section!\n";
    std::cout<<"Enter the elmeents of vector A:\n";
    std::cin>>a1>>a2>>a3;

    std::cout<<"Enter the elements of vector B:\n";
    std::cin>>b1>>b2>>b3;

    std::cout<<"Ouput Section!\n";
    std::cout<<"######################################\n";

    int operation;
    std::cout<<"1.ADD 2.SUBTRACT 3.Multiplication"<<std::endl;
    std::cin>>operation;

    if(operation==1)
    {
        Vector V1(a1,a2,a3,true);
        Vector V2(b1,b2,b3, false);
        Vector V3=V1+V2;
        V3.output();
    }
    else if(operation==2)
    {
        Vector V1(a1,a2,a3,true);
        Vector V2(b1,b2,b3,true);
        Vector V4=V1-V2;
        V4.output();
    }

    std::cout<<"#####################################";

}

int main()
{
    Vector e;

    
    std::cout<<"\nDo You Want To Continue!"<<std::endl;
    std::cout<<"Press Y for yes And N for No!"<<std::endl;

    char choice;
    std::cin>>choice;

    if(choice=='y' || choice=='Y')
    {
        e.execution();
    }
    else if(choice=='n' || choice=='N')
    {
        std::cout<<"Thank for using the programme!\n"<<std::endl;
    }
    else
    {
        std::cout<<"Wrong Input!"<<std::endl;
        std::cout<<"Try Something Else!"<<std::endl;
        std::cin>>choice;
        if(choice=='y'||choice=='Y')
        {
            e.execution();
        }
    }
    
    std::cin>>choice;
    std::cout<<"Do You Want To Exit!\nPress Y if yes!\n"<<std::endl;
    if(choice=='y' || choice=='Y')
    {
        main();
    }
}