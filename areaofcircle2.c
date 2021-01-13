#include <stdio.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
#define _USE_MATH_DEFINES
#include <math.h>


float areaOfCircle(float radius)
{
  float areaOfCircle; 
  areaOfCircle = M_PI * radius * radius;
  return areaOfCircle;
}


//main function

int main()
{
  char input[256];
  int radius1;
  int radius2;
  
  //radius1 printf
  printf("input lower: ");
  while (1)
  {
	fgets(input, 256, stdin);
	if (sscanf(input, "%d", &radius1) == 1) break;
	printf("\nNot a valid integer, try again!\ninput lower: ");
  }
 

  //radius2 printf
  printf("input upper: ");
  while (1)
  {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &radius2) == 1) break;
        printf("/nNot a valid integer, try again!\ninput higher: ");
  }


  //area calculations
  for (int i = radius1; i < radius2 + 1; i++) {
    printf("The area of radius %d  is %f\n", i, areaOfCircle(i));
  }

}
