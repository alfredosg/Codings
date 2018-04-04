


#include <iostream>
using namespace std;

int factorial (int N)
{
int i, fact = 1;

for (i = 1; i<=N; i++)
{
fact = fact*i;
}

return fact;
}

int main()
{
int N, res;

cout << "Ya tu sabeh: ";
cin >> N;

res = factorial(N);

cout << "fact(" << N <<") = " << res <<"\n";

return 0;
}
