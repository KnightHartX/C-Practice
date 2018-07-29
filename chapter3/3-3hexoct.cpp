//这个程序主要介绍了cout的一些特性：无论存进去的是几进制，输出的都是十进制。
#include<iostream>
using namespace std;
int main(){
    int a = 1000;//十进制
    int b = 0x0010;//十六进制
    int c = 042;//八进制
    cout<<a<<endl<<b<<endl<<c<<endl;//a、b、c输出的为十进制格式
}