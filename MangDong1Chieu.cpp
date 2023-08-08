
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void NhapMang(int *a, int n)
{
	for(int i = 0; i<n ; i++)
	{
		printf("Nhap a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int *a, int n)
{
	for(int i = 0; i<n ; i++)
	{
		printf("\na[%d]= %d", i, a[i]);
	}
}

int main()
{
	int n;
	do{
		printf("\nNhap n = ");
		scanf("%4d", &n);
	}while(n<0);
	
	int *a = (int *) malloc(n * sizeof(int));
	NhapMang(a, n);
	XuatMang(a,n);
	
	free(a);
	getch();
	return 0;
}


