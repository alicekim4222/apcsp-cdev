#include <stdio.h>
#include <string.h>

int main ()
{

//str1
char str1[27];
for (int i = 0; i < 26; i++) {
  str1[i] = 'a' + i;
}
str1[26] = '\0';

printf("%s\n", str1);
printf("length of str1 = %d\n", strlen(str1));

//str1
char str2[27] = "abcdefghijklmnopqrstuvwxyz";
printf("%s\n", str2);
printf("length of str2 = %d\n", strlen(str2));

//compare #1
if (strcmp(str1, str2) == 0)
  printf("the strings are identical\n");
else
  printf("the strings are different\n");

//changing str1
for (int i = 0; i <26; i++) {
  str1[i] -= 32;
}
printf("%s\n", str1);
printf("length of str1 = %d\n", strlen(str1));

//compare #2
if (strcmp(str1, str2) == 0)
  printf("the strings are identical\n");
else
  printf("the strings are different\n");

//str3
strcat(str2, str1);
printf("%s\n", str2);

}
