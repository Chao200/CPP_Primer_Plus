#ifndef STRNG_H_
#define STRNG_H_
#include <iostream>

class StringBad
{
private:
    char* str;
    int len;
    static int num_strings;
public:
    StringBad(const char*);
    StringBad();
    ~StringBad();
    friend std::ostream& operator<<(std::ostream& os, const StringBad& st);
};

#endif