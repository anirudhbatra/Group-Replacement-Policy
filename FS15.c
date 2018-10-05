#include<iostream>
using namespace std;
int main()
{
      int tot,j, i, sum=0;
      float n[6], p[6], per[6], g, cost[6], weekly[6], h;
      cout<<"Enter the number of Tubelights\n";
      cin>>tot;
      cout<<"Enter the % for 15 Week\n";
      cin>>per[0];
      cout<<"Enter the % for 30 Weeks\n";
      cin>>per[1];
      cout<<"Enter the % for 45 Weeks\n";
      cin>>per[2];
      cout<<"Enter the % for 60 Weeks\n";
      cin>>per[3];
      cout<<"Enter the % for 75 Weeks\n";
      cin>>per[4];
      cout<<"Enter the % for 90 Weeks\n";
      cin>>per[5];

      p[0]=per[0]/100;
      p[1]=(per[1]-per[0])/100;
      p[2]=(per[2]-per[1])/100;
      p[3]=(per[3]-per[2])/100;
      p[4]=(per[4]-per[3])/100;
      p[5]=(per[5]-per[4])/100;
      
      cout<<"\np1="<<p[0]<<"\np2="<<p[1]<<"\np3="<<p[2]<<"\np4="<<p[3]<<"\np5="<<p[4]<<"\np6="<<p[5];
      n[0]=tot;
      n[1]=n[0]*p[0];
      n[2]=n[0]*p[1]+n[1]*p[0];
      n[3]=n[0]*p[2]+n[1]*p[1]+n[2]*p[0];
      n[4]=n[0]*p[3]+n[1]*p[2]+n[2]*p[1]+n[3]*p[0];
      n[5]=n[0]*p[4]+n[1]*p[3]+n[2]*p[2]+n[3]*p[1]+n[4]*p[0];
      n[6]=n[0]*p[5]+n[1]*p[4]+n[2]*p[3]+n[3]*p[2]+n[4]*p[1]+n[5]*p[0];
 
     cout<<"\n\n\nTotal Tubelights="<<n[0]<<"\nTubelights failed in 15 weeks="<<n[1]<<"\nTubelights failed in 30 weeks="<<n[2]<<"\nTubelights failed in 45 weeks="<<n[3]<<"\nTubelights failed in 60 weeks="<<n[4]<<"\nTubelights failed in 75 weeks="<<n[5]<<"\nTubelights failed in 90 weeks="<<n[6];

for(j=0; j<6; j++)
{
	sum = sum + n[j+1];
cost[j] = tot*42 + sum*120;
weekly[j] = cost[j]/per[j];
		}
	
      cout<<"\n\n\nWeekly Cost for Group Replacement\nIn 15 weeks="<<weekly[0]<<"\n In 30 weeks="<<weekly[1]<<"\n In 45 weeks="<<weekly[2]<<"\n In 60 weeks="<<weekly[3]<<"\n In 5 weeks="<<weekly[4]<<"\n In 90 weeks="<<weekly[5];

g = weekly[0];

      for(i=0; i<5; i++)
      {
	if(g<weekly[i])
		{
		    g = weekly[i];
		    h = 15*(i+1);             
                 }                                               
      cout<<"\n \nThe optimal time to change the Tubelights="<<h;
      cout<<"\n \nThe optimal cost to change the Tubelights="<<g;
     return 0;
}


