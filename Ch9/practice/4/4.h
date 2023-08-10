namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    // 拷贝不大于 4 个或者 n 个 ar 数组元素到 s 的 sales 成员
    // 计算 平均值，最大值，最小值，sales 剩余元素为 0
    void setSales(Sales &s, const double ar[], int n);

    // 交互式输入元素
    void setSales(Sales &s);

    // display
    void showSales(const Sales &s);
}