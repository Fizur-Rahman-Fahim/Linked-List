#include<bits/stdc++.h>
using namespace std;

//pointer passing
/*void fun(int *ptr)
{
    *ptr=80;
}
int main()
{
    int x=10;
    int *p=&x;
    fun(p);
    cout<<x<<endl;
    return 0;
}*/


//passing referance
void fun(int * &ptr)
{
    cout<<&ptr<<endl;
    ptr=NULL; 
    cout<<ptr<<endl;
}
int main()
{
    int x=10;
    int *p=&x;
    cout<<&p<<endl;
    fun(p);
    cout<<p<<endl<<x;
    return 0;
}