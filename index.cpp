#include<iostream>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<math.h>
#include<ctype.h>
#include<unistd.h>
#include<ctime>
#include<stdlib.h>
using namespace::std;
void si();
void getatt();
class parents
{
	public:
	long long int roll;
	char name[100];
	long long int pass;
	long long int mob;
};
class studen
{
	public:
	char roll[100];
	char name[100];
	char fname[100];
	char cour[100];
	char mname[100];
	char mob[100];
};
class student
{
	public:
	long long int roll;
	char name[100];
	char fname[100];
	char cour[100];
	char mname[100];
	long long int mob;
};
int tt(char t)
{
	if(t=='0')
	return 0;
	else if(t=='1')
	return 1;
	else if(t=='2')
	return 2;
	else if(t=='3')
	return 3;
	else if(t=='4')
	return 4;
	else if(t=='5')
	return 5;
	else if(t=='6')
	return 6;
	else if(t=='7')
	return 7;
	else if(t=='8')
	return 8;
	else if(t=='9')
	return 9;
}
int conver(char a,char b)
{
	if(a=='0'&&b=='1')
	{
	return 1;
}
else if(a=='0'&&b=='0')
return 0;
	else if(a=='0'&&b=='2')
	return 2;
	else if(a=='0'&&b=='3')
	return 3;
	else if(a=='0'&&b=='4')
	return 4;
	else if(a=='0'&&b=='5')
	return 5;
	else if(a=='0'&&b=='6')
	return 6;
	else if(a=='0'&&b=='7')
	return 7;
	else if(a=='0'&&b=='8')
	return 8;
	else if(a=='0'&&b=='9')
	return 9;
	else if(a=='1'&&b=='0')
	return 10;
	else if(a=='1'&&b=='1')
	return 11;
	else if(a=='1'&&b=='2')
	return 12;
	else if(a=='1'&&b=='3')
	return 13;
	else if(a=='1'&&b=='4')
	return 14;
	else if(a=='1'&&b=='5')
	return 15;
	else if(a=='1'&&b=='6')
	return 16;
	else if(a=='1'&&b=='7')
	return 17;
	else if(a=='1'&&b=='8')
	return 18;
	else if(a=='1'&&b=='9')
	return 19;
	else if(a=='2'&&b=='0')
	return 20;
	else if(a=='2'&&b=='1')
	return 21;
	else if(a=='2'&&b=='2')
	return 22;
	else if(a=='2'&&b=='3')
	return 23;
	else if(a=='2'&&b=='4')
	return 24;
	else if(a=='2'&&b=='5')
	return 25;
	else if(a=='2'&&b=='6')
	return 26;
	else if(a=='2'&&b=='7')
	return 27;
	else if(a=='2'&&b=='8')
	return 28;
	else if(a=='2'&&b=='9')
	return 29;
	else if(a=='3'&&b=='0')
	return 30;
	else if(a=='3'&&b=='1')
	return 31;
	}
	int con(char a)
	{
		if(a=='0')
		return 0;
		else if(a=='1')
		return 1;
		else if(a=='2')
		return 2;
		else if(a=='3')
		return 3;
		else if(a=='4')
		return 4;
		else if(a=='5')
		return 5;
		else if(a=='6')
		return 6;
		else if(a=='7')
		return 7;
		else if(a=='8')
		return 8;
		else if(a=='9')
		return 9;
	}
	void nnew(float ara[10000])   //to calculate % of  games
{
		fstream x;
	char ar[100],br[100],cr[100],user[100];
	//gets(user);
	int sc,z=0,p=501;;
	int arr[10000]={0};
	long long int a,b;
	char az;
	x.open("stusign.txt",ios::in|ios::out);
		while(!x.eof())	
		{
		//cout<<"hello";
			x>>ar>>a>>b;
			if(x.eof())
			break;
			p=501;
		//cout<<ar<<"\n";
		fstream y;
				y.open("game.txt",ios::in|ios::out);
			//y.seekg(0,ios::beg);
				while(!y.eof())
				{
				
					
				//	cout<<"hi";
					y>>br>>sc>>cr;
					if(y.eof())
					break;
					//yy.get(az);
				//	cout<<ar<<"-"<<br<<"\n";
					if(strcmp(br,ar)==0)
					{	
						arr[z]=arr[z]+sc;;
						arr[z+1]=arr[z+1]+1;
						p=101;
					}
				}
				if(p==501)
				{
					arr[z]=0;
					arr[z+1]=1;			
				}
				z=z+2;
			
		}

		int t=0;
		for(p=0;p<z;p=p+2)
		{
			ara[t]=(float)arr[p]/arr[p+1];
			//ara[t]=ara[t]/100;
		//	cout<<ara[t]<<"\n";
			++t;
			
		}
					
}
void new2(float ad[10000])   //to calculate % of attendence
{
	long long int n,p,a,a1,i,a2,z,f,d;
	char ar[100],br[100],aa;
	int pre=0,abs=0,pre1=0,abs1=0,pre2=0,abs2=0,pre3=0,abs3=0,pre4=0,abs4=0;
	//az.open("attend.txt",ios::in|ios::out|ios::app);
//	cin.ignore();
	
	char ar1[100];
	int ar2[10000],zzz=0;
	long long int a3,a4;
	fstream as;
		as.open("stusign.txt",ios::in|ios::out);
	while(!as.eof())
	{
		int pre=0,abs=0,pre1=0,abs1=0,pre2=0,abs2=0,pre3=0,abs3=0,pre4=0,abs4=0;
		as>>ar1>>a3>>n;
		//cout<<"hi";
		//cout<<n<<"\n";
		if(as.eof())
		break;
		fstream s,az;
	s.open("attend.txt",ios::in|ios::out);
	//if(n!=101);
	
		//cout<<"hi";
	while(!s.eof())
	{
		
		//cout<<"hi";
		s>>p>>ar;
		//if(s.eof())
		//break;
	//	cout<<p;
		fstream x;
		x.open("at2.txt",ios::in|ios::out|ios::app);
		while(!x.eof())
		{
			x>>br>>a>>a1>>a2;
			if(a==p)
			{
				break;
			}
		}
	z=a2-a1;
	for(i=0;i<=z;++i)
	{
		s>>f;
		//cout<<f<<" ";
		s.get(aa);
		s>>d;
		if(p==101)
		{
		if(f==n)
		{
				if(d==1)
			++pre;
			else
			++abs;	
		}
	}
	else if(p==102)
	{
			
		if(f==n)
		{
			if(d==1)
			++pre1;
			else
			++abs1;	
		}
	}
	else if(p==103)
	{
		if(f==n)
		{
		//		cout<<"hi";
			if(d==1)
			++pre2;
			else
			++abs2;	
		}
	}
	else if(p==104)
	{
		if(f==n)
		{
			if(d==1)
			++pre3;
			else
			++abs3;	
		}
	}
	else if(p==105)
	{
		if(f==n)
		{
			if(d==1)
			++pre4;
			else
			++abs4;	
		}
	}	
	}
	}
	
	ar2[zzz]=(pre+pre1+pre2+pre3+pre4);
	ar2[zzz+1]=(abs+abs1+abs2+abs3+abs4)+ar2[zzz];
//	cout<<ar2[zzz]<<" "<<ar2[zzz+1]<<"\n";
	zzz=zzz+2;
	
}
	
		int pp=0;
	for(p=0;p<zzz;p=p+2)
	{
		if(ar2[p+1]==0)
		ad[pp]=0;
		else
		ad[pp]=(float)ar2[p]/ar2[p+1];
		ad[pp]=ad[pp]*100;
//		cout<<ad[pp]<<"\n";
		++pp;
	}
	

}
void new3(	float ad[10000])  //to calculate % of marks
{
		long long int n,p,a,a1,i,a2,z,f,d;
	char ar[100],br[100],aa;
	int pre=0,abs=0,pre1=0,abs1=0,pre2=0,abs2=0,pre3=0,abs3=0,pre4=0,abs4=0;
	//az.open("attend.txt",ios::in|ios::out|ios::app);
//	cin.ignore();
	
	char ar1[100];
	int ar2[10000]={0},zzz=0;
	long long int a3,a4,ro,ma,su;;
	fstream as;
		as.open("stusign.txt",ios::in|ios::out);
	while(!as.eof())
	{
		as>>ar1>>a3>>n;
		//cout<<"hi";
		//cout<<n<<"\n";
		if(as.eof())
		break;
int chk=501;
fstream s,x;
s.open("marks.txt",ios::in|ios::out|ios::app);
while(!s.eof())
	{
		s>>su>>p;
		fstream x;
		x.open("at2.txt",ios::in|ios::out|ios::app);
		while(!x.eof())
		{
			x>>br>>a>>a1>>a2;
			if(a==p)
			{
				break;
			}
		}
	z=a2-a1;
	for(i=0;i<=z;++i)
	{
			s>>ro;
			s.get(aa);
			s>>ma;
		if(ro==n)
		{
		//	cout<<ro<<" "<<ma<<" \n";
			if(su==1)
			ar2[zzz+1]=ar2[zzz+1]+25;
			else if(su==2)
				ar2[zzz+1]=ar2[zzz+1]+50;
			else
				ar2[zzz+1]=ar2[zzz+1]+25;
		
				ar2[zzz]=ar2[zzz]+ma;
				//	cout<<ar2[zzz]<<" ";
		
		}
	}

	}
	zzz=zzz+2;
}
	
		int pp=0;
for(ro=0;ro<zzz;ro=ro+2)
{
//	cout<<ar2[ro]<<" "<<ar2[ro+1]<<"\n";	
	if(ar2[ro+1]==0)
	ad[pp]=0;
	else
	ad[pp]=(float)ar2[ro]/ar2[ro+1];
	ad[pp]=(float)ad[pp]*100;
//	cout<<ad[pp]<<"\n";
	++pp;
}

}
void new4(	float ad[10000],int &zzz) //to calculate %of assignments
{
		long long int n,p,a,a1,i,a2,z,f,d;
	char ar[100],br[100],aa;
	int pre=0,abs=0,pre1=0,abs1=0,pre2=0,abs2=0,pre3=0,abs3=0,pre4=0,abs4=0;
	//az.open("attend.txt",ios::in|ios::out|ios::app);
//	cin.ignore();
	
	char ar1[100];
	int ar2[10000]={0};
	long long int a3,a4,ro,ma,su;;
	fstream as;
		as.open("stusign.txt",ios::in|ios::out);
	while(!as.eof())
	{
		as>>ar1>>a3>>n;
		//cout<<"hi";
		//cout<<n<<"\n";
		if(as.eof())
		break;
	int chk=501;
	fstream s,x;
	s.open("markass.txt",ios::in|ios::out|ios::app);
	while(!s.eof())
	{
		char az[100];
		int i,aq,aw,po;
		long long int at;
		s>>az>>aq>>aw;
		for(i=0;i<aw;++i)
		{
			s>>at>>po;
			if(at==n)
			{
				if(po==0)
				ar2[zzz+1]=ar2[zzz+1]+1;
				else
				{
					ar2[zzz]=ar2[zzz]+1;
				ar2[zzz+1]=ar2[zzz+1]+1;
					
				}
			}
		}
			
	}

//cout<<ar2[zzz]<<" "<<ar2[zzz+1]<<"\n";
zzz=zzz+2;

}
		
		int pp=0;
for(ro=0;ro<zzz;ro=ro+2)
{
//	cout<<ar2[ro]<<" "<<ar2[ro+1]<<"\n";	
	if(ar2[ro+1]==0)
	ad[pp]=0;
	else
	ad[pp]=(float)ar2[ro]/ar2[ro+1];
	ad[pp]=(float)ad[pp]*100;
//	cout<<ad[pp]<<"\n";
	++pp;
}
}
void grades(char user[100])  //to find the rank of student
{
	int z=0,i;
float ar[10000],br[10000],cr[10000],dr[10000];	
nnew(ar);
new2(br);
new3(cr);
new4(dr,z);
//cout<<z;
//cout<<ar[0];
for(i=0;i<z/2;++i)
{
	ar[i]=ar[i]*40;
	ar[i]=ar[i]/100;
//	cout<<ar[i]<<"\n";
}
//cout<<"\n";
for(i=0;i<z/2;++i)
{
	br[i]=br[i]*80;
		br[i]=br[i]/100;
//	cout<<br[i]<<"\n";
}

//cout<<"\n";
for(i=0;i<z/2;++i)
{
	cr[i]=cr[i]*160;
		cr[i]=cr[i]/100;
//	cout<<cr[i]<<"\n";
}
//cout<<"\n";
for(i=0;i<z/2;++i)
{
	dr[i]=dr[i]*120;
		dr[i]=dr[i]/100;
//	cout<<dr[i]<<"\n";
}
float arr[10000];
for(i=0;i<z/2;++i)
{
	arr[i]=ar[i]+br[i]+cr[i]+dr[i];
	arr[i]=arr[i]/400;
	arr[i]=arr[i]*100;
//	cout<<arr[i]<<"\n";
}

fstream x;
x.open("stusign.txt",ios::in|ios::out);
char as[100];
long long int ad,aw;
int yy=0,j;
float brr[10000];

int c=z/2;
for(j=0;j<z/2;++j)
brr[j]=arr[j];
for(i=0;i<z/2;++i)
{
	for(j=0;j<c-i-1;++j)
	{
		if(brr[j]<brr[j+1])
		{
			float to=brr[j];
			brr[j]=brr[j+1];
			brr[j+1]=to;
		}
	}
}
fstream r;
	r.open("grade.txt",ios::in|ios::out|ios::trunc);
r.close();
while(!x.eof())
{
	x>>as>>ad>>aw;
	if(x.eof())
	break;
	for(i=0;i<=c;++i)
	{if(arr[yy]==brr[i])
	break;
		}	
		fstream q;
		q.open("grade.txt",ios::in|ios::out|ios::app);
		q<<as<<" "<<arr[yy]<<" "<<i+1<<"\n";
		++yy;
}
char rt[100];
int pok;
float pol;
	fstream qq;
		qq.open("grade.txt",ios::in|ios::out);
		while(!qq.eof())
		{
			
			qq>>rt>>pol>>pok;
		//	cout<<rt<<" "<<pol<<" "<<pok<<"\n";
			if(strcmp(user,rt)==0)
			{
			//	cout<<user<<pok<<"\n";
				cout<<"\t\t\tYOUR RANK IS -   '"<<pok<<"'\n";
				break;
			}
		}
		puts("\t\t\tRANK TABLE");
	for(i=1;i<=c;++i)
	{
	char pl[100];
	float pk;
	int pi;
	
	fstream rr;
	rr.open("grade.txt",ios::in|ios::out);
while(!rr.eof())
{
	
	rr>>pl>>pk>>pi;
	if(rr.eof())
	break;
	if(pi==i)
	{
		cout<<pl<<"   "<<pk<<"   -      "<<pi<<"\n";
	}
		
}

}
}

	int input(int ar[3][3])
{
	int z,k=0,l=0;;
	cout<<"\t\t\t";
	cin>>z;
	
	
	int i,j;
	
	
		
		if(z==0||z==1)
		k=501;
		else 
		{
		for(i=0;i<3;++i)
		for(j=0;j<3;++j)
		if(z==ar[i][j])
		{
		l=90;
		break;
		}
		}
		if(l==90)
		k=101;
		else k=501;
		int a=z;;
		if(k==501)
		{
		puts("\t\t\tYou have entered a worng number,please enter that place which is not occupied by anyone or which exist in game\n");
		a=input(ar);
		}
		return a;
		
	}
