#include <iostream>
#include <new>
#include <string>
struct chaff
{
    char dross[20];
    int slag;
};

const int BUF = 512;
char buffer[BUF];

int main()
{
    char dross[20];
    int slag;
    chaff *chaff_ptr1 = new (buffer) chaff[2];
    chaff *chaff_ptr2 = new chaff[2];

    for (int i = 0; i < 2; ++i)
    {
        std::cout << "Input dross: ";
        std::cin.getline(dross, 20);
        std::cout << "Input slag: ";
        std::cin >> slag;
        std::cin.get();

        strcpy(chaff_ptr1[i].dross, dross);
        strcpy(chaff_ptr2[i].dross, dross);
        chaff_ptr1[i].slag = slag;
        chaff_ptr2[i].slag = slag;
    }

    for (int i = 0; i < 2; ++i)
    {
        std::cout << "chaff_ptr1->";
        std::cout << "chaff[" << i << "]: \n"
        << "dross: " << chaff_ptr1[i].dross 
        << ", slag: " << chaff_ptr1[i].slag << std::endl;

        std::cout << "chaff_ptr2->";
       std::cout << "chaff[" << i << "]: \n"
        << "dross: " << chaff_ptr2[i].dross 
        << ", slag: " << chaff_ptr2[i].slag << std::endl;
    }

    return 0;
}

