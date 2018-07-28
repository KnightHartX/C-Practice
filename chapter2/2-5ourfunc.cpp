//示例程序2-5,定义一个方法，并使用它。
#include <iostream>
using namespace std;
void simon(int n)
{
    cout << "simon touch your toe " << n << " count!" << endl;
}
int main()
{
    simon(6);
    cout << "input a inter:";
    int a;
    cin >> a;
    simon(a);
    return 0;
}