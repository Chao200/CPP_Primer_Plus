#include <iostream>
#include "string1.h"

// 静态变量的定义
int String::num_strings = 0;

// 静态函数
int 
String::HowMany()
{
    return num_strings;
}

// 构造函数
String::String(const char* s)
{
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str, s);
    ++num_strings;
}

// 默认构造函数
String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    ++num_strings;
}

// 拷贝构造函数
String::String(const String& st)
{
    ++num_strings;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str, st.str);
}

// 析构函数
String::~String()
{
    --num_strings;
    delete[] str;
}

// 重载 =
String&
String::operator=(const String& st)
{
    if (this == &st) return *this;
    delete[] str;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str, st.str);
    return *this;
}

String&
String::operator=(const char* s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str, s);
    return *this;
}

// 重载 []，非 const 版本 和 const 版本
char&
String::operator[](int i)
{
    return str[i];
}

const char& 
String::operator[](int i) const
{
    return str[i];
}

// 友元函数重载
bool
operator<(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool
operator>(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) > 0);
}

bool operator==(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream&
operator<<(ostream& os, const String& st)
{
    os << st.str << std::endl;
    return os;
}

istream&
operator>>(istream& is, String& st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is) st = temp;
    while (is && is.get() != '\n') continue;
    return is;
}