void printstrt()
{
	puts("\t\t\tITS  TIC-TAC-TOE");
	puts("\t\t\tTic-Tac-Toe is a game for two players,X and 0 ,who take turns marking \n\t\t\tthe spaces in a 3X3 grid.The player who succedes in placing three of their\n\t\t\tmarks in a horizontal,vertical, or diagonal row wins the game or you can play it with dAnGeR(system) also\n");
}
int win(int ar[3][3],int z)
{
	int i,j,a=0;
	for(j=0;j<3;++j)
	if(ar[j][a]==z&&ar[j][a+1]==z&&ar[j][a+2]==z)	
		return 101;
	for(j=0;j<3;++j)
	if(ar[a][j]==z&&ar[a+1][j]==z&&ar[a+2][j]==z)
		return 101;
	if(ar[0][0]==z&&ar[1][1]==z&&ar[2][2]==z)
	return 101;
	j=0;
	a=2;
	if(ar[j][a]==z&&ar[j+1][a-1]==z&&ar[j+2][a-2]==z)
	return 101;
	return 501;
		
		
}
void oneg(int ar[3][3],int z)
{
	int i,j;
	for(i=0;i<3;++i)
	for(j=0;j<3;++j)
	if(ar[i][j]==z)
	 ar[i][j]=0;
}
void twog(int ar[3][3],int z)
{
	int i,j;
	for(i=0;i<3;++i)
	for(j=0;j<3;++j)
	if(ar[i][j]==z)
	 ar[i][j]=1;
	

}
void printgame(int ar[3][3])
{
system("CLS");
printstrt();
	int i,j;
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			if(ar[i][j]==0)
			cout<<"0"<<"  ";
			else if(ar[i][j]==1)
			cout<<"\t\t\tX"<<"  ";
			else
			cout<<"\t\t\t"<<ar[i][j]<<"  ";
		}
			cout<<"\n";
	}
cout<<"\n";
}
void nameinput(char br[100],char cr[100])
{
	cin.ignore();
	puts("\t\t\tplayer 1\n\t ENTER YOUR NAME\n");
	cout<<"\t\t\t";

	gets(br);
	puts("\t\t\tplayer 2\n\tENTER YOUR NAME\n");
	cout<<"\t\t\t";
	gets(cr);
	cout<<"\t\t\tplayer 1-"<<br<<" your mark is 0\n";
	cout<<"\t\t\tplayer 2-"<<cr<<" your mark is X\n";
}
void player(int ar[3][3])
{
char br[100],cr[100];
nameinput(br,cr);
int z,a,k=2,q;
for(a=0;a<9;++a)
{
printgame(ar);
if(k%2==0)
cout<<"\t\t\tIt's "<<br<<"'s turn\n";
else
cout<<"\t\t\tIt's "<<cr<<"'s turn\n";
z=input(ar);
if(k%2==0)
{
	oneg(ar,z);
}
else
{
	twog(ar,z);
}
if(a>=4)
{
	q=win(ar,k%2);
	if(q==101)
	{
		printgame(ar);
		cout<<"\t\t\twinner is ' ";
		if(k%2==0)
		cout<<"\t\t\t"<<br<<" '\n";
		else
		cout<<"\t\t\t"<<cr<<" '\n";
		
		cout<<"\n\t\t\t\t\tGAME OVER";
		break;
	}
	
}
if(a==8)
{
puts("\t\t\tgame over!!");
puts("\t\t\tIts tie!! try again!!");

}
++k;
}
}
int aichk(int z,int ar[3][3])
{
	int i,j,k;
	if(z==0||z==1)
		return 501;
		else 
		{
		for(i=0;i<3;++i)
		for(j=0;j<3;++j)
			if(z==ar[i][j])
				return 101;
		}

}
int aick(int ar[3][3],int m,int &x,int &y)
{
	int i,j,k,t=m%2,br[3][3],q;
		
		for(i=0;i<3;++i)
		for(j=0;j<3;++j)
			br[i][j]=ar[i][j];
			
		for(i=0;i<3;++i)
		{
		for(j=0;j<3;++j)
			{
				if(br[i][j]!=0&&br[i][j]!=1)
				{
					q=br[i][j];
						br[i][j]=t;
						k=win(br,t);
						if(k==101)
						{
							x=i;
							y=j;
							return 101;
						}
						else
						br[i][j]=q;
						}
				}	

}
return 501;
}
void aismt(int ar[3][3],int m)
{
	int i,j,k,z=555,p=101,x=0,y=0;
		for(i=0;i<3;++i)
		{
		
		for(j=0;j<3;++j)
			if(ar[i][j]==1)
			{
			p=501;
			break;
			}
		if(p==501)
		break;	
		}
		int w=aick(ar,m+1,x,y);
		if(w==101)
		{
			twog(ar,ar[x][y]);
			
		}
		else
		{
		
	  if(i==0&&j==0)
		{
			k=aichk(3,ar);
			if(k==101)
			{
				z=aichk(4,ar);
				if(z==101)
				{
				k=99;	
				twog(ar,3);
				}
				else
				k=501;
			}
				
			 if(k==501)
			{
				k=aichk(5,ar);
			}
			else if(k==101)
			{
				z=aichk(8,ar);
				if(z==101)
				{
					k=99;
					twog(ar,5);
				
				}
				else
				k=501;
			}
			if(k==501)
			k=aichk(6,ar);
			if(k==101)
			twog(ar,6);
		}
	else if(i==2&&j==0)
	{
		
			k=aichk(5,ar);
			if(k==101)
			{
				z=aichk(2,ar);
				if(z==101)
				{
				twog(ar,5);
				k=55;
				}	
				else
				k=501;
			}
			if(k==501)
			k=aichk(9,ar);
			if(k==101)
			{
				z=aichk(10,ar);
				if(z==101)
				{
				k=55;
				twog(ar,9);
				}
				else
				k=501;
			}
			 if(k==501)
			k=aichk(6,ar);
			if(k==101)
			twog(ar,6);
	}
}
}
void ai2smt(int ar[3][3],int m)
{
	int i,j,k,p=501,l,q,x,y;
	
		int w=aick(ar,m,x,y);
		if(w==101)
		{
			twog(ar,ar[x][y]);
			
		}
		else 
		{
			w=aick(ar,m+1,x,y);
			if(w==101)
			twog(ar,ar[x][y]);
			else
			{
														
					for(i=0;i<3;++i)
							{
								for(j=0;j<3;++j)
								{
									if(ar[i][j]!=0&&ar[i][j]!=1)
										{
											twog(ar,ar[i][j]);
											p=101;
											break;
										}
								}
								if(p==101)
								break;
							}
				}
		}
	
}
void ali2(int ar[3][3])
{
	int i,j,k,p;
	if(ar[1][1]==0)
	{
		twog(ar,10);
	}
	else
	twog(ar,6);	
}
void ali3(int ar[3][3],int m)
{
	int x,y;
		int w=aick(ar,m,x,y);
		if(w==101)
		{
			
		}
		else
		{
		int w=aick(ar,m+1,x,y);
		if(w==101)
		{
			twog(ar,ar[x][y]);
			
		}
		else
		{
			if(ar[1][1]==1)
		    {	
		    	if(aichk(2,ar)==101)
		    		twog(ar,2);
		    	else
		    	twog(ar,7);
			}
			else
			{
				if(aichk(8,ar)==101)
				twog(ar,8);
				else
				twog(ar,7);
			}
		
		}
}
}
void lev2(char arr[1000])
{
	system("cls");
	int i,j,p,x=0,y,a,z=2,m=2;
	int ar[3][3];
	printstrt();
	for(i=0;i<3;++i)
		for(j=0;j<3;++j)
			{
				ar[i][j]=z;
				++z;
			}
			for(a=0;a<9;++a)
			{
			printgame(ar);
			if(a==0)
	puts("\t\t\tLEVEL II");
			if(m%2==0)
			{
				cout<<"\t\t\tits "<<arr<<"'s turn\n";
				z=input(ar);
				oneg(ar,z);
			}
			else
			{
				cout<<"\t\t\tits dAnGeR's (system) turn\n";
				sleep(1);
				if(x==0)
			ali2(ar);
			else if(x==1)
			ali3(ar,m);
			else
			ai2smt(ar,m);
			++x;
			}
			int q;
		if(a>=4&&a<8)
		{
				q=win(ar,m%2);
			//	cout<<"hi";
				if(q==101)
					{
					printgame(ar);
					if(m%2==0)
						{
							cout<<"\t\t\tthis time Winner is "<<arr<<"\n \t\t\tyou r really champion..!!\n";
								fstream xx;
								xx.open("game.txt",ios::in|ios::out|ios::app);
								
								time_t now=time(0);
								tm*ltm=localtime(&now);
								int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
								xx<<arr<<" "<<100<<" ";
								if(ddd>9)
								xx<<ddd;
								else
								xx<<"0"<<ddd;
								xx<<":";
								if(pp>9)
								xx<<pp;
								else
								xx<<"0"<<pp;
								xx<<":"<<ll<<"\n";
	
									//lev2(arr);
						}
									else
										cout<<"winner is system...";
										
										
											fstream xx;
								xx.open("game.txt",ios::in|ios::out|ios::app);
								
								time_t now=time(0);
								tm*ltm=localtime(&now);
								int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
								xx<<arr<<" "<<35<<" ";
								if(ddd>9)
								xx<<ddd;
								else
								xx<<"0"<<ddd;
								xx<<":";
								if(pp>9)
								xx<<pp;
								else
								xx<<"0"<<pp;
								xx<<":"<<ll<<"\n";
	
										
										
							break;
					}
			
		
				
		}
		else if(a==8)
{
puts("\t\t\tgame over!!");
puts("\t\t\tIts tie!! try again!!");

	fstream xx;
								xx.open("game.txt",ios::in|ios::out|ios::app);
								
								time_t now=time(0);
								tm*ltm=localtime(&now);
								int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
								xx<<arr<<" "<<35<<" ";
								if(ddd>9)
								xx<<ddd;
								else
								xx<<"0"<<ddd;
								xx<<":";
								if(pp>9)
								xx<<pp;
								else
								xx<<"0"<<pp;
								xx<<":"<<ll<<"\n";
	
}

			++m;
			
			}
}
void system(int ar[3][3],char arr[1000])
{
	int t=1,z,m,a,q=0,k=0,az=0;
	//cin>>t;
	puts("\t\t\tthere are two levels ,first one is level 1 which is for begginers and second one is level 2 which is for experts...");
	puts("\t\t\tif u will make System  lose..then u will get to play level two...");
	puts("\t\t\t LEVEL 1");
	if(t==1)
	m=2;
	else 
	m=1;
	cin.ignore();

		fstream xy;
		xy.open("game.txt",ios::in|ios::out|ios::app);
		char azz[100],bzz[100];
		int ab,fl=101,as=101;		
		while(!xy.eof())
		{
			//cout<<"wapus";
		xy>>azz>>ab>>bzz;
		if(xy.eof())
		break;
		if(strcmp(azz,arr)==0)
		{
			fl=101;
			as=101;
			int j,dd,mm;
		char c1,d1,e1,f1,g1,h1,q1,b1;
		for(j=0;j<10;++j)
		{
		//	cout<<bzz[j];
			if(j==1)
		c1=bzz[j];
		else if(j==0)
		b1=bzz[j];
		else if(j==3)
		d1=bzz[j];
		else if(j==4)
		e1=bzz[j];
		else if(j==6)
		f1=bzz[j];
		else if(j==7)
		g1=bzz[j];
		else if(j==8)
		h1=bzz[j];
		else if(j==9)
		q1=bzz[j];
		}
		
			dd=conver(b1,c1);
	 mm=conver(d1,e1);
	 int y1=con(f1),y2=con(g1),y3=con(h1),y4=con(q1),fl=101;
	int year=0;
	year=year*10+y1;
	year=year*10+y2;
	year=year*10+y3;
	year=year*10+y4;
	
	time_t now=time(0);
	tm*ltm=localtime(&now);
		int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
	if(ll==year&&pp==mm&&ddd==dd)
	{
			as=501;
			//cout<<fl<<"\n";
		break;
	}
		}
		//cout<<fl<<"\n";		
		}
if(as==101)
{

for(a=0;a<9;++a)
{

	printgame(ar);
	if(m%2==0)
	{
		cout<<"\t\t\tits "<<arr<<"'s turn\n";
		z=input(ar);	
		oneg(ar,z);
	}
	else
	{
		puts("\t\t\tits system's turn");
		sleep(1);
		if(a==0||a==1)
		{
			int y=aichk(2,ar);
			if(y==101)
			twog(ar,2);
			else
			twog(ar,8);
		}
		else
		{	if(az==1)
			aismt(ar,m);
			else if(az==2)
			ai2smt(ar,m);
			else
			ai2smt(ar,m);
		}
			++az;
		}
if(a>=4)
{
	q=win(ar,m%2);
	if(q==101)
	{
		printgame(ar);
		if(m%2==0)
		{
		cout<<"\t\t\tthis time Winner is "<<arr<<". see u in second round!!\n";
		sleep(3);
		lev2(arr);
		break;
		}
		else
		cout<<"\t\t\twinner is dAnGeR...";
			fstream xx;
								xx.open("game.txt",ios::in|ios::out|ios::app);
								
								time_t now=time(0);
								tm*ltm=localtime(&now);
								int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
								xx<<arr<<" "<<0<<" ";
								if(ddd>9)
								xx<<ddd;
								else
								xx<<"0"<<ddd;
								xx<<":";
								if(pp>9)
								xx<<pp;
								else
								xx<<"0"<<pp;
								xx<<":"<<ll<<"\n";
	
		cout<<"\n\t\t\t\t\tGAME OVER";
		break;
		}
}
++m;
if(a==8)
{
puts("\t\t\tgame over!!");
puts("\t\t\tIts tie!! try again!!");

	fstream xx;
								xx.open("game.txt",ios::in|ios::out|ios::app);
								
								time_t now=time(0);
								tm*ltm=localtime(&now);
								int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
								xx<<arr<<" "<<0<<" ";
								if(ddd>9)
								xx<<ddd;
								else
								xx<<"0"<<ddd;
								xx<<":";
								if(pp>9)
								xx<<pp;
								else
								xx<<"0"<<pp;
								xx<<":"<<ll<<"\n";
	
}
}}
else
{
	cout<<"\t\t\tYOU CANT PLAY TODAY  BECAUSE YOU CAN ONLYMPLAY SINGLE GAME IN A DAY \nSO YOU CAN PLAY GAME AFTER 12!!\n";
}
}
void virmain(char arr[1000])
{
	
int m=2,i,j,ar[3][3];
for(i=0;i<3;++i)
{
	for(j=0;j<3;++j)
{
	  	  ar[i][j]=m;
	  	  ++m;
}
}
printstrt();
puts("\t\t\tenter your choice:\n\t\t\t1.With System(YOU WILL GET BONUS POINTS HERE)\n\t\t\t2.With your freind(NO BONUS POINT JUST FOR TIMEPASS!!!)");
int t;
cout<<"\t\t\t";
cin>>t;
if(t==2)
player(ar);
else if(t==1)
system(ar,arr);
else
puts("\t\t\twrong choice!!");
system("pause");
}
	void ma(char arr[1000])// game
{

	virmain(arr);

int y=1;
while(y==1)
{
puts("\n\n\t\t\tif u want to play it again then press 1 otherwise press any key");
cout<<"\t\t\t";
cin>>y;
if(y==1)
{
system("cls");
virmain(arr);

}
}
cout<<"\t\t\tCOME BACK HERE WITH SOME NEW STRATEGY OK!!!\n\n";

system("pause");
}
	int az(long long int a,int n) //convo 11
{
	int x,y,z=0;
	while(a!=0)
	{
		x=a%10;
		a=a/10;
		if(n==2)
		  if(!(x>=0&&x<=1))
		  return 0;
		if(n==8)
		  if(!(x>=0&&x<8))
           return 0;
		if(n==10)
		  if(!(x>=0&&x<=9))	
		  return 0;
		  
	if(a==0)
	++z;	
		
	}
if(z==1)
return 1;
}
long long int input(int &z,int n);
void out(long long int n,int p) //convo 10
{
	int z=0,a,i=0;
	long long int t=0;

		while(n!=0)
	{
		 a=n%10;
		n=n/10;
		a=a*pow(p,i);
		t=t+a;
		++i;

	}
//	////////////system("color fc");
	cout<<"\t\t\tin decimal format = ";
	cout<<t;
	cout<<"\n";

}

