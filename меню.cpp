#include<iostream>
#include<conio.h>
#include<locale>
#include<fstream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int i,j;

int array()
{
	int n;
	cout<<"�����������: ";
	cin>>n;
	return n;
}
void rand(int a[],int n)
{
	for(i=0;i<n;i++)
	a[i]=rand()%10;
}
void output(int a[],int n)
{
	cout<<"������: "<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
void trans(int a[], int n)
{
	cout<<"����������������� ������: "<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
void sum(int a[], int n)
{
	int s=0;
	for(i=0;i<n/2;i++)
	{
	s=a[i]+a[n-i-1];
	cout<<"�������� ����� ���������:";
	cout<<s<<"\t "<<endl;
	}
}
void del(int a[], int n, int x)
{
	for(i=0;i<n;i++)
	{
		if(i==x)
		{
		for(j=i;j<n;j++)
		a[j]=a[j+1];
		j--;
		n--;
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
void sort(int a[], int n) 
{
	int y,t;
	cout<<" Input y : ";
	cin>>y;
	for(t=0;t<n;t+=y)
      for(i=t;i<y+t+1;i++)
		for(j=i+1;j<y+t+1;j++)	
		{
		if(a[i]>a[j])
		swap(a[i],a[j]);
		output(a,n);
		cout<<endl;
		}
}
void file(int a[], int n)
{
	ofstream f1("ko.txt", ios::app);
	for(i=0;i<n;i++)
	f1<<a[i]<<" ";
	f1.close();
}
void arr2(int a[],int n)
{	int b[30][30],m;
m=n;
n=ceil(sqrt(n));
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{if(i*n+j<m)
b[i][j]=a[i*n+j];
else
b[i][j]=0;}

for(i=0;i<n;i++)
{for(j=0;j<n;j++)
cout<<b[i][j]<<" ";
cout<<endl;}
	
}
int menu()
{
	int q;
	cout<<"@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@"<<endl;
	cout<<"| 	���� ²����� ���������	  | "<<endl;
	cout<<"@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@"<<endl;
	cout<<"|��� �� �� ������ �������? �������� ����� �� �������� ����)| "<<endl;
	cout<<"1.������� ������ �� ����� "<<endl;
	cout<<"2.������������� ������ "<<endl;
	cout<<"3.������� �������� ����� ��������� �������(����� �������+���������, ������+������������� � �.�) "<<endl;
	cout<<"4.������� �������, ������� ���������� �� ������� � ������� � "<<endl;
	cout<<"5.��������� ������ Y ��������� �� ����������� (������� ������ ��������) "<<endl;
	cout<<"6.���������� ��������� ������ � ��������� ���� "<<endl;
	cout<<"7.��������� � ����������� ������� ���������� ������� ������������ �������"<<endl;
	cout<<"(� ������ ��������� ������������ ���������� ���������, ��������� 0) "<<endl;
	cout<<"8.�����. "<<endl;
	cin>>q;
	return q;
}
int main()
{
	int n,j,a[10],x,y,q,s=0,b[10][10];
	setlocale(LC_ALL,"rus");
		n=array();
		rand(a,n);
		output(a,n);
	do
	{
		q=menu();
		switch(q)
		{
			case 1:
				output (a,n);
			system("pause");
			system("cls");
			break;
			case 2:
			trans(a,n);
			system("pause");
			system("cls");
			break;
			case 3:
				sum(a,n);
				system("pause");
			system("cls");
			break;
			case 4:
				cout<<"������� �������� �: "<<endl;
				cin>>x;
				del(a,n,x);
				system("pause");
			system("cls");
			break;
			case 5:
				sort(a,n);
				system("pause");
			system("cls");
			break;
			case 6:
				cout<<"������� ������� ��� ������ � ��������� ����, ��� �����))"<<endl;
				file(a,n);
					system("pause");
			system("cls");
			break;
			case 7:
				cout<<"���� ������� �����:) "<<endl;
				arr2(a,n);
				system("pause");
			system("cls");
			break;
			case 8:
				cout<<"�� ���������!)";
				break;
				default:
				cout<<"������� ���������� ����� ����" ;
				system("pause");
				system("cls");
		}
	}
	while(q!=8);
	getch();
	return 0;
}


