#include <iostream>
#include <cctype>
#include "list.h"

int main()
{
    std::cout << "Please enter C to create your list, "
        << "P to process the list, "
        << "S to show the items, "
        << "Q to quit:\n";

    char ch;
    List list1;
    int data;
    while (std::cin >> ch && toupper(ch) != 'Q')
    {
        while (std::cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            std::cout << "\a";
            continue;
        }

        switch (ch)
        {
            case 'C':
            case 'c':
                if (list1.isfull())
                    std::cout << "The list already full.\n";
                else
                {
                    std::cout << "Enter the data: ";
                    std::cin >> data;
                    list1.add(data);
                }
                break;
            case 'P':
            case 'p':
                if (list1.isempty())
                    std::cout << "The list already empty.\n";
                else
                {
                    list1.visit(plus10);
                    std::cout << "Every data has plused 10.\n";
                }
                break;
            case 'S':
            case 's':
                list1.show();
                break;
        }
        std::cout << "Please enter C to create your list, "
            << "P to process the list, "
            << "S to show the items, "
            << "Q to quit:\n";
    }
    std::cout << "Bye\n";
}