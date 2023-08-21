#include <iostream>
using namespace std;
int main()
{
    cout << "raw name for char is" << typeid(char).name() <<endl;
    cout << "raw name for char is" << typeid(int).name() <<endl;
    cout << "raw name for char is" << typeid(float).name() <<endl;
    cout << "raw name for char is" << typeid(double).name() <<endl;
    cout << "raw name for char is" << typeid(bool).name() <<endl;
    cout << "raw name for char is" << typeid(void).name() <<endl;

    return 0;

}