void octbin(long long int n)  //convo 9
{
	int ar[100],a,b,c=0,i=0,j;
	while(n>=0)
	{
		c=0;
		a=n%10;
		n=n/10;
		while(a>=0)
		{
			ar[i]=a%2;
			a=a/2;
			++i;
			if(a<2)
			{
			
			ar[i]=a;
	         ++i;
	         ++c;
	         break;
		}
    ++c;
	}
	if(c!=2)
{	
	ar[i]=0;
++i;
}
if(n==0)
break;
	}
//	////////////system("color fc");
	cout<<"\t\t\tin binary format= ";
for(b=i-1;b>=0;--b)
cout<<ar[b];
cout<<"\n";
}
void octhex(long long int n) //convo 8
{
	int z,x=0,ar[100],br[50],a,b,c=0,i=0,j;
	while(n>=0)
	{
		c=0;
		a=n%10;
		n=n/10;
		while(a>=0)
		{
			ar[i]=a%2;
			a=a/2;
			++i;
			if(a<2)
			{
			
			ar[i]=a;
	         ++i;
	         ++c;
	         break;
		}
    ++c;
	}
	if(c!=2)
{	
	ar[i]=0;
++i;
}
if(n==0)
break;
	}

	int sum=0,v;
for(b=0;b<i;++b)
{
v=0;
	sum=0;
	for(z=0;z<4;++z)
	{
	sum=sum+ar[b]*pow(2,v);
	if(z<3)
	++b;
	if(b>=i)
	break;
	++v;
	}
	br[x]=sum;
	++x;
}
////////////system("color fc");
cout<<"\t\t\tin hexadecimal format = ";
for(b=x-1;b>=0;--b)
{
	 if(br[b]==10)
	 cout<<"A";
	 else if(br[b]==11)
	 cout<<"B";
	 else if(br[b]==12)
	 cout<<"C";
	 else if(br[b]==13)
	 cout<<"D";
	 else if(br[b]==14)
	 cout<<"E";
	 else if(br[b]==15)
	 cout<<"F";
	 else	
	cout<<br[b];
	
}
cout<<"\n";
}
void octal()  //convo 7
{
	int z=0;
long long int n= input(z,8);
if(z==1)
octbin(n);
else if(z==2)
out(n,8);
else if(z==3)
octhex(n);
else if(z==4)
{
	octbin(n);
	out(n,8);
	octhex(n);
}
else 
cout<<"\t\t\tyou have entered a wrong choice so please make sure that you are entering a number from given choice only\n";
	
}
void binoct(long long int n) //convo 6
{
int a,b,c=0,i=0,sum=0,ar[100];
while(n!=0)
{
	i=0;
	sum=0;
	for(b=0;b<3;++b)
	{
	a=n%10;
	n=n/10;
    sum=sum+a*pow(2,i);
	++i;
	if(n==0)
	break;
	}
	ar[c]=sum;
	++c;
	}
	////////////system("color fc");
	cout<<"\t\t\tin octal format = ";
	for(a=c-1;a>=0;--a)
	cout<<ar[a];	
	cout<<"\n";
}
void binhex(long long int n)  //convo 5
{
	
int a,b,c=0,i=0,sum=0,ar[100];
while(n!=0)
{
	i=0;
	sum=0;
	for(b=0;b<4;++b)
	{
	a=n%10;
	n=n/10;
    sum=sum+a*pow(2,i);
	++i;
	if(n==0)
	break;
	}
	ar[c]=sum;
	++c;
	}
	////////////system("color fc");
	cout<<"\t\t\tin hexadecimal format = ";
	for(a=c-1;a>=0;--a)
	{
     
	 if(ar[a]==10)
	 cout<<"A";
	 else if(ar[a]==11)
	 cout<<"B";
	 else if(ar[a]==12)
	 cout<<"C";
	 else if(ar[a]==13)
	 cout<<"D";
	 else if(ar[a]==14)
	 cout<<"E";
	 else if(ar[a]==15)
	 cout<<"F";
	 else	
	cout<<ar[a];
}
cout<<"\n";
}
void binary()  //convo 4
{
	int z=0;
long long int n= input(z,2)	;
if(z==1)
binoct(n);
else if(z==2)
out(n,2);
else if(z==3)
binhex(n);
else if(z==4)
{
	binoct(n);
	out(n,2);
	binhex(n);
}
else 
cout<<"\t\t\tyou have entered a wrong choice so please make sure that you are entering a number from given choice only";
}
void high(long long int n,int a)  //cono 3
{
		long long t=0,m;
	int i=0,ar[100];
	while(n>=2)
	{
		ar[i]=n%a;
		n=n/a;
		++i;
		if(n<2)
		ar[i]=n;
	}
	////////////system("color fc");
	if(a==2)
	cout<<"\t\t\tin binary = ";
	else
	if(a==8)
	cout<<"\t\t\tin octal = ";
	else if(a==16)
	cout<<"\t\t\tin hexadecimal = ";
	int j;
	if(a!=16)
	for(j=i;j>=0;--j)
	cout<<ar[j];
	else
	{
		for(j=i;j>=0;--j)
		{
			if(ar[j]==10)
	 cout<<"\t\t\tA";
	 else if(ar[j]==11)
	 cout<<"\t\t\tB";
	 else if(ar[j]==12)
	 cout<<"\t\t\tC";
	 else if(ar[j]==13)
	 cout<<"\t\t\tD";
	 else if(ar[j]==14)
	 cout<<"\t\t\tE";
	 else if(ar[j]==15)
	 cout<<"\t\t\tF";
	 else	
	cout<<ar[j];
		}
	}
cout<<"\n";
}
void decimal() //convo 2
{
	int z=0;
long long int n= input(z,10);
if(z==1)
high(n,2);
else if(z==2)
high(n,8);
else if(z==3)
high(n,16);
else if(z==4)
{
high(n,2);
high(n,8);
high(n,16);
}
else 
cout<<"\t\t\tyou have entered a wrong choice so please make sure that you are entering a number from given choice only\n";
	
}
void hexbin(int x,int br[100]) //convo 1
{
	int i,j=0,n=0;
	for(i=x-1;i>=0;--i)
	{
	
	n=n+br[i]*pow(16,j);
++j;
}
	long long t=0,m;
	int ar[100];
	int r=0;
	while(n>=2)
	{
		ar[r]=n%2;
		n=n/2;
		++r;
		if(n<2)
		ar[r]=n;
	}
	////////////system("color fc");
	cout<<"\t\t\tin binary format= ";
	for(j=r;j>=0;--j)
	cout<<ar[j];
	cout<<"\n";
	}
	void hexdec(int x,int ar[100])
	{
	int i,j=0,k=0;
	for(i=x-1;i>=0;--i)
		{
			k=k+ar[i]*pow(16,j);
			++j;
		}
	////////////system("color fc");
		cout<<"\t\t\tin decimal format=";
	cout<<k<<"\n";
	}
void hexoct(int x,int ar[100])
{
	int i,j=0,k=0;
	for(i=x-1;i>=0;--i)
	{
	
	k=k+ar[i]*pow(16,j);
++j;
}
high(k,8);
}

