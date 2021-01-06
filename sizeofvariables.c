#include<stdio.h>

int main()
{
  int a = 545;
 
  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));



 char b = 'z';
   
  // print value and size of an char variable
  printf("char b value: %c and size: %lu bytes\n", b, sizeof(b));




 float c = 5.545;
   
  // print value and size of an float variable
  printf("float c value: %f and size: %lu bytes\n", c, sizeof(c));




 double d = 545.90234;
   
  // print value and size of an double variable
  printf("double d value: %f and size: %lu bytes\n", d, sizeof(d));




unsigned int e = 2004;
   
  // print value and size of an unsigned int variable
  printf("unsigned int e value: %d and size: %lu bytes\n", e, sizeof(e));




signed int f = 51;
   
  // print value and size of a signed int variable
  printf("signed int f value: %d and size: %lu bytes\n", f, sizeof(f));
}

