#include <iostream>
#include "golf.h"

int main()
{
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    golf andy;
    while (setgolf(andy))
    {
        showgolf(andy);
    }
    return 0;
}