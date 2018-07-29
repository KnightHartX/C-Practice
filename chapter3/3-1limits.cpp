//一个使用climits库函数显示所有变量类型长度和最大值的cpp程序
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    cout << "The size of int is " << sizeof(int) << " bytes" << endl;
    cout << "The size of intmax is " << sizeof(INT_MAX) << " bytes" << endl;
    cout << "The maxvalue of int is " << INT_MAX << endl;
    cout << "The minvalue of int is " << INT_MIN << endl;
}
