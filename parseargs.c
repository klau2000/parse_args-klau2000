#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>

char ** parse_args (char *line) {
  char ** ans;
  ans = malloc(256);
  char *curr = line;
  int count = 0;
  while (curr){
    ans[count] = strsep(&curr, " ");
    count++;
  }
  return ans;
}

int main () {
  char *line = strdup("ls -a -l");
  printf("Using parse_args to run ls -a -l:"\n);
  char ** args = parse_args(line);
  execvp(args[0], args);
}
