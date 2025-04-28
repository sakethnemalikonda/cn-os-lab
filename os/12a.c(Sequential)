#include<stdio.h>
int main()
{
int n,i,j,b[20],sb[20],t[20],x,c[20][20];
printf("Enter no.of files:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter no. of blocks occupied by file%d",i+1);
scanf("%d",&b[i]);
printf("Enter the starting block of file%d",i+1);
scanf("%d",&sb[i]);
t[i]=sb[i];
for(j=0;j<b[i];j++)
c[i][j]=sb[i]++;
}
printf("Filename\tStart block\tlength\n");
for(i=0;i<n;i++)
printf("%d\t %d \t%d\n",i+1,t[i],b[i]);
printf("Enter file name:");
scanf("%d",&x);
printf("\nFile name is:%d",x);
printf("\nlength is:%d",b[x-1]);
printf("\nblocks occupied:");
for(i=0;i<b[x-1];i++)
printf("%4d",c[x-1][i]);
}

Example Input/Output:

student@202-28:~/5x0$ cc 12a.c
student@202-28:~/5x0$ ./a.out
Enter no.of files:2
Enter no. of blocks occupied by file14
Enter the starting block of file12
Enter no. of blocks occupied by file210
Enter the starting block of file25
Filename	Start block	length
1	 2 	4
2	 5 	10
Enter file name:2

File name is:2
length is:10
blocks occupied:   5   6   7   8   9  10  11  12  13  14
