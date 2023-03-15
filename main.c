#include <stdio.h>
#include <stdlib.h>

//using switch statements, determine whether a character enetered is capital or small letter//

int main(void) 
{
  char letter;
  printf("Please enter a character:\t");
  scanf("%c", &letter);

  switch (letter)
    {
      case 'a' ... 'z':
        printf("The character inputed is a small letter\n");
      break;

      case 'A' ... 'Z':
      printf("The character inputted is a capital letter\n");
      break;

      default:
      printf("The character inputed is a special character\n");
    }

  printf("\nEnd of program\n");
  sleep(5);
  system("clear");
  printf("Welcome User\n");
  
  return 0;
}