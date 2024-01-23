#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

class Determinant
{
    private:
        int i,j;
        double d1,d2,d3,D;
        double m[3][3];
    public:
        double determinant();
};

double Determinant::determinant()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>m[i][j];
        }
    }

    d1 = m[0][0]*((m[1][1]*m[2][2])-(m[1][2]*m[2][1]));
    d2 = m[0][1]*((m[2][2]*m[1][0])-(m[2][0]*m[1][2]));
    d3 = m[0][2]*((m[2][1]*m[1][0])-(m[2][0]*m[1][1]));

    D = d1-d2+d3;
    return(D);
}

int main()
{
    double X,Y,R;
    Determinant d;
    cout<<"ENTER THE ELEMENTS OF MATRIX A:\n";
    X=d.determinant();
    
    cout<<"ENTER THE ELEMENTS OF MATRIX B:\n";
    Y=d.determinant();
    
    R=X/Y;

    cout<<"DETERMINANT OF MATRIX A="<<X<<endl;
    cout<<"DETERMINANT OF MATRIX B="<<Y<<endl;
    cout<<"RATIO OF DETERMINANT="<<R;

}