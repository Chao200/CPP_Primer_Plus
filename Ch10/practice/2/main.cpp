#include <iostream>
#include "person.h"

int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    one.FromalShow();
    two.Show();
    two.FromalShow();
    three.Show();
    three.FromalShow();
}