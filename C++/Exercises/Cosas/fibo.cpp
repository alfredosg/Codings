#include <iostream>
using namespace std;

int main(void)
{
int a=0,b=1,fib, k, N;

cin>> N;


if (N<=1)
{
cout << N;
}
else
{
for (k=2;k<=N;k++)
{
fib = a+b;
cout <<"\n"<< fib <<"\n";
a=b;
b=fib;
}

}


return 0;
}