void hexa();
void tools()  // conversion binary/decimal/octal/hexa
{
		puts("\t\t\t\t\twelcome to the digital conversion ");
	puts("\t\t\tselect the format of number in which u want to conversion");
	puts("\t\t\t1.binary\n\t\t\t2.octal\n\t\t\t3.decimal\n\t\t\t4.hexadecimal");
	int a;
	puts("\t\t\tenter your choice");
	cout<<"\t\t\t";
	cin>>a;
	if(a==1)
	binary();
	else if(a==2)
	octal();
	else if(a==3)
	decimal();
	else if(a==4)
	hexa();
	else 
	cout<<"\t\t\tyou have entered a wrong choice so please make sure that you are entering a number from given choice only";
	system("pause");
	
}
long long int cal(long long int n,long long int ar[200][200])  //determinant part 1
{
	//cout<<"sjdn";
	//puts("qjsnj");
	long long int i,j,k,z,p,cr[200][200],s,d,l,m,sum=0;
	if(n==3)
	{
	//cout<<"sjdn";	
		z=((ar[0][0]*((ar[1][1]*ar[2][2])-(ar[1][2]*ar[2][1])))-(ar[0][1]*((ar[1][0]*ar[2][2])-(ar[1][2]*ar[2][0])))+(ar[0][2]*((ar[1][0]*ar[2][1])-(ar[1][1]*ar[2][0]))));
		return z;
	}
	else;
	{
		i=0;
		for(j=0;j<n;++j)
		{
			d=0;
			s=0;
			for(k=0;k<n;++k)
			{
				for(p=0;p<n;++p)
				{
					if(k!=i&&p!=j)
					{
						cr[s][d]=ar[k][p];
						++d;
					}	
				}
				if(d!=0)
				++s;
				d=0;
			}
		z=cal(n-1,cr);
		z=z*ar[i][j];
		if((i+j)%2==0)
		sum=sum+z;
		else
		sum=sum-z;
		}
	}
	
 return sum;
 } 
	void deter()  // to calculate determinant 
	{
		
		
	long long int n,z,zz=1;
	long long int i,j,ar[200][200];
	puts("\t\t\tenter the size of square mattrrix ie NxN mattrix");
	cout<<"\t\t\t";
	cin>>n;

	cout<<"\t\t\tenter the elements of"<<n<<"x"<<n<<"mattrix\n";
	for(i=0;i<n;++i)
	for(j=0;j<n;++j)
	{
		
		cout<<"\t\t\tENTER ELEMENT NUMBER '"<<zz<<"' of mattrix\n";
		cout<<"\t\t\t";		
			cin>>ar[i][j];
		++zz;
	}
	if(n==2)
	{
		cout<<ar[0][0]*ar[1][1]-ar[0][1]*ar[1][0];
	}
	else 
	{
//		cout<<"sjd\n";
//		cout<<n;
	z=cal(n,ar);
	cout<<"\t\t\tDETERMINANT = "<<z<<"\n\n\n";
	}
system("pause");
	}
	
	int leap(int y) //day part 1
{
if(y==0)
return 28;
if(y%100==0)
{
  if(y%400==0)
   return 29;
 else
return 28;
}
else if(y%4==0)
return 29;
else
return 28;
}	
	int mon(int i,int k)   //day part 2
{
if(i==2)
return leap(k);
else if(i%2==1)
   {if(i<=7)
     return 31;
   else
    return 30;
   }
else
{
    if(i<=6)
      return 30;
	else 
	return 31;

}

}

	void daaay()  // to find the day of any date
	{
		int a,b,c,z=7;
puts("\t\t\tENTER DAY (dd)");
cout<<"\t\t\t";
cin>>a;
puts("\t\t\tENTER MONTH (mm)");
cout<<"\t\t\t";
cin>>b;
puts("\t\t\tENTER YEAR (yyyy)");
cout<<"\t\t\t";
cin>>c;
int i,j=1,k=0,m=0;
for(i=1;;++i)
{
if(i==a&&j==b&&k==c)
break;
if(i==mon(j,k))
{
++j;
i=0;
}
if(j==13)
{
++k;
j=1;
m=0;
}

++z;
if(z==8)
z=1;
++m;
}
cout<<" \t\t\tits - ";
if(z==1)
printf("monday\n\t\t\t");
else if(z==2)
printf("tuesday\n\t\t\t");
else if(z==3)
printf("wednesday\n\t\t\t");
else if(z==4)
printf("thursday\n\t\t\t");
else if(z==5)
printf("friday\n\t\t\t");
else if(z==6)
printf("saturday\n\t\t\t");
else if(z==7)
printf("sunday\n\t\t\t");
system("pause");

	}
	long long int factz(int z) //binomial part 1
{
	long long int i,s=1;
	for(i=2;i<=z;++i)
	s=s*i;
	return s;
}
long long int zncr( int p,int i) //binomial part 2
{
	long long int z=((factz (p))/(factz(i)*(factz(p-i))));
return z;
}
	void bino()  //binomail expansion
	{
		string ar;
	puts("\t\t\tenter your expression in this formant\n\t\t\t (Ax^n+By^m)^p where A and B are the coffcients of x and y and n and m are the powers of x and y \n \t\t\t where p is power of whole expression");
	int i,j,k,s=101,p,l,num=0,a,b,n,m;
	char x='x',y='y';
	puts("\t\t\tenter the value of A");
	cout<<"\t\t\t";
	cin>>a;
	puts("\t\t\tenter the value of n ie power of x");
	cout<<"\t\t\t";
	cin>>n;
	puts("\t\t\tenter the value of B ");
	cout<<"\t\t\t";
	cin>>b;
	puts("\t\t\tenter the value of m ie power of y");
	cout<<"\t\t\t";
	cin>>m;
	puts("\t\t\tenter the value of p ie power of whole expression");
	cout<<"\t\t\t";
	cin>>p;
	if(n==0)
	x='.';
	if(m==0)
	y='.';
	
cout<<"\t\t\tyou have entered this expression ("<<a;
if(n!=0)
cout<<x<<"^"<<n;

cout<<" + "<<b;
if(m!=0)
cout<<y<<"^"<<m;
cout<<")^"<<p;
	int z=p;
	cout<<"\n\n(";
	for(i=0;i<p;++i)
	{
		
		cout<<zncr(p,i);
		cout<<"("<<a;
		if(n!=0)
		cout<<x<<"^"<<n<<")";
		else
		cout<<")";
		
		cout<<"^"<<z<<".2"<<"("<<b;
		
		if(m!=0)
		cout<<y<<"^"<<m<<")";
		else
		cout<<")";
		cout<<"^"<<i;
		if(i!=(p-1))
		cout<<" + ";
		--z;	
	}
	cout<<"\n\n\n\n\t\t\t";
	system("pause");
	}
	void tool() // calling of different tools
	{
		puts("\t\t\tENTER YOUR CHOICE\n\t\t\t1.CONVERSION OF BINARY/OCTAL/DECIMAL/HEXADECIMAL \n\t\t\t2.CALCULATE DETERMINANT\n\t\t\t3.FIND THE DAY OF ANY DATE\n\t\t\t4.FIND BINOMIAL EXPANSION OF ANY EXPRESSION");
		int n;
		cout<<"\t\t\t";
		cin>>n;
		if(n==1)
		{
			system("cls");
			tools();
			system("cls");
		}
		else if(n==2)
		{
			system("cls");
			deter();
			system("cls");
		}
		else if(n==3)
		{
			system("cls");
			daaay();
			system("cls");
		}
		else if(n==4)
		{
			system("cls");
			bino();
			system("cls");
		}
		
		

		
	}
	void hexa()
{
	char ar[100];
	cout<<"\t\t\tenter a number of hexadecimal format ";
    cin.ignore();
    cout<<"\t\t\t";
    gets(ar);
    int l=0;
int a,i=0,z,j,br[100];
for(i=0;ar[i]!='\0';++i)
{
	if(ar[i]=='A')
	  a=10;
	else if(ar[i]=='B')
	  a=11;
	else if(ar[i]=='C')
	  a=12;
	else if(ar[i]=='D')
	  a=13;
	else if(ar[i]=='E')
	  a=14;
	else if(ar[i]=='F')
	  a=15;
    else if(ar[i]=='1')
	  a=1;
	else if(ar[i]=='2')
	  a=2;
	else if(ar[i]=='3')
	  a=3;
	else if(ar[i]=='4')
	  a=4;
	else if(ar[i]=='5')
	  a=5;
	else if(ar[i]=='6')
	  a=6;
	else if(ar[i]=='7')
	  a=7;
	else if(ar[i]=='8')
	  a=8;
	else if(ar[i]=='9')
	  a=9;
	else if(ar[i]=='0')
	  a=0;
	else
	{
		l=9;
		break;
		
	}
    br[i]=a;
}
if(l==0)
{
	
	puts("so now in which format you want to convert it");
	puts("1.binary\n2.octal\n3.decimal\n4.In all formats i.e. binary,octal and decimal");
	cout<<"\t\t\t";
	cin>>z;
	int b;
	if(z==1)
	hexbin(i,br);
	else if(z==2)
	hexoct(i,br);
	else if(z==3)
	hexdec(i,br);
    else if(z==4)
    {
    hexbin(i,br);
	hexoct(i,br);
	hexdec(i,br);
}
else 
cout<<"\t\t\tyou have entered a wrong choice so please make sure that you are entering a number from given choice only";
	}
	else
	{
		if(system("CLS"));
		cout<<"\n\n\t\t\tyou have entered a number of wrong format please enter a number of selected format only\n\t\t\tA  number of hexadecimal formatt consist of of only DIGITS (from 1 TO 9) and ALPHABETS FROM A TO F\n\n\n";
		tools();
	}
   }
   long long int input(int &z,int n)
{
	
	long long int a;
	cout<<"\t\t\tenter a number of format ";
	if(n==2)
	puts("\t\t\tbinary");
	else if(n==8)
	puts("\t\t\toctal");
	else if(n==10)
	puts("\t\t\tdecimal");
	else 
	cout<<"\t\t\tyou have entered a wrong choice so please make sure that your are entering a number from given choice only";
cout<<"\t\t\t";	
cin>>a;
	int s=az(a,n);
	if(s==0)
	{
	if(system("CLS"));
	cout<<"\n\nyou have entered a number of wrong format please enter a number of selected format only\n";
	if(n==2)
	puts("\n\n\t\t\tbinary number is a number which consist of 0 and 1 only so please enter a number of binary format only \n\n");
	else if(n==8)
	puts("\n\t\t\toctal number is a number which consist of digits from 0 to 7 only so please enter a number of octal format only\n\n");
	else if(n==10)
	puts("\n\t\t\tdecimal is a number which consist of digits from 0 to 9 only so please enter a number of decimal format only\n\n");
	else 
	puts("\t\t\toctal");
	tools();
//	exit(0);
	}
	puts("\t\t\tso now in which format you want to convert it");
	if(n==2)
	puts("\t\t\t1.octal\n\t\t\t2.decimal\n\t\t\t3.hexadecimal\n\t\t\t4.In all format i.e. octal,decimal,hexadecimal");
	else if(n==8)
	puts("\t\t\t1.binary\n\t\t\t2.decimal\n\t\t\t3.hexadecimal\n\t\t\t4.In all format i.e. binary,octal,hexadecimal");
	else if(n==10)
	puts("\t\t\t1.binary\n\t\t\t2.octal\n\t\t\t3.hexadecimal\n\t\t\t4.In all format i.e. binary,octal,decimal");
	else if(n==16)
	puts("\t\t\t1.binary\n\t\t\t2.octal\n\t\t\t3.decimal\n\t\t\t4.In all format i.e. binar,octal,decimal");
	cout<<"\t\t\t";
	cin>>z;
	return a;
}
	void markasss(char user[100]) //to mark whether a student submit assignment or not
	{
		fstream s,x;
	char ar[100],br[100],cr[100],dr[100];
	long long int aa,ss,dd,az,ax;
	char ch;
	int i,j,a1,a2,a3,m,n,chk;

	//gets(user);
	//cout<"hi";
		cout<<"\t\t\tENTER ASSIGNMENT NUMBER";
		cout<<"\t\t\t";
		cin>>m;
	
		s.open("markass.txt",ios::out|ios::in);
	
	while(!s.eof())
	{
		chk=101;
		s>>ar>>n>>a1;
		if(n==m)
		{
			chk=501;
			break;
		}
		for(i=0;i<a1;++i)
		s>>a2>>a3;
	}
	
	fstream q;
	char use[100];
	long long int z1,z2,z3;
		q.open("at2.txt",ios::out|ios::in);
		while(!q.eof())
		{
			q>>use>>z1>>z2>>z3;
			if(strcmp(user,use)==0)
			break;
		}
		
		fstream aaz;
		char qw[100],qw1[100],qw2[100];
		long long int qw3,qw4,qw5,qw6;
		int i1,j1,chk1=101;
		char ch1;
			aaz.open("assi.txt",ios::out|ios::in);
			while(!aaz.eof())
			{
				aaz>>qw>>qw1>>qw2>>qw3>>qw4>>qw5>>qw6;
				if(strcmp(qw,user)==0)
				{
					chk1=501;
					break;
				}
				for(i1=0;i1<qw5;++i1)
				{
					aaz.get(ch1);
					if(i1==0)
					aaz.get(ch1);
					while(ch1!='\n')
					{
						aaz.get(ch1);
					}
				}
			}
	
	if(chk==101&&chk1==501)
	{
		int aaa;
		x.open("markass.txt",ios::out|ios::in|ios::app);
		x<<user<<" "<<m<<" "<<((z3-z2)+1)<<"\n";
		puts("\t\t\tENTER 1 IF SUBMITTED AND 0 IF NOT SUBMITTED");
		for(j=z2;j<=z3;++j)
		{
			int aw=101;
			while(aw==101)
			{
			
			cout<<"\t\t\t IS ROLL NUMBER '"<<j<<"' HAVE SUBMITTED HER/HER ASSIGMENT "<<"-";
		cout<<"\t\t\t";
			cin>>aaa;
			if(aaa==1||aaa==0)
			aw=501;
			else
			puts("\t\t\tPLEASW ENTER EITHER '0' OR '1' \n\t\t\t 0 FOR NO SUBMITTED AND  1 FOR SUBMITTED");
			}
			x<<j<<" "<<aaa<<"\n";
		}
		
		
	}
	else
	puts("\t\t\tNO ASSIGNMENT FOUND");
	}
	void putn(char user[100]) //to add assignments
	{
		puts("\n\n\t\t\tASSIGNMENT");
	//puts("\n");
	char br[100],outtime[100];
	
	
		puts("\t\t\tenter starting date (DD:MM::YYYY).....eg.(04:04:2017)");
		int p=101,j;
		int q=501;
		cin.ignore();
		while(p==101)
		{
			q=501;
			cout<<"\t\t\t";
			cout<<"\t\t\t";
			gets(br);
			if(strlen(br)==10)
			{
				for(j=0;br[j]!='\0';++j)
				{
					if(j==2||j==5)
					{
				
				
					if(br[j]!=':')
					{
						q=501;
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:2017)");
						break;
					}
					
			}
			else
			{
				if(br[j]>='0'&&br[j]<='9')
				{
				q=101;	
				}
				else
				{
					
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:2017)");
					q=501;
					break;
				}
			}
				}
			}
			else
			{
				q=501;
				
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:2017)");
			}
			if(q==101)
			p=501;
		}
		char brr[100];
		puts("\t\t\tenter the ending date (DD:MM::YYYY).....eg.(04:04:2017)");
		p=101;
		q=501;
		while(p==101)
		{
			q=501;
			cout<<"\t\t\t";
			gets(brr);
			if(strlen(brr)==10)
			{
				for(j=0;brr[j]!='\0';++j)
				{
					if(j==2||j==5)
					{
				
				
					if(brr[j]!=':')
					{
						q=501;
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:2017)");
						break;
					}
					
			}
			else
			{
				if(brr[j]>='0'&&brr[j]<='9')
				{
				q=101;	
				}
				else
				{
					
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:2017)");
					q=501;
					break;
				}
			}
				}
			}
			else
			{
				q=501;
				
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:2017)");
			}
			if(q==101)
			p=501;
		}
	fstream sss,ss,s,x;
	x.open("at2.txt",ios::in|ios::out|ios::app);
	char a[100];
	long long int r,w,e;
	while(!x.eof())
	{
		x>>a>>r>>w>>e;
		if(strcmp(a,user)==0)
		{
			break;
		}
	}
	puts("\t\t\tenter the number of question");
	int i,no;
	cout<<"\t\t\t";
	cin>>no;
	s.open("assi.txt",ios::in|ios::out|ios::app);
	ss.open("asno.txt",ios::in|ios::out);
	int abc;
	ss>>abc;
	sss.open("asno.txt",ios::in|ios::out|ios::trunc);
	sss<<abc+1;
	s<<user<<" "<<br<<" "<<brr<<" "<<w<<" "<<e<<" "<<no<<" "<<abc<<"\n";
	cin.ignore();
	for(i=0;i<no;++i)
	{
		char ques[1000];
		cout<<"\t\t\tENTER QUESTION NUMBER "<<i+1<<"\n";
		cout<<"\t\t\t";
		gets(ques);
		s<<i+1<<"-"<<ques<<"\n";
	}
	
	cout<<"\t\t\tASSIGNMENT NUMBER  - "<<abc-1<<"\n";

	}
	void getas(	char user[100],long long int r) //to get assignments
	{
	//	char user[100];
//	gets(user);
	int i,z;
	char ch;	
	//	cout<<r;
	fstream s;
	s.open("assi.txt",ios::in|ios::out|ios::app);
	char a[100],b[100],c[100],d[100],e[100];
	long long int x,y,nn;
	int noo=1;
	int chk=501;
	while(!s.eof())
	{
		if(s.eof())
		break;
		
		s>>a>>b>>c>>x>>y>>z>>nn;
		fstream abc;
		char azz[100];
		int azzz,cc=501;
			abc.open("nofa.txt",ios::in|ios::out|ios::app);
			while(!abc.eof())
			{
				abc>>azz>>azzz;
				if(azzz==nn&&strcmp(user,azz)==0)
				{
					cc=101;
					break;
				}
			}
			if(cc==501)
			{
				fstream asz;
					asz.open("nofa.txt",ios::in|ios::out|ios::app);
				asz<<user<<" "<<nn<<"\n";
			}
			
		if(s.eof())
		break;
		int j,dd,mm;
		char c1,d1,e1,f1,g1,h1,q1,b1;
		for(j=0;j<10;++j)
		{
			//cout<<c[j];
			if(j==1)
		c1=c[j];
		else if(j==0)
		b1=c[j];
		else if(j==3)
		d1=c[j];
		else if(j==4)
		e1=c[j];
		else if(j==6)
		f1=c[j];
		else if(j==7)
		g1=c[j];
		else if(j==8)
		h1=c[j];
		else if(j==9)
		q1=c[j];
		
			
		}
		dd=conver(b1,c1);
	 mm=conver(d1,e1);
	 int y1=con(f1),y2=con(g1),y3=con(h1),y4=con(q1),fl=101;
	int year=0;
	year=year*10+y1;
	year=year*10+y2;
	year=year*10+y3;
	year=year*10+y4;
	time_t now=time(0);
	tm*ltm=localtime(&now);
		int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
	if(ll>year)
	fl=501;
	if(ll==year)
	if(pp>mm)
	fl=501;
	if(pp==mm)
	if(ddd>dd)
	fl=501;
	
	 
		
	
		
		if(r>=x&&r<=y&&fl==101)
		{
				cout<<"\t\t\tASSIGNMENT "<<noo<<"\n";
				++noo;
	
			chk=101;
			for(i=0;i<z;++i)
			{
				s.get(ch);
				
				if(i!=0)
				{
				
					
				cout<<ch;
			
			}
			s.get(ch);
			cout<<"\t\t\t";
				while(ch!='\n')
				{
					//cout<<"\t\t\t";
					cout<<ch;
					s.get(ch);
				}
				cout<<"\n";
			}
		
		}
		else
		{
			
			for(i=0;i<z;++i)
			{
				s.get(ch);
				
				s.get(ch);
				while(ch!='\n')
				{
					//cout<<ch;
					s.get(ch);
				}
			}
		}
		
	}	
	
	if(chk==501)
	cout<<"\t\t\tno assignments\n";
	
	}
	void noti(char user[100],long long int r,int az)
	{
		fstream s,x;
		int nots=0;
		x.open("assi.txt",ios::in|ios::out);
		s.open("nofa.txt",ios::in|ios::out);
		char ar[100];
		int a,aa,chk=101;
		while(!s.eof())
		{
			s>>ar>>a;
			if(strcmp(user,ar)==0)
			{
			
			aa=a;
		chk=501;	
		}
		
		}
		if(chk==101)
		aa=0;	
		int i;
		char ab[100],ac[100],ad[100],ae[100],af[100];
		long long int b,c,d,e;
		char azz;
		while(!x.eof())
		{
			x>>ab>>ac>>ad>>b>>c>>d>>e;
			
			for(i=0;i<d;++i)
			{
			
			x.get(azz);
			if(i==0)
			x.get(azz);
			while(azz!='\n')
			{
				x.get(azz);
			}
			
			}
		if(e>aa&&(r>=b&&r<=c))
		++nots;	
		
		}
		if(az==101)
		{
	cout<<"\t\t\tYOU HAVE ";
	if(nots==0)
	cout<<nots;
	else
	cout<<nots-1;
	cout<<" ASSIGNMENTS TO DO\n";
	}
	else
{
	int abc=7;
	char aaa=abc;
	//cout<<"\n"<<d<<"\n";
	if(nots!=0)
	cout<<aaa;
}

			
	}
	void notifi(char user[100],int pas,int az,long long int pass)
	{
		system("cls");
		if(pas==1)
		{
			noti(user,pass,az);
		}
	fstream s,x;
	s.open("noti.txt",ios::in|ios::out);
	int a,b,c,d=0;
	int code,co,chk1=101,chk2=101;
	char aa[100];
	if(pas==2)
	{
		
	x.open("nf.txt",ios::in|ios::out);
	while(!x.eof())
	{
		x>>aa>>code;
		if(strcmp(aa,user)==0)
		{
			chk2=501;
			co=code;
		}
	}
	if(chk2==101)
	co=0;
	}
	else if(pas==1)
	{
	
	x.open("ns.txt",ios::in|ios::out);
	while(!x.eof())
	{
		x>>aa>>code;
		if(strcmp(aa,user)==0)
		{
			co=code;
			chk1=501;
		}
	}
	if(chk1==101)
	co=0;	
	}
	char ar[100];
	while(!s.eof())
	{
		
		
		s>>ar>>a>>b>>c;
		if(s.eof())
		break;
		if(c>co)
		if(strcmp(ar,user)!=0)
		{
			
		++d;
		//cout<<ar<<"\n";
		}
}
if
(az==101)
	cout<<"\t\t\tYOU HAVE "<<d<<" NOTIFICATION FROM GROUP 1";
	else
{
	int abc=7;
	char aaa=abc;
	//cout<<"\n"<<d<<"\n";
	if(d!=0)
	cout<<aaa;
}
	fstream q;
	if(pas==2&&az==101)
	{
		
	q.open("nf.txt",ios::in|ios::out|ios::app);
	q<<user<<" "<<c<<"\n";
	}
	else if(pas==1&&az==101)
	{
		
	q.open("ns.txt",ios::in|ios::out|ios::app);
	q<<user<<" "<<c<<"\n";
	}
		
	}
	void chats(char user[100],int pas)
	{
		puts("\t\t\tSAMPLE CHAT\n\t\t\tUSERNAME CODE\n\t\t\tMESSAGE\n\t\t\tTIME\n\t\t\t\t\tCODE FOR FACULTY IS 2 AND 1 FOR STUDENTS\n");
		char ar[100],cr[100];
char ch;
fstream s,x;
int code,asd,asdf,az;
x.open("chat.txt",ios::in|ios::out);
int po;
for(po=0;po<35;++po)
cout<<"-";

while(!x.eof())
{
	asd=501;
	asdf=0;
	az=501;
x>>ar>>code;
if(x.eof())
break;
if(strcmp(ar,user)==0)
{
asd=101;
}
if(asd==501)
{
cout<<"\n";
cout<<ar<<" "<<code<<"\n";
for(po=0;po<35;++po)
cout<<" ";
cout<<"|";
cout<<"\n";
}
else
{
	cout<<"\n        "<<ar<<" "<<code<<"\n";
	
	for(po=0;po<35;++po)
cout<<" ";
cout<<"|";
cout<<"\n";
}

x.get(ch);
x.get(ch);
//cout<<ar<<code;
//cout<<ch;
while(ch!='\n')	
{
	//cout<<"hi";
	if(asd==501)
	{
		++asdf;
		cout<<ch;
		x.get(ch);
	}
	else
	{
		++asdf;
	//	cout<<"hi";
		if(az==501)
		{
		cout<<"          ";
		az=101;
		}
		cout<<ch;
		x.get(ch);
	}
	if(asdf==20&&asd==501)
	{
		cout<<"\n";
		asdf=0;
	}
	else if(asdf==20&&asd==101)
	{
		cout<<"\n";
		asdf=0;
		az=501;
		//cout<<az;
	}


}

x>>cr;
if(asd==501)
{
	int ats;
	cout<<"\n";
	for(ats=0;ats<(asdf);++ats)
	cout<<" ";
}
else 
{
int ats;
cout<<"\n";
for(ats=0;ats<(asdf+8);++ats)
cout<<" ";	
}

cout<<cr;
int rt;
for(rt=0;rt<(22-asdf);++rt)
cout<<" ";
if(asd==501)
cout<<"        ";
cout<<"|\n";
}
int ty;
for(ty=0;ty<35;++ty)
cout<<"-";
s.open("chat.txt",ios::in|ios::out|ios::app);
long long int n,p,a,a1,i,a2,z,f,d,ro,ma,su;
	char br[1000],aa;
	time_t now=time(0);
	tm*ltm=localtime(&now);
	int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
	int pa=101;

	puts("\n\n\n\t\t\tIF YOU WANT TO DROP A MESSAGE THEN PRESS ONE OTHERWISE PRESSE ANY OTHER KEY\n");
	cout<<"\t\t\t";
	cin>>n;
	if(n==1)
	{
		cin.ignore();
		puts("\t\t\tENTER YOUR MESSAGE");
		cout<<"\t\t\t";
		gets(br);
		s<<user<<" "<<pas<<"\n"<<br<<"\n"<<kk<<":"<<jj<<"\n";
		fstream z;
		z.open("noti.txt",ios::in|ios::out);
		int num,nn;
		char naa[100];
			fstream zz;
			zz.open("noti.txt",ios::in|ios::out|ios::app);
			fstream az;
			az.open("notino.txt",ios::in|ios::out|ios::app);
			int ax;
			az>>ax;
			fstream aaz;
			aaz.open("notino.txt",ios::in|ios::out|ios::trunc);
			aaz<<ax+1;
			zz<<user<<" "<<pas<<" 1 "<<ax<<"\n";  
		
	}
	s.close();
	}
	void marksget()
	{
		char ar[100];
fstream s,x;
s.open("marks.txt",ios::in|ios::out|ios::app);
long long int n,p,a,a1,i,a2,z,f,d,ro,ma,su;
	char br[100],aa;
	system("cls");
puts("\t\t\tenter the roll no of student");
cout<<"\t\t\t";
cin>>n;
int chk=501;
while(!s.eof())
	{
		s>>su>>p;
		fstream x;
		x.open("at2.txt",ios::in|ios::out|ios::app);
		while(!x.eof())
		{
			x>>br>>a>>a1>>a2;
			if(a==p)
			{
				break;
			}
		}
	z=a2-a1;
	for(i=0;i<=z;++i)
	{
			s>>ro;
			s.get(aa);
			s>>ma;
		if(ro==n)
		{
			if(su==1)
			puts("\t\t\tMID TERM MARKS");
			else if(su==2)
			puts("\t\t\tEND TERM MARKS");
			else
			puts("\t\t\tSESSIONAL MARKS");
			cout<<"\t\t\tmarks in "<<p<<" = "<<ma<<" out of ";
			if(su==1||su==3)
			cout<<"25\n";
			else
			cout<<"50\n";
			chk=101;
		}
	}


}
if(chk==501)
puts("\t\t\tSORRY NO RECORD FOUND");
	}
	long long int studgetinfo()//to print the information of a student
{
	int i,ii,q,p=101;
	student ar[1000];
	int j,w;
	long long int sum=0;
	char a,arr[100];
	
	while(p==101)
	{
	q=501;
	sum=0;
		puts("\t\t\tenter roll no of student");
		cout<<"\t\t\t";
		gets(arr);
	for(ii=0;arr[ii]!='\0';++ii)
	{
		if(arr[ii]>='0'&&arr[ii]<='9')
		{

			sum=(sum*10)+tt(arr[ii]);
			
		}
		else
		{
			q=101;
			puts("\t\t\tyou have entered an incorrect roll number so please enter a correct roll number(digits only)");
			break;
		
		}
	}
	if(q==501)
		p=501;	
}
	p=101;
	fstream s;
	s.open("stu.txt",ios::in);
	for(i=0;!s.eof();++i)
	{
		s>>ar[i].roll;
	if(ar[i].roll==sum)
	{
	cout<<"\n\t\t\tROll = "<<ar[i].roll;
	p=501;
	}
		
		s.get(a);
		s.get(a);
		if(ar[i].roll==sum)
		cout<<"\n\t\t\tName = ";
		for(j=0;a!='\n';++j)
		{
					if(ar[i].roll==sum)
					cout<<a;
			s.get(a);
		}
		
		s.get(a);
		if(ar[i].roll==sum)
		cout<<"\n\t\t\tbranch =  = ";
		for(j=0;a!='\n';++j)
		{if(ar[i].roll==sum)
			cout<<a;
			s.get(a);
		}
		s.get(a);
		if(ar[i].roll==sum)
		cout<<"\n\t\t\tFather's Name = ";
		for(j=0;a!='\n';++j)
		{if(ar[i].roll==sum)
			cout<<a;
			s.get(a);
		}
		if(ar[i].roll==sum)
	cout<<"\n\t\t\tMother's name = ";	
		s.get(a);
		for(j=0;a!='\n';++j)
		{	if(ar[i].roll==sum)
			cout<<a;
			s.get(a);
		}
		
		s>>ar[i].mob;	
		if(ar[i].roll==sum)
	cout<<"\n\t\t\tmobile no =  "<<ar[i].mob<<"\n\t\t\t";
	if(p==501)
	break;
	
	}	

if(p==101)
{

puts("\t\t\tNO RECORD FOUND PLEASE ENTER A VALID ROLL NUMBER");
return 101;
}
else 
return sum;
}

