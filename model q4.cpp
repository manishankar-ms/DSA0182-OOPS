#include<iostream>
using namespace std;
int main()
{
	int matrix[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int sum_major = 0;
	int sum_minor = 0;
	for (int i = 0; i < 3;i++)
	{
		sum_major += matrix[i][i];
		sum_minor += matrix[i][3-i-1];
	}
	cout<<"sum of major diagonals: "<<sum_major<<endl;
	cout<<"sum of minor diagonals: "<<sum_minor<<endl;
	return 0;
}
