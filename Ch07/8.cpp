// #define 存在的问题
#include <iostream>
#define SQUARE(X) X*X
double a = SQUARE(3.0);
double b = SQUARE(4.5 + 3.5);
int i = 1;
double c = SQUARE(i++);
