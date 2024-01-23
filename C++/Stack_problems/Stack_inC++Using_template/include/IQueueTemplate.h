#include <iostream>

using namespace std;
template <class T>
class IQueue{
public:
    
    virtual void insert(const T &element) = 0;
    virtual void remove() = 0;
    virtual T rear() = 0;
    virtual T front() = 0;

    virtual ~IQueue(){};
};
