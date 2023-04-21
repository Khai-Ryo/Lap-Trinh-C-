#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Nhap so: "; cin>>n;
	cout<<"\nSo nghich dao la: ";
	do
	{
		int a = n%10;
		cout<<a;
		n = n/10;
	}while(n);
	return 0;
}
