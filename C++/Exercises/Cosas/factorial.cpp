

#include <iostream>
using namespace std;

int main(void)

{

int n, i, num;

i = 1;
num = 1;
cout << "Introduce un numero: ";
cin >> n;

while (i<=n)
{
num = num*i;	;
i+=1;
cout << num << "\n";
}

cout << "El factorial de " << n <<" es "<< num <<"\n";


return 0;
}
