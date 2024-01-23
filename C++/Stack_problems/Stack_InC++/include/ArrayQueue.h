#ifndef LAB_6_ARRAYQUEUE_H
#define LAB_6_ARRAYQUEUE_H

#include "IQueue.h"

#define SIZE 5

class ArrayQueue : public IQueue{
private:
    int f, r;
    int array[SIZE];
public:
    ArrayQueue()
    {
        f = r = -1;
    }
    void insert(const int &element) override;
    void remove() override;
    int rear() const override;
    int front() const override;

    bool is_full() const;
    bool is_empty() const;
};
#endif //LAB_6_ARRAYQUEUE_H
