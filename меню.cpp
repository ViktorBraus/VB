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
	cout<<"Ðàçìåðíîñòü: ";
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
	cout<<"Ìàññèâ: "<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
void trans(int a[], int n)
{
	cout<<"òðàíñïîíèðîâàííûé ìàññèâ: "<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
void sum(int a[], int n)
{
	int s=0;
	for(i=0;i<n/2;i++)
	{
	s=a[i]+a[n-i-1];
	cout<<"Ïîïàðíàÿ ñóììà ýëåìåíòîâ:";
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
	cout<<"| 	ÌÅÍÞ Â²ÊÒÎÐÀ ÊÎÐÎËÅÍÊÎ	  | "<<endl;
	cout<<"@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@-@"<<endl;
	cout<<"|×ÒÎ ÆÅ ÂÛ ÕÎÒÈÒÅ ÑÄÅËÀÒÜ? ÂÈÁÅÐÈÒÅ ÏÓÍÊÒ ÈÇ ÃËÀÂÍÎÃÎ ÌÅÍÞ)| "<<endl;
	cout<<"1.ÂÛÂÎÄÈÒ ÌÀÑÑÈÂ ÍÀ ÝÊÐÀÍ "<<endl;
	cout<<"2.ÒÐÀÍÑÏÎÍÈÐÓÅÒ ÌÀÑÑÈÂ "<<endl;
	cout<<"3.ÍÀÕÎÄÈÒ ÏÎÏÀÐÍÓÞ ÑÓÌÌÓ ÝËÅÌÅÍÒÎÂ ÌÀÑÑÈÂÀ(ÏÅÂÛÉ ÝËÅÌÅÍÒ+ÏÎÑËÅÄÍÈÉ, ÂÒÎÐÎÉ+ÏÐÅÄÏÎÑËÅÄÍÈÉ È Ò.Ä) "<<endl;
	cout<<"4.ÓÄÀËßÅÒ ÝËÅÌÅÍÒ, ÊÎÒÎÐÛÉ ÍÀÕÎÄÈÒÜÑß ÍÀ ÏÎÇÈÖÈÈ Ñ ÍÎÌÅÐÎÌ Õ "<<endl;
	cout<<"5.ÑÎÐÒÈÐÓÅÒ ÊÀÆÄÛÅ Y ÝËÅÌÅÍÒÎÂ ÏÎ ÂÎÇÐÀÑÒÀÍÈÞ (ÂÛÂÅÑÒÈ ÊÀÆÄÓÞ ÈÒÅÐÀÖÈÞ) "<<endl;
	cout<<"6.ÇÀÏÈÑÛÂÀÅÒ ÍÀ×ÀËÜÍÛÉ ÌÀÑÑÈÂ Â ÒÅÊÑÒÎÂÛÉ ÔÀÉË "<<endl;
	cout<<"7.ÔÎÐÌÈÐÓÅÒ Ñ ÎÄÍÎÌÅÐÍÎÃÎ ÌÀÑÑÈÂÀ ÊÂÀÄÐÀÒÍÓÞ ÌÀÒÐÈÖÓ ÌÈÍÈÌÀËÜÍÎÃÎ ÐÀÇÌÅÐÀ"<<endl;
	cout<<"(Â ÑËÓ×ÀÅ ÎÒÑÓÒÑÂÈß ÍÅÎÁÕÎÄÈÌÎÃÎ ÊÎËÈ×ÅÑÒÂÀ ÝËÅÌÅÍÒÎÂ, ÏÐÈÁÀÂÈÒÜ 0) "<<endl;
	cout<<"8.ÂÛÕÎÄ. "<<endl;
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
				cout<<"Ââåäèòå çíà÷åíèå Õ: "<<endl;
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
				cout<<"Äàâàéòå çàïèøåì âàø ìàññèâ â òåêñòîâûé ôàéë, èçè ïðîñò))"<<endl;
				file(a,n);
					system("pause");
			system("cls");
			break;
			case 7:
				cout<<"Âàøà ìàòðèöà òàêàÿ:) "<<endl;
				arr2(a,n);
				system("pause");
			system("cls");
			break;
			case 8:
				cout<<"Äî ñâèäóëüêè!)";
				break;
				default:
				cout<<"Ââåäèòå êîððåêòíûé ïóíêò ìåíþ" ;
				system("pause");
				system("cls");
		}
	}
	while(q!=8);
	getch();
	return 0;
}


