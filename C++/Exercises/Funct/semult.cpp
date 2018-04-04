/***********************************
*learn multiplications             *
*				   *	
*				   *	
*				   *
*				   *			
*				   *
************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;
/**********************************/
/*random 2*/

long aleat2()
{

long r,res;
int a = 2, b = 9;
r = rand();
res = a+(r*(b-a)/RAND_MAX);
return res;

}
/**********************************/
/*try again*/

void bienmal(long ans, long test)
{

while (test != ans)
{
cout << "Wrong, try again: ";
cin >> test;
}
cout << "Right!" <<endl;
}


/**********************************/
/*MAIN*/

int main()
{
srand(time(NULL));
long x,y,z,w;

do
{
{
x = aleat2();
y = aleat2();
w = x*y;
cout << x << " x "<< y << " = ";
cin >> z;
if (z==0)
{break;}
bienmal(w,z);
}} while(z!=0);
return 0;

	
}



/**********************************/
/*random 1*/
int aleat(int a,int b)
{
long res,r;   // long para que no se salga de madre
srand(time(NULL));
r = random();
res = a+(r*(b-a)/RAND_MAX);
return res;
}