void getevent()  //to kmow about the events
{
	system("cls");
	puts("\t\t\tEnter your choice\n\t\t\t1.ALL THE EVENTS\n\t\t\t2. UPCOMING EVENTS (TIMER LASTS FOR 30 SECONDS )");
	int n;
	cout<<"\t\t\t";
	cin>>n;
	if(n==1)
	{
		char a;
		fstream s;
		s.open("events.txt",ios::out|ios::in);
		s.get(a);
		while(!s.eof())
		{

			
		
			s.get(a);
		if(s.eof())
		break;
	cout<<"\n\t\t\tname of the event - ";
		
				while(a!='\n')
				{
					cout<<a;
					s.get(a);
				}
				cout<<"\n\t\t\tdate of the event - ";
					s.get(a);
				while(a!='\n')
				{
					cout<<a;
					s.get(a);
				}		
				cout<<"\n\t\t\ttimings of the event - ";
					s.get(a);
				while(a!='\n')
				{
					cout<<a;
					s.get(a);
				}
				cout<<"\n\t\t\tvenue of the event - ";
					s.get(a);
				while(a!='\n')
				{
					cout<<a;
					s.get(a);
				}
				cout<<"\n\t\t\tadditional information - ";
					s.get(a);
				while(a!='\n')
				{
					cout<<a;
					s.get(a);
				}	
		cout<<"\n\t\t\t";
		}
	}
	else if(n==2)
	{
	int po=0;
	int o,fl,pl;
	puts("\t\t\tIT LASTS FOR 30 SECONDS\n\t\t\t");
	sleep(1);
	for(pl=0;pl<30;++pl)
	{
		fl=101;
		char arr[100]={0},brr[100]={0};
	fstream s;
	s.open("events.txt",ios::in|ios::out);
	char a,b,c,d,e,f,g,h,q,w;
	int i,dd,mm;
		time_t now=time(0);
	tm*ltm=localtime(&now);
	
	
	s.get(a);
	while(!s.eof())
	{
		fl=101;
		char arr[100]={0},brr[100]={0};

		s.get(a);
		
		if(s.eof())
		break;
		
		for(o=0;a!='\n';++o)
		{
			arr[o]=a;
			s.get(a);
		}
	s.get(a);
	b=a;
	for(i=0;a!='\n';++i)
	{
		if(i==1)
		c=a;
		else if(i==3)
		d=a;
		else if(i==4)
		e=a;
		else if(i==6)
		f=a;
		else if(i==7)
		g=a;
		else if(i==8)
		h=a;
		else if(i==9)
		q=a;
		
		brr[i]=a;
		s.get(a);
	}
	 dd=conver(b,c);
	 mm=conver(d,e);
	int y1=con(f),y2=con(g),y3=con(h),y4=con(q);
	int year=0;
	year=year*10+y1;
	year=year*10+y2;
	year=year*10+y3;
	year=year*10+y4;
		int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
	if(ll>year)
	fl=501;
	if(ll==year)
	if(pp>mm)
	fl=501;
	if(pp==mm)
	if(ddd>dd)
	fl=501;
	if(fl==101)
	{
		cout<<"\t\t\tNAME OF EVENT - ";
		cout<<arr;
		cout<<"\t\t\tDATE OF EVENT - "<<brr;
	}
	if(fl==101)
	cout<<"\n\t\t\tTIMINGS OF EVENT - ";
	s.get(a);
	b=a;
	for(i=0;a!='\n';++i)
	{
		if(i==1)
		c=a;
		else if(i==3)
		d=a;
		else if(i==4)
		e=a;
		if(fl==101)
		cout<<a;
		s.get(a);
	}
	int hrs=conver(b,c);
	int min=0,min1,min2;
	min1=con(d);
	min2=con(e);
	min=min*10+min1;
	min=min*10+min2;
	if(fl==101)
	cout<<"\t\t\tVENUE OF THE EVENT - ";
	s.get(a);
	while(a!='\n')
	{
		if(fl==101)
		cout<<a;
		s.get(a);
	}
	
	if(fl==101)
	cout<<"\t\t\tADDITIONAL INFORMATION - ";
	s.get(a);
	while(a!='\n')
	{
		if(fl==101)
		cout<<a;
		s.get(a);
	}
	if(fl==101)
	cout<<"\n\t\t\tTIME REMAINING ";
		//int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
		int ye,mon,day,ho,mn;
		if(pp>mm)
		mon=pp-mm;
		else
		mon=mm-pp;
		if(ddd>dd)
		day=ddd-dd;
		else
		day=dd-ddd;
		if(kk>hrs)
		ho=kk-hrs;
		else
		ho=hrs-kk;
		if(jj>min)
		mn=jj-min;
		else
		mn=min-jj;
		if(fl==101)
	cout<<year-ll<<" years"<<":"<<mon<<" months"<<":"<<day<<" days"<<":"<<ho<<" hours"<<":"<<mn<<" minutes"<<":"<<(60-ii)<<" seconds"<<"\n\n";	
	}
	
	
	sleep(1);
	system("CLS");
	
}
}
system("pause");
}
void parlog1() //it contains content of parents login
{
	puts("\n\n\t\t\tENTER YOUR CHOICE\n\t\t\t1.Want to check the attendane\n\t\t\t2.Events in University\n\t\t\t3.check the marks of students");
int ab;
cout<<"\t\t\t";
cin>>ab;
if(ab==1)
getatt();
else if(ab==2)
getevent();
else if(ab==3)
marksget();

	
}
void log() //login for parents and students
{
	system("cls");
	parents ar[1000];
	puts("\t\t\tlogin as a\n\t\t\t1.PARENT\n\t\t\t2.STUDENT");
	int y;
	cout<<"\t\t\t";
	cin>>y;
	if(y==1)
	{
	cin.ignore();
	char a;

	int i,j;
	char ar[100],br[100];
	int p=101,q=501,r=501;
	puts("\t\t\tEnter your ID");
	long long int sum=0;
	while(p==101)
	{
	q=501;
	r=501;
	sum=0;
	fstream f,s,k;
	f.open("parents.txt",ios::out|ios::in|ios::app);
	cout<<"\t\t\t";
	gets(ar);
	
	for(i=0;ar[i]!='\0';++i)
	{
		if(ar[i]>='0'&&ar[i]<='9')
			sum=(sum*10)+tt(ar[i]);
		else
		{
			q=101;
			break;
		}	
	}
	
	long long int a1,b,c;
	while(!f.eof())
	{
		f>>a1>>b;
	f.get(a);
	f.get(a);
	while(a!='\n')
	{
		f.get(a);
	}
	if(sum==a1)
	{
		r=101;
		break;
	}
	f>>c;
	}
	if(q==501)
	{	
	if(r==501)
	{
		puts("\t\t\tYOU ARE NOT REGISTER TO LMHY SO PLEASE FIRTSTLY REGISTER TO LMHY\nPRESS 1 TO SIGNUP");
		int ta;
		cout<<"\t\t\t";
		cin>>ta;
		cin.ignore();
		if(ta==1)
		{
			si();
			break;
		}
		break;
	}
	else
	{
	
	if(q==501&&r==101)
	p=501;	
	else
	puts("\n\t\t\tPLEASE ENTER YOR ID AGAIN BECAUSE YOU HAVE ENTERED AN INVALID ID");
}
}
else
puts("\t\t\tPLEASE ENTER A VALID ID ");

	}
	if(r!=501)
	{
	
	long int su=0;
	puts("\t\t\tENTER YOUR PASSWORD");
	p=101;
	while(p==101)
	{
		char abc[]={0};
	q=501;
	r=501;
	su=0;
	fstream f,s,k;
	 
	f.open("parents.txt",ios::out|ios::in|ios::app);
	cout<<"\t\t\t";
	 	gets(ar);	
	for(i=0;ar[i]!='\0';++i)
	{
		if(ar[i]>='0'&&ar[i]<='9')
			su=(su*10)+tt(ar[i]);
		else
		{
			q=101;
			break;
		}	
	}
	
	long long int a1,b,c;
	while(!f.eof())
	{
		f>>a1>>b;
	f.get(a);
	f.get(a);
	int po;
	for(po=0;a!='\n';++po)
	{
		abc[po]=a;
		f.get(a);
	}
	if(su==b&&a1==sum)
	{
		r=101;
		break;
	}
	f>>c;
	}
	if(q==501&&r==101)
	{
	cout<<"\t\t\tHELLO "<<abc<<"\n";	
	p=501;	
}
	else
	puts("\n\t\t\tPLEASE ENTER PASSWORD AGAIN BECAUSE YOU HAVE ENTERED AN INVALID password");
	}
}
int za=2;
system("cls");
parlog1();
while(za==2)
{
	system("pause");
	system("cls");
puts("\n\n\t\t\tEnter your choice\n\t\t\t1.go back to main menu\n\t\t\t2.logout");
cout<<"\t\t\t";
cin>>za;
if(za==2)
return;
else if(za==1)
{
	system("cls");
	parlog1();
}

}

}
else
{
	char ar[100];
	long long int pas;
{
system("cls");
	cin.ignore();
	puts("\t\t\tENTER YOUR USERNAME");
	char arr[100],br[100];
	long long int prr,prrr; 
	int a=101,b=501,pp=101,i,fl=501;
	char z;
	while(a==101)
	{
		fl=501;
		b=501;
		cout<<"\t\t\t";
		gets(ar);
		for(i=0;ar[i]!='\0';++i)
		{
			if(ar[i]==' ')
			{
				puts("\t\t\tYOU HAVE ENTERED AN INVALID USERNAME i.e. IT DO NOT COSISIT OF BLANK SPACES");
				b=101;
				break;
			}
	}
	fstream s;
	s.open("stusign.txt",ios::in|ios::out|ios::app);
	while(!s.eof())
{
	s>>arr>>prr>>prrr;
	if(strcmp(ar,arr)==0)
	{
	fl=101;
		break;
	}
	}
if(fl==501)
puts("\t\t\tplease enter a valid username");	
if(b==501&&fl==101)
a=501;
}

long long int pass;
	puts("\t\t\tenter your password");
	int sum,p=101,q=501;
	while(p==101)
	{
		q=501;
		sum=0;
		cout<<"\t\t\t";
			cin>>br;
			if(strlen(br)>=6)
			{
		
	for(i=0;br[i]!='\0';++i)
	{
		if(br[i]>='0'&&br[i]<='9')
			sum=(sum*10)+tt(br[i]);
		else
		{
			q=101;
			puts("\t\t\tyou have entered an invslid password so please enter a valid password (digits only)");
			break;
		}
		}
	if(q==501)
	p=501;		
}
else
puts("\t\t\tplease enter a valid password i.e whic contains greater than or equals to 6 digits");
if(sum==prr)
{
	cout<<"\t\t\tWELCOME "<<ar;
	pas=prrr;
}
else
{	puts("\t\t\tincorrect password\nPlease enter it again");
	p=101;
	
}
}
}
char azx[100];
//cout<<pas;
//sleep(2);
void stulog1(char abc[],long long int );
int za=2;
system("cls");
stulog1(ar,pas);
while(za==2)
{
	system("pause");
	system("cls");
puts("\n\t\t\tEnter your choice\n\t\t\t1.go back to main menu\n\t\t\t2.logout");
cout<<"\t\t\t";
cin>>za;
if(za==2)
return;
else if(za==1)
{
	system("cls");
	stulog1(ar,pas);
}

}

}

}
void stulog1(char user[],long long int r)
{
//	cout<<"roll-"<<r<<"\n";
	notifi(user,1,501,r);
	puts("\t\t\tENTER YOUR CHOICE\n\t\t\t1.Want to check the attendane\n\t\t\t2.Events in University\n\t\t\t3.check the marks\n\t\t\t4.chat bot\n\t\t\t5.notifications\n\t\t\t6.to get assignments\n\t\t\t7.some helpful tools");
	puts("\t\t\t8.want to have some fun(game))\n\t\t\t9.ranks");
	int ab;
	cout<<"\t\t\t";
cin>>ab;
if(ab==6)
{
	getas(user,r);
}
else if(ab==9)
{
	grades(user);
}
else if(ab==8)
{
	ma(user);
}
else if(ab==7)
{
	tool();
}
if(ab==4)
chats(user,1);
else if(ab==5)
notifi(user,1,101,r);
else if(ab==1)
getatt();
else if(ab==2)
getevent();
else if(ab==3)
marksget();

}
void stusign()//signin for students
{
	cin.ignore();
		fstream x;
	x.open("stusign.txt",ios::in|ios::out|ios::app);
	puts("\t\t\tWELCOME TO LAMHY\n PLease select your username( it can contain alphabets,digits and special symbols too (EXCEPT BLANK SPACES))");
	char ar[100],arr[100],arrr[100],br[100];
	int a=101,prr,b=501,pp=101,i,prrr;
	char z;
	while(a==101)
	{
		b=501;
		cout<<"\t\t\t";
		gets(ar);
		for(i=0;ar[i]!='\0';++i)
		{
			if(ar[i]==' ')
			{
				puts("\t\t\tYOU HAVE ENTERED AN INVALID USERNAME i.e. IT DO NOT COSISIT OF BLANK SPACES");
				b=101;
				break;
			}
	}
	fstream s;
	s.open("stusign.txt",ios::in|ios::out);
	while(!s.eof())
{
	s>>arr>>prr>>prrr;
	
	if(strcmp(ar,arr)==0)
	{
		b=101;
		puts("\t\t\tYOU HAVE ENTERED A PREEXISTING USERNAME SO PLEASE USE DIFFERENT USERNAME");	
		break;
	}
	
	}
		
	if(b==501)
	a=501;
	
	}
	
	
puts("\t\t\tenter your university rool number");
long long int rolll;
cout<<"\t\t\t";
cin>>rolll;
	puts("\t\t\tEnter a password through you can login (it can contain DIGITS only)");
	
	int sum,p=101,q=501;
	while(p==101)
	{
		q=501;
		sum=0;
		cout<<"\t\t\t";
		cin>>br;
			if(strlen(br)>=6)
			{
		
	for(i=0;br[i]!='\0';++i)
	{
		if(br[i]>='0'&&br[i]<='9')
			sum=(sum*10)+tt(br[i]);
		else
		{
			q=101;
			puts("\t\t\tyou have entered an invalid password so please enter a valid password (digits only)");
			break;
		}
		}
	if(q==501)
	p=501;		
}
else
puts("\t\t\tplease enter a valid password i.e whic contains greater than or equals to 6 digits");
}
cout<<"\t\t\tYou have succefully register to LAMHY\n\t\t\tYour USERNAME IS - ";
puts(ar);
cout<<"\t\t\tYour PASSWORD is - ";

puts(br);
cout<<"\t\t\tYour University Roll number - ";
cout<<rolll<<"\n\n\n";
x<<ar<<"\n"<<br<<"\n"<<rolll<<"\n";

}
void si()//sign up for parents
{
	system("cls");
	parents br[1000];
	int i,ii,q,p=101;
	student ar[1000];
	int j,w;
	long long int sum=0;
	char a,arr[100];
	puts("\t\t\tENTER YOUR CHOICE\n\t\t\t1.SIGN UP AS PARENTS\n\t\t\t2.SIGNUP AS STUDENT");
	int ttt;
	cout<<"\t\t\t";
	cin>>ttt;
	if(ttt==1)
	{
	
	cin.ignore();
	
while(p==101)
	{
	q=501;
	sum=0;
		puts("\t\t\tenter roll no of student");
		cout<<"\t\t\t";
		gets(arr);
	for(ii=0;arr[ii]!='\0';++ii)
	{
		if(arr[ii]>='0'&&arr[ii]<='9')
		{

			sum=(sum*10)+tt(arr[ii]);
			
		}
		else
		{
			q=101;
			puts("\t\t\tyou have entered an incorrect roll number so please enter a correct roll number(digits only)");
			break;
		
		}
	}
	if(q==501)
		p=501;	
}
	p=101;
	fstream x;
	x.open("parents.txt",ios::in|ios::out|ios::app);
	
	fstream s;
	s.open("stu.txt",ios::in);
	for(i=0;!s.eof();++i)
	{
		s>>ar[i].roll;
	if(ar[i].roll==sum)
	{
	cout<<"\t\t\tROll = "<<ar[i].roll;
	p=501;
	}
		
		s.get(a);
		s.get(a);
		if(ar[i].roll==sum)
		cout<<"\n\t\t\tName = ";
		for(j=0;a!='\n';++j)
		{
					if(ar[i].roll==sum)
					cout<<a;
			s.get(a);
		}
		
		s.get(a);
		if(ar[i].roll==sum)
		cout<<"\n\t\t\tbranch =  = ";
		for(j=0;a!='\n';++j)
		{if(ar[i].roll==sum)
			cout<<a;
			s.get(a);
		}
		s.get(a);
		if(ar[i].roll==sum)
		cout<<"\n\t\t\tFather's Name = ";
		for(j=0;a!='\n';++j)
		{if(ar[i].roll==sum)
			cout<<a;
			s.get(a);
		}
		if(ar[i].roll==sum)
	cout<<"\n\t\t\tMother's name = ";	
		s.get(a);
		for(j=0;a!='\n';++j)
		{	if(ar[i].roll==sum)
			cout<<a;
			s.get(a);
		}
		
		s>>ar[i].mob;	
		if(ar[i].roll==sum)
	cout<<"\n\t\t\tmobile no =  "<<ar[i].mob<<"\n";
	if(p==501)
	break;
	
	}	

if(p==101)
puts("\t\t\tNO RECORD FOUND PLEASE ENTER A VALID ROLL NUMBER");
if(p==501)
for(w=0;!x.eof();++w)
	{
		x>>br[i].roll;
		if(br[i].roll==ar[i].roll)
		{
			cout<<"\t\t\tyou already have account and you can login to LAMHY (YOUR ID IS THE ROLL NO OF YOUR CHILD) \n\t\t to LOGIN PRESS 1\n";
			int tt;
			cout<<"\t\t\t";
			cin>>tt;
			if(tt==1)
			{
			
			log();
		return;
			}
			p=101;
			break;
		}
		x>>br[i].pass;
		x.get(a);
		x.get(a);
		while(a!='\n')
		{
			x.get(a);
		}
		x>>br[i].mob;
		
		
	}
	x.close();
	fstream k;
	k.open("parents.txt",ios::in|ios::out|ios::app);
	char at[1000];
	long long int t=0;
	int pp=101;
	q=501;
	if(p==501)
	{
		puts("\n\n\t\t\tWELCOME TO LAMHY ");
	//	cin.ignore();
		puts("enter you name");
		cout<<"\t\t\t";
		gets(at);
		char ab[100];
	while(pp==101)
	{
		t=0;
			q=501;
		puts("\t\t\tenter your mobile number");
		cout<<"\t\t\t";
		gets(ab);
	if(strlen(ab)==10)
	{
	
	for(ii=0;ab[ii]!='\0';++ii)
	{
		if(ab[ii]>='0'&&ab[ii]<='9')
		{

			t=(t*10)+tt(ab[ii]);
			
		}
		else
		{
			q=101;
			puts("\t\t\tyou have entered an incorrect mobile number so please enter a correct mobile number(digits only and contins 10 didgits only)");
			break;
		}
	}
	}
	else
	{
			q=101;
		puts("\t\t\tyou have entered an incorrect mobile number so please enter a correct mobile number(digits only and contains 10 didts only)");

	}
	
	if(q==501)
		pp=501;

}
char passw[100];
int g=101,h=501;
long long int r=0;
while(g==101)
	{
	h=501;
	r=0;

		puts("\t\t\tenter a password (less than 10 digits use ditis only) through u can login to LAMHY");
		cout<<"\t\t\t";
		gets(passw);
		if(strlen(passw)<=10)
		{
	for(ii=0;passw[ii]!='\0';++ii)
	{
			if(passw[ii]>='0'&&passw[ii]<='9')
		{

			r=(r*10)+tt(passw[ii]);
			
		}
		else
		{
			h=101;
			puts("\t\t\tyou have entered an invalid password so please enter a valid password (digits only)");
			break;
		
		}	
	}
}
else
{
	h=101;
	puts("\t\t\tyou have entered an invalid password so please enter a valid(contains 10 didts or less)");
		
}
	if(h==501)
		g=501;		
}

		k<<sum<<"\n"<<r<<"\n"<<at<<"\n"<<t<<"\n";
		puts("\t\t\tnow you have succefully register in LAMHY and no you can LOGIN to LAMHY\n ");
	
	}
}
else
{
	stusign();   //sign for students
}
		
}
void getatt()  //to check the attendance
{
	fstream s,az;
	s.open("attend.txt",ios::in|ios::out|ios::app);
	long long int n,p,a,a1,i,a2,z,f,d;
	char ar[100],br[100],aa;
	int pre=0,abs=0,pre1=0,abs1=0,pre2=0,abs2=0,pre3=0,abs3=0,pre4=0,abs4=0;
	//az.open("attend.txt",ios::in|ios::out|ios::app);
	cin.ignore();
	system("cls");
	n=studgetinfo();

	if(n!=101);
	while(!s.eof())
	{
		s>>p>>ar;
		if(s.eof())
		break;
		//cout<<p;
		fstream x;
		x.open("at2.txt",ios::in|ios::out|ios::app);
		while(!x.eof())
		{
			x>>br>>a>>a1>>a2;
			if(a==p)
			{
				break;
			}
		}
	z=a2-a1;
	for(i=0;i<=z;++i)
	{
		s>>f;
		s.get(aa);
		s>>d;
		if(p==101)
		{
		if(f==n)
		{
			if(d==1)
			++pre;
			else
			++abs;	
		}
	}
	else if(p==102)
	{
			
		if(f==n)
		{
			if(d==1)
			++pre1;
			else
			++abs1;	
		}
	}
	else if(p==103)
	{
		if(f==n)
		{
			if(d==1)
			++pre2;
			else
			++abs2;	
		}
	}
	else if(p==104)
	{
		if(f==n)
		{
			if(d==1)
			++pre3;
			else
			++abs3;	
		}
	}
	else if(p==105)
	{
		if(f==n)
		{
			if(d==1)
			++pre4;
			else
			++abs4;	
		}
	}	
	}
	}
	if(n!=101)
	{
		cout<<"\n\t\t\tATTENDANCE IN 101- "<<pre<<" out of "<<(abs+pre)<<"\n\t\t\tATTENDANCE IN 102- "<<pre1<<" out of "<<(pre1+abs1);
	cout<<"\n\t\t\tATTENDANCE IN 103- "<<(pre2)<<" out of "<<(pre2+abs2)<<"\n\t\t\t"<<"ATTENDANCE IN 104- "<<(pre3)<<" out of "<<(pre3+abs3);
	cout<<"\n\t\t\t"<<"ATTENDANCE IN 105- "<<(pre4)<<" out of "<<(pre4+abs4);
	
	}
	
}
void studet() //to input the details of student
{
 	fstream s;
s.open("stu.txt",ios::out|ios::app);
	puts("\t\t\tno. of students whose deatails is going to entered");
	int n,i,k,j,sum=0,ii,p=101,q=501;
	cout<<"\t\t\t";
	cin>>n;
	studen ar[n];
	for(i=0;i<n;++i)
	{
		sum=0;
		cin.ignore();
	while(p==101)
	{
	q=501;
		puts("\t\t\tenter roll no of student");
		cout<<"\t\t\t";
		gets(ar[i].roll);
	for(ii=0;ar[i].roll[ii]!='\0';++ii)
	{
		if(ar[i].roll[ii]>='0'&&ar[i].roll[ii]<='9')
		{

			sum=(sum*10)+tt(ar[i].roll[ii]);
			
		}
		else
		{
			q=101;
			puts("\t\t\tyou have entered an incorrect roll number so please enter a correct roll number(digits only)");
			break;
		
		}
		
	}
	if(q==501)
		p=501;
	
		
}
		puts("enter name of student");
		cout<<"\t\t\t";
		fgets(ar[i].name,100,stdin);
	//	cin.ignore();
	puts("\t\t\tenter the course of student");
	cout<<"\t\t\t";
	fgets(ar[i].cour,100,stdin);
		puts("\t\t\tenter father's name of student");
		cout<<"\t\t\t";
		fgets(ar[i].fname,100,stdin);	
		puts("\t\t\tenter mother's name of student");
		cout<<"\t\t\t";
		fgets(ar[i].mname,100,stdin);
		p=101;
	long long int su=0;
	while(p==101)
	{
	q=501;
	su=0;
		puts("\t\t\tenter mobile no. of student");
		cout<<"\t\t\t";
		gets(ar[i].mob);
		if(strlen(ar[i].mob)==10)
		{
	for(ii=0;ar[i].mob[ii]!='\0';++ii)
	{
			if(ar[i].mob[ii]>='0'&&ar[i].mob[ii]<='9')
		{

			su=(su*10)+tt(ar[i].mob[ii]);
			
		}
		else
		{
			q=101;
			puts("\t\t\tyou have entered an incorrect mobile number so please enter a correct mobile number(digits only)");
			break;
		
		}
		
	}
}
else
{
	q=101;
	puts("\t\t\tyou have entered an incorrect mobile number so please enter a correct mobile number(digits only and contains 10 didts only)");
		
}
	if(q==501)
		p=501;		
}
		s<<sum<<"\n"<<ar[i].name<<ar[i].cour<<ar[i].fname<<ar[i].mname<<su<<"\n";
	}
}
void putevent() // to enter the details of an event
{
	puts("\t\t\t\t\tWELCOME TO LMHY\n");
	int n,i,j;
	puts("\t\t\tenter the no of events to be filled");
	cout<<"\t\t\t";
	cin>>n;
	cin.ignore();
	char ar[100],br[100],cr[100],dr[100],er[100];
	fstream s;
	int p=101,q=501;
	s.open("events.txt",ios::in|ios::out|ios::app);
	s.seekp(0,ios::beg);
	s.seekp(0,ios::beg);
	for(i=0;i<n;++i)
	{
		puts("\t\t\tenter the name of EVENT");
		cout<<"\t\t\t";
		gets(ar);
		puts("\t\t\tenter the date of venue (DD:MM::YYYY).....eg.(04:04:2017)");
		p=101;
		q=501;
		while(p==101)
		{
			q=501;
			cout<<"\t\t\t";
			gets(br);
			if(strlen(br)==10)
			{
				for(j=0;br[j]!='\0';++j)
				{
					if(j==2||j==5)
					{
				
				
					if(br[j]!=':')
					{
						q=501;
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:2017)");
						break;
					}
					
			}
			else
			{
				if(br[j]>='0'&&br[j]<='9')
				{
				q=101;	
				}
				else
				{
					
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:2017)");
					q=501;
					break;
				}
			}
				}
			}
			else
			{
				q=501;
				
						puts("\t\t\tplease enter a valid date ie of format (DD:MM:YYYY)....eg.(04:04:2017)");
			}
			if(q==101)
			p=501;
		}
		
		puts("\t\t\tEnter the time of event in format (HH:MM)....eg (10:30) or (15:40)");
		p=101;
		q=501;
		while(p==101)
		{
			q=501;
			cout<<"\t\t\t";
			gets(cr);
			if(strlen(cr)==5)
			{
				for(j=0;cr[j]!='\0';++j)
				{
					if(j==2)
					{
						if(cr[j]==':')
						q=101;
						else
						{
							puts("\t\t\tplease enter a time of valid format ie (HH:MM)....eg (10:30) or (15:40)ppp");
							q=501;
							break;
						}
					}
					else
					{
						if(cr[j]>='0'&&cr[j]<='9')
						{
							q=101;
						}
						else
						{
							puts("\t\t\tplease enter a time  of valid format ie (HH:MM)....eg (10:30) or (15:40) pp");
							q=501;
							break;
						}
					}
				}
			}
			else
			{
				puts("\t\t\tplease enter a time of valid format ie (HH:MM)....eg (10:30) or (15:40) p");
				q=501;
			}
			if(q==101)
				p=501;
			}
			puts("\t\t\tenter the venue of EVENT");
			cout<<"\t\t\t";
			gets(dr);
			puts("\t\t\tany additional information ....like duration of event");
			cout<<"\t\t\t";
			gets(er);
	s<<ar<<"\n"<<br<<"\n"<<cr<<"\n"<<dr<<"\n"<<er<<"\n";
	}


	}	

