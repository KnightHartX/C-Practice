//程序清单2-6展示的是一个进制转换程序，主要涉及到的还是方法的调用
#include <iostream>
using namespace std;
float stonetopounds(float n)
{
    float pounds=n*14;
    return pounds;
}
int main()
{
    cout<<"input stones:";
    float stones;
    cin>>stones;
    float pounds=stonetopounds(stones);
    cout<<stones<<" stones = "<<pounds<<" pounds"<<endl;
    return 0;
}