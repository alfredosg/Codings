#include <iostream>
#define size 3

using namespace std;
void fill(int v[size]);
void show(int v[size]);
void find(int v[size],int&x);

/*****************************************************************/
/* Function: fill                                                */
/* Description: fills				                         */
/*****************************************************************/
void fill(int v[size])
{
	int i;
	for (i=0;i<size;i++)
	{
		cin>>v[i];
	}
}

/*****************************************************************/
/* Function: show                                                */
/* Description: shows				                         */
/*****************************************************************/
void show(int v[size])
{
	int i;
	cout <<"[";
	for (i=0;i<size;i++)
	{
		cout<<v[i]<<" ";
	}
	cout <<"]"<<endl;
}

/*****************************************************************/
/* Function: find                                                */
/* Description: searchs 				                         */
/*****************************************************************/
void find(int v[size], int&x)
{
	int i=0,found=(-1);
	
	while ((i<size) && (v[i] != x))
	{ i=i+1;}
	
		if (i == size)
		{
			cout << "Can't find the value"<<endl;
		}
		else
		{
			i = found;
			cout << "Value found."<<endl;
		}
		
	
}

/*********/
int main()
{
int v[size],x;
cout<< "Fill up" <<endl;
fill(v);
cout <<endl;
cout<< "Search" <<endl;
cin>> x;
find(v,x);
cout <<endl;
show(v);



return 0;	
}

