#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void main(){
int id = fork();
if(id==-1){
printf("cannot create file");
exit(1);
}
else if (id==0){
sleep(2);
printf("this is the child process \n");
}
else {
printf("parent process \n");
exit(1);
}
}
