#include <stdio.h>
#include <string.h>
int main(){
  char s1[] = "Hey ";
  char s2[] = "Guys ";
  printf("Concatenated String: |%s|\n", strcat(s1,s2));
  char s3[] = "This is the Source";
  printf("nConcatenaed String: |%s|\n", strncat(s1,s3,12));
  
  return 0;

}
