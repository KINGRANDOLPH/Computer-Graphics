#include<iostream>
using namespace std;
int main()
{
	int i;
	float m;
	int xmin,xmax,ymin,ymax; //window
	float x1,y1; //first end point
	float x2,y2; //second end point
	int p1[4],p2[4]; //region codes
	cin>>xmin>>xmax>>ymin>>ymax;
	cin>>x1>>y1;
	cin>>x2>>y2;
	//initialize region codes
	for(i=0;i<4;i++)
	{
		p1[i]=0;
		p2[i]=0;
	}
	//Assign Region Code for p1
	if((x1>xmin)&&(x1<xmax)&&(y1>ymin)&&(y1<ymax))
	{
		//
	}
	else if((x1<xmin)&&(x1<xmax)&&(y1>ymin)&&(y1<ymax)) 
	{
		p1[3]=1;
	}
	else if((x1>xmin)&&(x1>xmax)&&(y1>ymin)&&(y1<ymax))
	{
		p1[2]=1;
	}
	else if((x1>xmin)&&(x1<xmax)&&(y1>ymin)&&(y1>ymax))
	{
		p1[0]=1;
	}
	else if((x1>xmin)&&(x1<xmax)&&(y1<ymin)&&(y1<ymax))
	{
		p1[1]=1;
	}
	else if((x1<xmin)&&(x1<xmax)&&(y1>ymin)&&(y1>ymax))
	{
		p1[0]=1;
		p1[3]=1;
	}
	else if((x1>xmin)&&(x1>xmax)&&(y1>ymin)&&(y1>ymax))
	{
		p1[0]=1;
		p1[2]=1;
	}
	else if((x1<xmin)&&(x1<xmax)&&(y1<ymin)&&(y1<ymax))
	{
		p1[1]=1;
		p1[3]=1;
	}
	else if((x1>xmin)&&(x1>xmax)&&(y1<ymin)&&(y1<ymax))
	{
		p1[1]=1;
		p1[2]=1;
	}
	//Region Code for p2
	if((x1>xmin)&&(x1<xmax)&&(y1>ymin)&&(y1<ymax))
	{
		//
	}
	else if((x2<xmin)&&(x2<xmax)&&(y2>ymin)&&(y2<ymax)) 
	{
		p2[3]=1;
	}
	else if((x2>xmin)&&(x2>xmax)&&(y2>ymin)&&(y2<ymax))
	{
		p2[2]=1;
	}
	else if((x2>xmin)&&(x2<xmax)&&(y2>ymin)&&(y2>ymax))
	{
		p2[0]=1;
	}
	else if((x2>xmin)&&(x2<xmax)&&(y2<ymin)&&(y2<ymax))
	{
		p2[1]=1;
	}
	else if((x2<xmin)&&(x2<xmax)&&(y2>ymin)&&(y2>ymax))
	{
		p2[0]=1;
		p2[3]=1;
	}
	else if((x2>xmin)&&(x2>xmax)&&(y2>ymin)&&(y2>ymax))
	{
		p2[0]=1;
		p2[2]=1;
	}
	else if((x2<xmin)&&(x2<xmax)&&(y2<ymin)&&(y2<ymax))
	{
		p2[1]=1;
		p2[3]=1;
	}
	else if((x2>xmin)&&(x2>xmax)&&(y2<ymin)&&(y2<ymax))
	{
		p2[1]=1;
		p2[2]=1;
	}
	// print region codes
	for(i=0;i<4;i++)
	{
		cout<<p1[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<4;i++)
	{
		cout<<p2[i]<<" ";
	}
	//Clipping
	m=(y2-y1)/(x2-x1);
	if(p1[0]==1)
	{
		y1=ymax;
		x1=x1+(ymax-y1)*m;
	}
	if(p1[1]==1)
	{
		y1=ymin;
		x1=x1+(ymin-y1)*m;
	}
	if(p1[2]==1)
	{
		x1=xmax;
		y1=y1+(xmax-x1)*m;
	}
	if(p1[3]==1)
	{
		x1=xmin;
		y1=y1+(xmin-x1)*m;
	}
	//region2
	//output
	cout<<x1<<" "<<y1<<endl;
	cout<<x2<<" "<<y2<<endl;
}
