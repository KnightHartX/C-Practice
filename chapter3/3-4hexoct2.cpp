//程序3-5展示了如何使用cout输出不同进制的数值。
#include <iostream>
using namespace std;
int main()
{
    int a = 1000;   //十进制
    int b = 0x0010; //十六进制
    int c = 042;    //八进制
    cout << a << endl;//以十进制格式输出a
    cout<<hex;//更改cout的输出格式为16进制
    cout<< b << endl;//以十六进制的格式输出b
    cout<<oct;//更改cout的输出格式为8进制
    cout<< c << endl;//以八进制格式输出c
}