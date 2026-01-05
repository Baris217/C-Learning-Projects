#include <stdio.h>

int main()
{

  int a;

  printf("Please enter your note:");
  scanf("%d", &a);

  if (a <= 100 && a >= 90)
  {

    printf("Your grade is AA");
  }

  else if (a <= 89 && a >= 85)
  {

    printf("Your grade is BA");
  }

  else if (a <= 84 && a >= 80)
  {

    printf("Your grade is BB");
  }

  else if (a <= 79 && a >= 70)
  {

    printf("Your grade is CB");
  }

  else if (a <= 69 && a >= 60)
  {

    printf("Your grade is CC");
  }

  else if (a <= 59 && a >= 55)
  {

    printf("Your grade is DC");
  }

  else if (a <= 54 && a >= 50)
  {

    printf("Your grade is DD");
  }

  else if (a <= 49 && a >= 40)
  {

    printf("Your grade is FD");
  }

  else if (a <= 39 && a >= 0)
  {

    printf("Your grade is FF");
  }

  else
  {
    printf("Invalid note.Please enter a note between (0-100).");
  }
  return 0;
}
