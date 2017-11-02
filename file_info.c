#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

void print_stat_info(char * address) {
  struct stat buffer;
  stat(address, &buffer);
  printf("File info of %s\n", address);
  printf("file size: %d\n", (int) buffer.st_size);
  printf("mode: %o\n", (int) buffer.st_mode);
  printf("time of last access: %s\n", ctime(&(buffer.st_atime)));
}


int main() {
  print_stat_info("file_info.c");
  return 0;
}
  
