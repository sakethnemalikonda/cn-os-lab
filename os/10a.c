#include<stdio.h>
void main(){
int pid[10],bt[10],wt[10],tat[10],n,twt=0,ttat=0,i;
float awt,atat;
printf("Enter no.of processes:");
scanf("%d",&n);
printf("\n Enter burst times:");
for(i=0;i<n;i++)
scanf("%d",&bt[i]);
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
printf("\n PID \t BT \t WT \t TAT");
for(i=0;i<n;i++)
printf("\n %d\t%d\t%d\t%d",i+1,bt[i],wt[i],tat[i]);
awt=(float)twt/n;
atat=(float)ttat/n;
printf("\n Avg, Waiting Time=%f",awt);
printf("\n Avg, Turn around time=%f",atat);
}

student@202-28:~/5x0$ cc 10a.c
student@202-28:~/5x0$ ./a.out
Enter no.of processes:4

 Enter burst times:5 3 8 6

 PID 	 BT 	 WT 	 TAT
 1	5	0	5
 2	3	5	8
 3	8	8	16
 4	6	16	22
 Avg, Waiting Time=7.250000
 Avg, Turn around time=12.750000
