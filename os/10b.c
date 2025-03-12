#include<stdio.h>
void main(){
int pid[10],bt[10],pr[10],wt[10],tat[10],n,twt=0,ttat=0,i,j,t;
float awt,atat;
printf("Enter no.of processes: ");
scanf("%d",&n);
printf("\n Enter burst times: ");
for(i=0;i<n;i++)
scanf("%d",&bt[i]);
printf("\n Enter PID: ");
for(i=0;i<n;i++)
scanf("%d",&pid[i]);
printf("\n Enter Priorities: ");
for(i=0;i<n;i++)
scanf("%d",&pr[i]);
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(pr[i]>pr[j]){
t=pr[i];
pr[i]=pr[j];
pr[j]=t;
t=bt[i];
bt[i]=bt[j];
bt[j]=t;
t=pid[i];
pid[i]=pid[j];
pid[j]=t;
}}}
wt[0]=0;
tat[0]=bt[0];
for(i=1;i<n;i++){
wt[i]=tat[i-1];
tat[i]=bt[i]+wt[i];
}
for(i=0;i<n;i++){
ttat=ttat+tat[i];
twt=twt+wt[i];
}
printf("\n PID PRIORITY \t BT \t WT \t TAT");
for(i=0;i<n;i++)
printf("\n%d\t%d\t%d\t%d\t%d",pid[i],pr[i],bt[i],wt[i],tat[i]);
awt=(float)twt/n;
atat=(float)ttat/n;
printf("\n Avg.Waiting Time=%f",awt);
printf("\n Avg.Turn around time=%f",atat);
}

Output:-

  cc 10b.c
  ./a.out
Enter no.of processes: 3

 Enter burst times: 4
3
5

 Enter PID: 1
2
3

 Enter Priorities: 3
1
2

 PID PRIORITY 	 BT 	 WT 	 TAT
2	1	3	0	3
3	2	5	3	8
1	3	4	8	12
 Avg.Waiting Time=3.666667
 Avg.Turn around time=7.666667
