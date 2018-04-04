
#include <iostream>
using namespace std;
int main()
{
	int size = 3,i,j;
	int vec[size] = {1,2,3};
	int mat[size][size] = {{1,0,0},{0,1,0},{0,0,1}};
	for (j=0;j<size;j++)
	{
		cout << vec[j] <<endl;
	}
	
	
	for (i=0;i<size;i++)
	{
		for (j=0;j<size;j++)
		{
			cout<<mat[i][j];
		}
		cout <<endl;
	}
	
	
return 0;
}
