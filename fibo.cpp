#include <iostream>
using namespace std;

int fibo(int n)
{
    if(n==1 or n==0)
    return n;

    else
    {
        return (fibo(n-1)+fibo(n-2));
    }
}

int main()
{
   cout<<fibo(9); 
}