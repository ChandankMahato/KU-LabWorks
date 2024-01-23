#include <iostream> 
using namespace std; 
template <class T>

class BUBBLE
{
    private:
        T a[];
        int n;
    public:
        void bubbleSort(T a[], int n);
};

template <class T>
void BUBBLE<T>::bubbleSort(T a[], int n)
{ 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; i < j; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap(a[j], a[j - 1]);
            }   
        }      
    }        
} 
   
int main()
{ 
    BUBBLE<int> b1;
    BUBBLE<float> b2;
    BUBBLE<char> b3;

    cout<<"#####################################################"<<endl;

    int a[5] = {1, 5, 3, 4, 2}; 
    int n = sizeof(a) / sizeof(a[0]);
    b1.bubbleSort(a, 5); 
    cout << "SORTED ARRAY (INTEGER DATATYPE): "; 
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " "; 
    } 
    cout<<endl;

    float b[5]={1.1, 5.3, 2.2, 7.4, 0.1};
    int m=sizeof(b) / sizeof(b[0]);
    b2.bubbleSort(b,5);
    cout<<"SORTED ARRAY (FLOAT DATATYPE) : ";
    for(int i=0;i<m;i++)
    {
        cout<< b[i]<< " ";
    }
    cout<<endl;

    char c[5]{'A', 'E', 'C', 'B', 'D'};
    int o=sizeof(c) / sizeof(c[0]);
    b3.bubbleSort(c,5);
    cout<<"SORTED ARRAY (CHAR DATATYPE) :";
    for(int i=0;i<o;i++)
    {
        cout<<c[i]<< " ";
    }
    cout<<endl;
    
    cout<<"#####################################################"<<endl;
    return 0; 
} 
