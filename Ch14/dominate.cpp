class B
{
public:
    short q();
};

class C : virtual public B
{
public:
    long q();
    int omg;
};

class D : public C
{};

class E : virtual public B
{
private:
    int omg();
};

class F : public D, public E
{};