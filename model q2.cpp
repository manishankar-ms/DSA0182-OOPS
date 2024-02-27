#include<iostream>
using namespace std;
int main()
{
	int n,orgnum,rem,res=0;
	cout<<"Enter a three digit number: ";
	cin>>n;
	orgnum=n;
	while(orgnum != 0)
	{
		rem = orgnum % 10;
		res += rem*rem*rem;
		orgnum/= 10;
	}
	if(res==n)
	    cout<<n<<"is an amstrong";
	else
		cout<<n<<"is not an amstrongnumber";
    return 0;
}
