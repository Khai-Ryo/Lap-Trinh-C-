#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	int demkytu = 0, demtu = 1;
	char ch = 'a';
	
	cout<<"Nhap van ban chu thuong:"<<endl;
	
	while(ch != '\r')
	{
		ch = getche();
		if (ch == ' ')
		demtu++;
		else
		demkytu++;
	}
	
	cout<<"\nSo tu la: "<<demtu;
	cout<<"\nSo ky tu la: "<<demkytu-1;
	
	return 0;
}
