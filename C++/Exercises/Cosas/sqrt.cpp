#include <iostream>
using namespace std;

int main(void)
{

float N, x;

int i,M;
i=1;
M = 10;

x=1;
cin >> N;

while (i<=M)
{
x = 0.5*((N/x)+x);
i++;
}



cout <<"sqrt("<< N <<") = "<< x << "\n";





return 0;
}
