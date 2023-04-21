#include<iostream>
using namespace std;

void Nhapmang(int a[3][60])
{
	for(int i = 0; i<60; i++)
	for(int j = 0; j<3; j++)
	{
		cout<<"Nhap phan tu a["<<j<<"]["<<i<<"] = ";
		cin>>a[j][i];
	}
}
void XuatMang(int a[3][60])
{
	for(int i = 0; i<3; i++)
	for(int j = 0; j<60; j++)
	{
		if(i == 0)
		{
			int Ax = a[i][j];
			cout<<"\nAx = "<<Ax;
		}
		if(i == 1)
		{
			int Ay = a[i][j];
			cout<<"\nAy = "<<Ay;
		}
		if(i == 2)
		{
			int Az = a[i][j];
			cout<<"\nAz = "<<Az;
		}
	}
}

int main()
{
	int a[3][60] = {0};
	Nhapmang(a);
	XuatMang(a);
	
	return 0;
}
