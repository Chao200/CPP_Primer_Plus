#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>

using std::ostream;
using std::istream;

class String
{
private:
    char* str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    // 构造函数
    String(const char*);
    // 默认构造函数
    String();
    // 拷贝构造函数
    String(const String&);
    // 析构函数
    ~String();
    // 返回字符串长度
    int length() const {return len;}

    // 重载 =
    String& operator=(const String&);
    String& operator=(const char*);
    // 重载 []，非 const 版本 和 const 版本
    char& operator[](int i);
    const char& operator[](int i) const;

    // 友元函数重载
    friend bool operator<(const String& st1, const String& st2);
    friend bool operator>(const String& st1, const String& st2);
    friend bool operator==(const String& st1, const String& st2);
    friend ostream& operator<<(ostream& os, const String& st);
    friend istream& operator>>(istream& is, String& st);

    // 静态函数
    static int HowMany();
};

#endif