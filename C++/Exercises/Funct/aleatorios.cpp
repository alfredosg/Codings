
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
int f;


srand(time(NULL));
f = rand() % 10+1; // between 0 and 10
cout << f <<"\n";

return 0;
}
