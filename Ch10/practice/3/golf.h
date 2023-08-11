#ifndef GOLF_H_
#define GOLF_H_

class golf
{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;
public:
    // 非交互版本，设置值
    golf(const char *name, int hc);
    // 交互版本，用户设置 fullname 和 handicap
    // 如果输入名字，返回 1；空 string 返回 0
    golf();

    // 设置 handicap 为新值
    void sethandicap(int hc);

    // 显式 golf 结构体
    void showgolf() const;
};

#endif