//程序3-2主要比较了有符号数和无符号数的范围以及越界情况。
//注意，C++程序中不要出现中文！
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int signed_n_max = INT_MAX;
    unsigned int unsigned_n_max = signed_n_max;
    cout << "the maxvalue of signed inter+1:" << signed_n_max + 1 << endl;//最大有符号整数+1的结果
    cout << "the same value of INT_MAX of unsigned+1:" << unsigned_n_max + 1 << endl;//和最大有符号整数大小相同的无符号整数+1结果
    signed_n_max = unsigned_n_max = 0;
    cout << "signed 0 -1:" << signed_n_max - 1 << endl;//有符号0-1结果
    cout << "unsigned 0 -1:" << unsigned_n_max - 1 << endl;//无符号0-1结果为：
}
