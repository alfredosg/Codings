

#include <iostream>
using namespace std;

int main(void)
{

float a, b, c, r;

cout<< "Introduce three real numbers: ";
cin >> a >> b >> c;
r = a+b+c; 
cout<< "---------------------"<<endl;

cout.precision(2);
cout.setf(ios::fixed);
cout.setf(ios::right);
cout.setf(ios::showpoint); 

cout.width(5); cout.fill('0'); cout << a << endl;
cout.width(5); cout.fill('0'); cout << b << endl;
cout.width(5); cout.fill('0'); cout << c << endl;
cout << "--------" << endl;
cout.width(5); cout.fill(' '); cout << r << endl;



return 0;
}
