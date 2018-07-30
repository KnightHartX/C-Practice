//在程序3-5中您将看到，输入一个字符m，输出的将不是其ASCⅡ码值77，而是字符m，原因无疑是cin和cout帮助我们做的。
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"please input a charcter:";
    cin>>ch;
    cout<<"your input charcter is "<<ch<<endl;
}