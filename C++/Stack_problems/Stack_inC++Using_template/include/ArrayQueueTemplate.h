#ifndef LAB_6_ARRAYQUEUE_H
#define LAB_6_ARRAYQUEUE_H

#include "IQueueTemplate.h"

#define SIZE 5

template <class T>

class ArrayQueue : public IQueue<T>{
private:
    int r,f;
    T array[SIZE];
        
public:
    T x[5];
    int i;

    ArrayQueue()
    {
        f = r = -1;
    }
    void insert(const T &element) override;
    void enter();
    void remove() override;
    T rear() override;
    T front() override;

    bool is_full() const;
    bool is_empty() const;
};
#endif //LAB_6_ARRAYQUEUE_H
