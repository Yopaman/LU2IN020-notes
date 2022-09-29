#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
  int a = run(atoi(argv[1]));
  while(1) {
    printf("%p : %d", &a, a);
    sleep(1);
  }
}
