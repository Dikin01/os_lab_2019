#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

int main(int argc, char* argv[]){
  pid_t pid = fork();
  if(pid==0)
    execl("sequential_min_max"," ", argv[1], argv[2], NULL);
  else
    return 0;
}