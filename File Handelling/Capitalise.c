#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void capitalise(char s[])
{
          long long n = strlen(s);
          int c = 0;
          for (long long i = 0; i < n; ++i)
          {
                    if (c == 0 && ((int)s[i] >= 97 && (int)s[i] <= 122))
                    {
                              s[i] -= 32;
                              c = 1;
                    }
                    else if ((int)s[i] == 32 || (int)s[i] == 10)
                    {
                              c = 0;
                    }
          }
}

int main(int argc, char const *argv[])
{
          char file_name[50], data[10000];
          printf("\nFile Name: ");
          gets(file_name);
          FILE *f = fopen(file_name, "r");
          FILE* temp = fopen("temprorary.txt", "w");
          if (f == NULL)
          {
                    printf("Can't Open the FILE");
                    exit(EXIT_FAILURE);
          }
          while (fscanf(f, "%s", data) != EOF)
          {
                    capitalise(data);
                    fwrite(data, sizeof(data), 1, temp);
          }
          fclose(f);
          fclose(temp);
          remove(file_name);
          rename("temprorary.txt", file_name);
          printf("Done Succesfully\n");
          return 0;
}