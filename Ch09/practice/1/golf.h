const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

// 非交互版本，设置值
void setgolf(golf &g, const char *name, int hc);

// 交互版本，用户设置 fullname 和 handicap
// 如果输入名字，返回 1；空 string 返回 0
int setgolf(golf &g);

// 设置 handicap 为新值
void handicap(golf &g, int hc);

// 显式 golf 结构体
void showgolf(const golf &g);