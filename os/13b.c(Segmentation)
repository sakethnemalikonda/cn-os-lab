#include<stdio.h>
void main(){
int i,j,m,size,val[10][10],badd[20],limit[20],ladd;
printf("Enter the size of the segment table:");
scanf("%d",&size);
for(i=0;i<size;i++){
printf("\nEnter infor about segment %d",i+1);
printf("\nEnter base address:");
scanf("%d",&badd[i]);
printf("\nEnter the limit:");
scanf("%d",&limit[i]);
for(j=0;j<limit[i];j++){
printf("\nEnter %d address values:",badd[i]+j);
scanf("%d",&val[i][j]);
}}
printf("\n\n****SEGMENT TABLE****");
printf("\nseg.no\tbase\tlimit\n");
for(i=0;i<size;i++)
{
printf("%d\t%d\t%d\n",i+1,badd[i],limit[i]);
}
printf("\nEnter segment no.::");
scanf("%d",&i);
if(i>=size)
{
printf("invalid");
}
else
{
printf("\nEnter the logical address:");
scanf("%d",&ladd);
if(ladd>=limit[i])
printf("invalid");
else
{
m=badd[i]+ladd;
printf("\nmapped physical address is=%d",m);
printf("\nthe value is %d ",val[i][ladd]);
} }}

Example Input/Output:

student@202-28:~/5x0$ cc 13b.c
student@202-28:~/5x0$ ./a.out
Enter the size of the segment table:3

Enter infor about segment 1
Enter base address:2

Enter the limit:3

Enter 2 address values:11

Enter 3 address values:12

Enter 4 address values:13

Enter infor about segment 2
Enter base address:22

Enter the limit:4

Enter 22 address values:33

Enter 23 address values:44

Enter 24 address values:55

Enter 25 address values:66

Enter infor about segment 3
Enter base address:75

Enter the limit:2

Enter 75 address values:88

Enter 76 address values:99


****SEGMENT TABLE****
seg.no	base	limit
1	2	3
2	22	4
3	75	2

Enter segment no.::1

Enter the logical address:2

mapped physical address is=24
the value is 55
