#include <stdio.h>
#include <string.h>


// student structure
//struct Student...
struct Student {
  char firstname[50];
  char lastname[50];
  int age;
  int studentid;
};

void printStudent(struct Student* student)
{
  printf("---- student ----\n");
  printf("  Student: %s ", student->firstname);
  printf("%s\n", student->lastname);
  printf("    age: %d\n", student->age);
  printf("    id: %d\n", student->studentid);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
  for (int i = 0; i < num; i++) {
	printStudent(students + i);
  }
}


int main()
{

  // an array of students
  //xxx students;
  struct Student students[10];
  char input[256];
  
  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
	//firstname
      printf("First name: ");
      fgets(input, 256, stdin);
      sscanf(input, "%s", &students[numStudents].firstname);
	//lastname
      printf("Last name: ");
      fgets(input, 256, stdin);
      sscanf(input, "%s", &students[numStudents].lastname);
	//age
      printf("Enter age: ");
      while (1)
      {
	fgets(input, 256, stdin);
	if ( sscanf(input, "%d", &students[numStudents].age) == 1) break;
	printf("Not a valid age - try again!\n");
      }
	//studentid
      printf("Enter id: ");
      while (1)
      {
        fgets(input, 256, stdin); 
        if ( sscanf(input, "%d", &students[numStudents].studentid) == 1) break;
        printf("Not a valid studentid - try again!\n");
      }
      	//increase number of students
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
