//示例程序2-3,添加了cin
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