#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
void main(){
int id;
id=fork();
if(id<0){
printf("cannot create file");
exit(-1);
}
if(id==0){
printf("child process \n");
exit(0);
}
else{
printf("parent process \n");
}
}	
