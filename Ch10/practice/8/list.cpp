#include <iostream>
#include "list.h"

List::List()
{
    size = 0;
}

bool
List::add(const Item& item)
{
    if (isfull()) return false;
    items[size++] = item;
    return true;
}

bool
List::isempty() const
{
    return size == 0;
}

bool
List::isfull() const
{
    return size == MAXSIZE;
}

void
List::show() const
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "item[" << i << "]: " << items[i] << std::endl;
    }
}

void
List::visit(void (*pf)(Item& item))
{
    for (int i = 0; i < size; ++i)
    {
        pf(items[i]);
    }
}


void plus10(Item& item)
{
    item += 10;
}