


#include <iostream>
using namespace std;

void mult(int num)
{

int i;

for (i = 1; i<= 10; i++)
{
cout << num <<" x "<< i << " = " << num*i << endl;
}


}

int main ()
{

int n;
cout << "gimme a number: ";
cin >> n;

mult(n);

return 0;
}
