//示例程序2-2,输出萝卜的数量！
#include <iostream>
int main()
{
    using namespace std;
    int carrots;
    cout << "how much carrots do you have?" << endl;
    cin >> carrots;
    cout << "I have " << carrots << " carrots" << endl;
    carrots--;
    cout << "Now I have " << carrots << " carrots";
    cin.get();
    cin.get();
    return 0;
}