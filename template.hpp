#ifndef BAG_H_
#define BAH_H_

template <typename ItemType>
class Bag
{
public:
    int getCurrentSize() const; //This const will not modify the object
    bool isEmpty() const;
    bool add(const ItemType &new_entry);

private:
    int size;
};

#include "template.cpp"
#endif