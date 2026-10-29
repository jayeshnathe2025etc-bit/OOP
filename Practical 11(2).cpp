//Function template
#include <iostream>
using namespace std;
template<class T>
T add(T m,T n)
{ 
    return m+n;
}
template<class T>
T sub( T m,T n){
    return m-n;
}
int main(){
    cout<<"\nInteger addition is:";
    cout<<add<int>('a','b');
      cout<<"\nInteger substraction is:";
    cout<<sub(9,5);
    cout<<endl;

    return 0;
}

