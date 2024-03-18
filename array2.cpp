#include<iostream>

using namespace std;

int main()
{
	int a[] {1,2,3,4};
	int b[] {3,2,1,4};
	int i,j,c[3];
	
	for(i=0;i<sizeof(a);i++)
	{
		for(j=0;j<sizeof(b);j++){
			if ( i == j )
			{
				c[0] = i + j;
			}
			
		}
	}
	
	return c[0];

}