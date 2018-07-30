//程序3-6尝试将字符+1并输出以观察结果，并将字符串赋值到int型变量输出观察其结果。
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "please input a charcter:";
    cin >> ch;
    int a = ch;
    cout << "your input charcter is " << ch << " and its ASCⅡ code is " << a << endl;
    ch++;
    a = ch;
    cout << "the charcter+1 is " << ch << " and its ASCⅡ code is " << a << endl;
    cout.put(ch);
    cout<<endl;
    cout<<"using cout.put() to display a charcter!"<<endl;
    return 0;
}