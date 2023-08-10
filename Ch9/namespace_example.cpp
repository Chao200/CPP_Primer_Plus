#include <iostream>

namespace elements
{
    namespace fire
    {
        int flame;
    }
    float water;
}

namespace myth
{
    using namespace elements;
    using std::cin;
    using std::cout;
}

namespace MEF = myth::fire;
using MEF::flame;
