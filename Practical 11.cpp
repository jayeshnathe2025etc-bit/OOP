// Template class
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

// Function template
#include <iostream>
using namespace std;
template<class T>
class calculator
{
  T num_1,num_2;
    public:
    calculator(T n1 ,T n2)
    {
        num_1 = n1;
         num_2 = n2;
    }
    T add()
    {
        return num_1+num_2;
    }
     T sub()
    {
        return num_1-num_2;
    }
   T multiply()
    {
        return num_1*num_2;
    }
 T divide()
    {
        return num_1/num_2;
    }
};
int main()
{ 
    calculator <int>c1('4','2');
    calculator<double> c2(7.8,8.3);
    cout<<"\n Addition is \t"<< c1.add();
    cout<<"\n substraction is \t"<< c1.sub();
    cout<<"\n multiplication is \t"<<c1.multiply();
    cout<<"\n divide is \t"<<c1.divide();
      cout<<"\n Addition is \t"<< c2.add();
    cout<<"\n substraction is \t"<< c2.sub();
    cout<<"\n multiplication is \t"<<c2.multiply();
    cout<<"\n divide is \t"<<c2.divide();
    return 0;
}
