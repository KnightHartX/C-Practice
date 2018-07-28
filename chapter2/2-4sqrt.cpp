//示例程序2-4,涉及到了sqrt方法的使用
#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    cout<<"please input your home sqare:"<<endl;
    float sqare;
    cin>>sqare;
    float side;
    side=sqrt(sqare);
    cout<<"your home's side is "<<side<<" meters,you are a rich man like jueshi!";
    return 0;
}