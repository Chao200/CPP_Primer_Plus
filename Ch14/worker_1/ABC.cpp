class A
{
    int a;
public:
    A(int n = 0) : a(n) {}
};

class B : public A
{
    int b;
public:
    B(int m = 0, int n = 0) : A(n), b(m) {}
};


class C : public B
{
    int c;
public:
    C(int p = 0, int m = 0, int n = 0) : B(m, n), c(p) {}
};