#include<stdio.h>
void main(){
int i,j,temp,framearr[20],pages,pageno,frames,memsize,log,pagesize,prosize,base;
printf("Enter the Process size: ");
scanf("%d",&prosize);
printf("\nEnter the main memory size: ");
scanf("%d",&memsize);
printf("\nEnter the page size: ");
scanf("%d",&pagesize);
pages=prosize/pagesize;
printf("\nThe process is divided into %d pages",pages);
frames = memsize/pagesize;
printf("\n\nThe main memory is divided into %d frames\n",frames);
for(i=0;i<frames;i++)
framearr[i]=-1;
/* Initializing array elements with -1*/
for(i=0;i<pages;i++){
pos:
printf("\nEnter the frame number of page %d: ",i);
scanf("%d",&temp); /* storing frameno in temporary variable*/
if(temp>=frames) /*checking wether frameno is valid or not*/
{
printf("\n\t****Invalid frame number****\n");
goto pos;
}
/* storing pageno (i.e 'i' ) in framearr at framno (i.e temp ) index */
for(j=0;j<frames;j++)
if(temp==j)
framearr[temp]=i;
}
printf("\n\nFrameno\tpageno\tValidationBit\n------\t------\t----------");
for(i=0;i<frames;i++){
printf("\n %d \t %2d \t",i,framearr[i]);
if(framearr[i]==-1)
printf(" 0");
else
printf(" 1");
}
printf("\nEnter the logical address: ");
scanf("%d",&log);
printf("\nEnter the base address: ");
scanf("%d",&base);
pageno = log/pagesize;
for(i=0;i<frames;i++)
if(framearr[i]==pageno)
{
temp = i;
break;
}
j = log%pagesize;
/* here 'j' is displacement */
temp = base + (temp*pagesize)+j; //lhs 'temp' is physical address rhs and 'temp' is frame num
printf("\nPhysical address is : %d",temp);
}

Example Input/Output:

student@202-28:~/5x0$ cc 13a.c
student@202-28:~/5x0$ ./a.out
Enter the Process size: 8

Enter the main memory size: 16

Enter the page size: 2

The process is divided into 4 pages

The main memory is divided into 8 frames

Enter the frame number of page 0: 5

Enter the frame number of page 1: 6

Enter the frame number of page 2: 2

Enter the frame number of page 3: 3


Frameno	pageno	ValidationBit
------	------	----------
 0 	 -1 	 0
 1 	 -1 	 0
 2 	  2 	 1
 3 	  3 	 1
 4 	 -1 	 0
 5 	  0 	 1
 6 	  1 	 1
 7 	 -1 	 0
Enter the logical address: 3

Enter the base address: 1000
Physical address is : 1013
