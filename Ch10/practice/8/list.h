#ifndef LIST_H_
#define LIST_H_

typedef int Item;

class List
{
private:
    enum {MAXSIZE = 5};
    Item items[MAXSIZE];
    int size;

public:
    List();
    bool add(const Item& item);
    bool isempty() const;
    bool isfull() const;
    void show() const;
    void visit(void (*pf)(Item&));
};

void plus10(Item& item);
#endif