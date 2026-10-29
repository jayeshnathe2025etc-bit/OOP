/* Write a C++ program to implement namespaces */
#include <iostream>
using namespace std;

namespace s1
{
    void disp()
    {
        cout << "Hello world ";
    }
}
namespace s2
{ int x=10;
    int disp()
    {
        return x*x;
        }
}
int main()
{
  s1::disp();
    cout<<endl;
    cout << "Result from s2: " << s2::disp() << endl; 
    return 0;
}
