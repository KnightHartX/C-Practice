//程序3-2主要比较了有符号数和无符号数的范围以及越界情况。
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int signed_n_max = INT_MAX;
    unsigned int unsigned_n_max = signed_n_max;
    cout << "最大有符号整数+1的结果为：" << signed_n_max + 1 << endl;
    cout << "和最大有符号整数大小相同的无符号整数+1结果为：" << unsigned_n_max + 1 << endl;
    signed_n_max = unsigned_n_max = 0;
    cout << "有符号0-1结果为：" << signed_n_max - 1 << endl;
    cout << "无符号0-1结果为：" << unsigned_n_max - 1 << endl;
}
