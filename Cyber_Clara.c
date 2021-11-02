#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   //get the number of names
   unsigned long int size;
   char name[42], surname[21];
   scanf("%lu", &size);
   char names[size][42];

   for (int i = 0; i < size; i++)
   {
      scanf("%s", name);
      strcpy(names[i], name);
      strcat(names[i], " ");
   }

   for (int i = 0; i < size; i++)
   {
      scanf("%s", surname);
      strcat(names[i], surname);
   }

   qsort(names, size, sizeof(names[0]), strcmp);

   unsigned long int output = size;
   for (int i = 1; i < size; i++)
   {

      if (strcmp(names[i - 1], names[i]) == 0)

         output--;
   }

   printf("%lu", output);
}