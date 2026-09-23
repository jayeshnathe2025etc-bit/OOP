#include <iostream>
using namespace std;

int main()
{ int i,sum=0;
    for(i=1;i<=50;i++)
    {if(i%2==0)
     sum+=i;
    }
    cout<< "sum of all even numbers from 1 to 50 is:"<<sum<<endl;
    sum=0;
     for(i=1;i<=50;i++)
    {if(i%2!=0)
     sum+=i;
    }
    cout<< "sum of all odd numbers from 1 to 50 is:"<<sum<<endl;
   

    return 0;
}
