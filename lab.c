
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
// #include<sys/wait.h>


void main(){
    int id;
    id=fork();
    if(id<0){printf("cannot read file");}
    
}

