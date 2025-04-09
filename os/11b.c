#include<stdio.h>
void main()
{
int ts,bt1[10],wt[10],tat[10],i,j=0,n,bt[10],ttat=0,twt=0,tot=0;
float awt,atat;
printf("Enter the number of Processes \n");
scanf("%d",&n);
printf("\n Enter the Timeslice \n");
scanf("%d",&ts);
printf("\n Enter the Burst Time for the process");
for(i=1;i<=n;i++){
scanf("%d",&bt1[i]);
bt[i]=bt1[i];
}
while(j<n){
for(i=1;i<=n;i++){
if(bt[i]>0){
if(bt[i]>=ts){
tot+=ts;
bt[i]=bt[i]-ts;
if(bt[i]==0){
j++;
tat[i]=tot;
}}
else{
tot+=bt[i];
bt[i]=0;
j++;
tat[i]=tot;
}}}}
for(i=1;i<=n;i++){
wt[i]=tat[i]-bt1[i];
twt=twt+wt[i];
ttat=ttat+tat[i];
}
awt=(float)twt/n;
atat=(float)ttat/n;
printf("\n PID \t BT \t WT \t TAT\n");
for(i=1;i<=n;i++) {
printf("\n %d \t %d \t %d \t %d \t\n",i,bt1[i],wt[i],tat[i]);
}
printf("\n The average Waiting Time=%f",awt);
printf("\n The average Turn around Time=%f",atat);
}

Example Input/Output:

student@202-28:~/5x0$ cc 11b.c
student@202-28:~/5x0$ ./a.out
Enter the number of Processes 
4

 Enter the Timeslice 
5

 Enter the Burst Time for the process10
15
20
25

 PID 	 BT 	 WT 	 TAT

 1 	   10 	 15 	 25 	

 2 	   15 	 30 	 45 	

 3 	   20 	 40 	 60 	

 4 	   25 	 45 	 70 	

 The average Waiting Time=32.500000
 The average Turn around Time=50.000000
