#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(void){
int pid;
int status;
printf("Hello World!\n");
pid=fork();
if(pid==-1){
perror("bad fork");
exit(1);
}
if(pid==0){
printf("I am the child process.\n");
}
else{ 
wait(&status);
printf("I am the parent process.");
}
return 0;
}

output:-
student@202-28:~/5x0$ cc 9c.c
student@202-28:~/5x0$ ./a.out
Hello World!
I am the child process.
I am the parent process.
