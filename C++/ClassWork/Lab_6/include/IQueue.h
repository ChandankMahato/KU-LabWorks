#include <iostream>

using namespace std;

class IQueue{
public:
    virtual void insert(const int &element) = 0;
    virtual void remove() = 0;
    virtual int rear() const = 0;
    virtual int front() const = 0;

    virtual ~IQueue(){};
};