void faclogin(long long int sum ,char ar[100]) // logged in
{
notifi(ar,2,501,123);	
	system("cls");
	puts("\t\t\tENTER YOUR CHOICE\n\t\t\t1.ENTER THE DETAILS OF SUBJECTS\n\t\t\t2.ENTER THE ATTENDANCE\n\t\t\t3.CHECK THE ATTENDENCE OF A PARTICULAR STUDENT\n\t\t\t4.ENTER THE DETAILS OF STUDENT");
	puts("\t\t\t5.Events in University\n\t\t\t6.Add event\n\t\t\t7.ENTER THE MATKS OF STUDENTS\n\t\t\t8.CHECK THE MARKS OF STUDENT\n\t\t\t9.CHAT BOT\n\t\t\t10.NOTIFICATIONS\n\t\t\t11.TO GIVE ASSIGNMENT\n\t\t\t12.TO MARK THE SUBMISSION OF ASSIGNMENT");
	puts("\t\t\t13.SOME HELPFUL TOOLS")	;
int n;
cout<<"\t\t\t";
cin>>n;
if(n==9)
{
	chats(ar,2);
}
else if(n==13)
{
	tool();
}
else if(n==12)
{
	markasss(ar);
}
else if(n==11)
{
	putn(ar);
}
else if(n==10)
notifi(ar,2,101,123);
else if(n==1)
{
	char az[100];
	int ppp=501;
	int y;
	fstream s;
	s.open("at2.txt",ios::in|ios::out|ios::app);
	while(!s.eof())
	{
		s>>az>>y;
		if(strcmp(az,ar)==0)
		{
			ppp=101;
			cout<<"\t\t\tyou have already completed this process\n\t\t\t";
			break;
		}
	}

if(ppp==501)
{
	puts("\t\t\tENTER THE SUBJECTS\n\t\t\t1.C language (code - 101)\n\t\t\t2. Engeneering Mathematics (code - 102)\n\t\t\t3.electronics (code - 103)\n\t\t\t4.Engeneering Mechanics (code - 104)\n\t\t\t5.professional communication (code - 105)");
	int z;
	cout<<"\t\t\t";
	cin>>z;
	fstream x;
	x.open("at2.txt",ios::in|ios::out|ios::app);
	if(z==1)
	x<<ar<<"\n"<<101<<"\n";
	else if(z==2)
	x<<ar<<"\n"<<102<<"\n";
	else if(z==3)
	x<<ar<<"\n"<<103<<"\n";
	else if(z==4)
	x<<ar<<"\n"<<104<<"\n";
	else if(z==5)
	x<<ar<<"\n"<<105<<"\n";
	long long int ro1,ro2;
	puts("\t\t\tenter the lower limit of roll numbers");
	cout<<"\t\t\t";
	cin>>ro1;
	puts("\t\t\tenter the end limit of roll numbers");
	cout<<"\t\t\t";
	cin>>ro2;
	x<<ro1<<"\n"<<ro2<<"\n";
}

}
else if(n==7)
{
	fstream x,z;
	long long int y,y1,y2,a;
	int pl=101;
	char az[100];
	x.open("at2.txt",ios::in|ios::out|ios::app);
	while(!x.eof())
	{
		x>>az>>y>>y1>>y2;
		if(strcmp(az,ar)==0)
			{
				
				pl=501;
				break;
				
			}
	}
	z.open("marks.txt",ios::in|ios::out|ios::app);	
	puts("\t\t\tENTER YOUR CHOICE\n\t\t\t1.MARKS OF MID TERM\n\t\t\t2.MARKS OF END TERM\n\t\t\t3.SESSIONAL MARKS");
	int ty;
	cout<<"\t\t\t";
	cin>>ty;
	if(ty==1)
	{	int ma;
		z<<"1\n"<<y<<"\n";
		for(a=y1;a<=y2;++a)
		{
			cout<<"\t\t\tMARKS OF "<<a<<" OUT OF 25 - ";
			
			cin>>ma;
			z<<a<<" "<<ma<<"\n";
		}
		
	}
	else if(ty==2)
	{
		int ma;
		z<<"3\n"<<y<<"\n";
		for(a=y1;a<=y2;++a)
		{
			cout<<"\t\t\tMARKS OF "<<a<<" OUT OF 50 - ";
			cin>>ma;
			z<<a<<" "<<ma<<"\n";
		}
		
	}
	else if(ty==3)
	{
		int ma;
		z<<"2\n"<<y<<"\n";
		for(a=y1;a<=y2;++a)
		{
			cout<<"\t\t\tMARKS OF "<<a<<" OUT OF 25 - ";
			cin>>ma;
			z<<a<<" "<<ma<<"\n";
		}
	}

}
else if(n==2)
{
	fstream x;
	long long int y,y1,y2;
	int pl=101;
	char az[100];
	x.open("at2.txt",ios::in|ios::out|ios::app);
	while(!x.eof())
	{
		x>>az>>y>>y1>>y2;
		if(strcmp(az,ar)==0)
			{
				pl=501;
				break;
				
			}
	}
	if(pl==501)
	{
		time_t now=time(0);
	tm*ltm=localtime(&now);
	
	int ii=ltm->tm_sec,jj=ltm->tm_min,kk=ltm->tm_hour,ll=1900+ltm->tm_year,pp=1+ltm->tm_mon,ddd=ltm->tm_mday;
	fstream ax;
	ax.open("attend.txt",ios::in|ios::out|ios::app);
	int i1,j1;
	ax<<y<<"\n"<<ddd<<":"<<pp<<":"<<ll<<"\n";
		puts("\t\t\tenter the attendence..press 1 for present and 0 for absent");
	for(i1=y1;i1<=y2;++i1)
	{
		int po=101;
		while(po==101)
		{
		
		cout<<i1<<" ";
		cout<<"\t\t\t";
		cin>>j1;
		if(j1==0||j1==1)
		{
			ax<<i1<<" "<<j1<<"\n";
			po=501;
		}
		else
		{
			puts("\t\t\tplease use 0 and 1 for marking absent and present\n0 for absent\n1 for present\n");
		}
	}
}
		
	}
	else
	puts("\t\t\tyou have not register to LMHY so firstly do registration");
	

}
else if(n==3)
{
	getatt();
}
else if(n==4)
{
	studet();
}
else if(n==5)
{
	getevent();
}
else if(n==8)
{
	marksget();
}
else if(n==6)
{
	putevent();
}
}
void facc() //login process for faculty
{
	cin.ignore();
	puts("\t\t\tENTER YOUR USERNAME");
	char arr[100],ar[100],br[100];
	long long int prr; 
	int a=101,b=501,pp=101,i,fl=501;
	char z;
	while(a==101)
	{
		fl=501;
		b=501;
		cout<<"\t\t\t";
		gets(ar);
		for(i=0;ar[i]!='\0';++i)
		{
			if(ar[i]==' ')
			{
				puts("\t\t\tYOU HAVE ENTERED AN INVALID USERNAME i.e. IT DO NOT COSISIT OF BLANK SPACES");
				b=101;
				break;
			}
	}
	fstream s;
	s.open("faculty.txt",ios::in|ios::out|ios::app);
	while(!s.eof())
{
	s>>arr>>prr;
	
	if(strcmp(ar,arr)==0)
	{
	fl=101;
		break;
	}
	}
if(fl==501)
puts("\t\t\tplease enter a valid username");	
if(b==501&&fl==101)
a=501;
}

long long int pass;
	puts("\t\t\tenter your password");
	int sum,p=101,q=501;
	while(p==101)
	{
		q=501;
		sum=0;
		cout<<"\t\t\t";
			cin>>br;
			if(strlen(br)>=6)
			{
		
	for(i=0;br[i]!='\0';++i)
	{
		if(br[i]>='0'&&br[i]<='9')
			sum=(sum*10)+tt(br[i]);
		else
		{
			q=101;
			puts("\t\t\tyou have entered an invslid password so please enter a valid password (digits only)");
			break;
		}
		}
	if(q==501)
	p=501;		
}
else
puts("\t\t\tplease enter a valid password i.e whic contains greater than or equals to 6 digits");
if(sum==prr)
{
	cout<<"WELCOME "<<ar<<"\n\t\t\t";
}
else
{	puts("\t\t\tincorrect password\nPlease enter it again");
	p=101;
	
}
}
//cout<<"\n"<<sum<<" "<<ar;
faclogin(sum,arr);
int za=2;
while(za==2)
{

puts("\n\n\t\t\tEnter your choice\n\t\t\t1.go back to main menu\n\t\t\t2.logout");
cout<<"\t\t\t";
cin>>za;
if(za==2)
return;
else if(za==1)
faclogin(sum,arr);
}
}
void sif()// sign in for faculties
{
	cin.ignore();
	
	fstream x;
	x.open("faculty.txt",ios::in|ios::out|ios::app);
	puts("\t\t\tWELCOME TO LAMHY\n\t\t\t PLease select your username( it can contain alphabets,digits and special symbols too (EXCEPT BLANK SPACES))");
	char ar[100],arr[100],arrr[100],br[100];
	int a=101,prr,b=501,pp=101,i;
	char z;
	while(a==101)
	{
		b=501;
		cout<<"\t\t\t";
		gets(ar);
		for(i=0;ar[i]!='\0';++i)
		{
			if(ar[i]==' ')
			{
				puts("\t\t\tYOU HAVE ENTERED AN INVALID USERNAME i.e. IT DO NOT COSISIT OF BLANK SPACES");
				b=101;
				break;
			}
	}
	fstream s;
	s.open("faculty.txt",ios::in|ios::out);
	while(!s.eof())
{
	s>>arr>>prr;
	
	if(strcmp(ar,arr)==0)
	{
		b=101;
		puts("\t\t\tYOU HAVE ENTERED A PREEXISTING USERNAME SO PLEASE USE DIFFERENT USERNAME");	
		break;
	}
	
	}
		
	if(b==501)
	a=501;
	
	}
	
	

	puts("\t\t\tEnter a password through you can login (it can contain DIGITS only)");
	
	int sum,p=101,q=501;
	while(p==101)
	{
		q=501;
		sum=0;
		cout<<"\t\t\t";
			cin>>br;
			if(strlen(br)>=6)
			{
		
	for(i=0;br[i]!='\0';++i)
	{
		if(br[i]>='0'&&br[i]<='9')
			sum=(sum*10)+tt(br[i]);
		else
		{
			q=101;
			puts("\t\t\tyou have entered an invslid password so please enter a valid password (digits only)");
			break;
		}
		}
	if(q==501)
	p=501;		
}
else
puts("\t\t\tplease enter a valid password i.e whic contains greater than or equals to 6 digits");
}
puts("\t\t\tYou have succefully register to LAMHY\nYour USERNAME IS - ");
puts(ar);
puts("\t\t\tYour PASSWORD is - ");
puts(br);
x<<ar<<"\n"<<br<<"\n";

}
int main()
{

	system("color F0");
	puts("\t\t\t\t\tWELCOME TO ESC(REPEAT) COLLEGE'");
	puts("\t\t\t1.SIGN UP           (for parents as well as student)\n\t\t\t2.LOGIN          (for both parents and students)\n\t\t\t3.LOGIN          (FOR FACULTIES)\n\t\t\t4.SIGN UP FOR FACULTIES");
	int t;
	cout<<"\t\t\t";
	cin>>t;
	if(t==1)
	si();
	else if(t==2)
		log();
		else if(t==3)
		facc();
		else if(t==4)
		sif();
system("pause");	
}
