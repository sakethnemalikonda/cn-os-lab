#include<stdio.h>
void main(){
int i,j,l,max,n,a[50],frame[10],flag,fno,k,avail,pagefault=0,lru[10];
printf("\nEnter the number of Frames : ");
scanf("%d",&fno);
printf("\nEnter number of reference string :");
scanf("%d",&n);
printf("\n Enter the Reference string :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<fno;i++){
frame[i]= -1;
lru[i] = 0;
}
printf("\nLRU Page Replacement Algorithm\n\nThe given reference string is:\n\n");
for(i=0;i<n;i++){
printf(" %d ",a[i]);
}
printf("\n");
j=0;
for(i=0;i<n;i++){
max = 0;
flag=0;
printf("\nReference No %d-> ",a[i]);
avail=0;
for(k=0;k<fno;k++)
if(frame[k]==a[i]){
avail=1;
lru[k]=0;
break;
}
if(avail==1){
for(k=0;k<fno;k++)
if(frame[k]!=-1)
++lru[k];
max = 0;
for(k=1;k<fno;k++)
if(lru[k]>lru[max])
max = k;
j = max;
}
if(avail==0){
lru[j]=0;
frame[j]=a[i];
for(k=0;k<fno;k++){
if(frame[k]!=-1)
++lru[k];
else{
j = k;
flag = 1;
break;
}
}
if(flag==0){
max = 0;
for(k=1;k<fno;k++)
if(lru[k]>lru[max])
max = k;
j = max;
}
pagefault++;
for(k=0;k<fno;k++)
if(frame[k]!=-1)
printf(" %2d",frame[k]);
}
printf("\n");
}
printf("\nPage Fault Is %d",pagefault);
}

Example Input/Output:

student@202-28:~/5x0$ cc 14b.c
student@202-28:~/5x0$ ./a.out
Enter the number of Frames : 3

Enter number of reference string :10

 Enter the Reference string :
4 3 2 3 1 4 3 1 3 2

LRU Page Replacement Algorithm

The given reference string is:

 4  3  2  3  1  4  3  1  3  2 

Reference No 4->   4

Reference No 3->   4  3

Reference No 2->   4  3  2

Reference No 3-> 

Reference No 1->   1  3  2

Reference No 4->   1  3  4

Reference No 3-> 

Reference No 1-> 

Reference No 3-> 

Reference No 2->   1  3  2

Page Fault Is 6
