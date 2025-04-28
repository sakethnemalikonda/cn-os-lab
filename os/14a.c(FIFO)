#include<stdio.h>
void main(){
int i,j,n,a[50],frame[10],fno,k,avail,pagefault=0;
printf("\n Enter the number of frames: ");
scanf("%d",&fno);
printf("\n Enter number of reference string: ");
scanf("%d",&n);
printf("\n Enter the reference string: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<fno;i++)
frame[i]=-1;
j=0;
printf("\n FIFO Page Replacement Algorithm \n\n The given reference string is: \n\n");
for(i=0;i<n;i++){
printf("%d",a[i]);
}
printf("\n");
for(i=0;i<n;i++){
printf("\n Reference No %d-->",a[i]);
avail=0;
for(k=0;k<fno;k++)
if(frame[k]==a[i])
avail=1;
if(avail==0){
frame[j]=a[i];
j=(j+1)%fno;
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

student@202-28:~/5x0$ cc 14a.c
student@202-28:~/5x0$ ./a.out

 Enter the number of frames: 3

 Enter number of reference string: 10

 Enter the reference string: 4 3 2 3 1 4 3 1 3 2 

 FIFO Page Replacement Algorithm 

 The given reference string is: 

4323143132

 Reference No 4-->  4

 Reference No 3-->  4  3

 Reference No 2-->  4  3  2

 Reference No 3-->

 Reference No 1-->  1  3  2

 Reference No 4-->  1  4  2

 Reference No 3-->  1  4  3

 Reference No 1-->

 Reference No 3-->

 Reference No 2-->  2  4  3

Page Fault Is 7
