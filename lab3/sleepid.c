#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void main(){
int pid;
pid=fork();
if(pid==0){
printf(" Child process \n");
printf(" Child process id is %d\n",getpid());
printf(" Its parent process id is %d\n",getppid());
sleep(5);
printf(" Child process after sleep=5\n");
printf(" Child process id is %d\n",getpid());
printf(" Its parent process id is %d\n",getppid());
}
else{
printf(" Parent process\n");
sleep(10);
printf(" Child Process id is %d \n",getpid());
printf(" Its parent process id is %d \n",getppid());
printf(" Parent terminates\n");
}
}
