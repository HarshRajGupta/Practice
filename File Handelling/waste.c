#include <stdio.h>
#include <stdlib.h>
 
int* total_number_of_books;

int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);    
    while (total_number_of_queries--) 
    {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1)
         {
            int x, y;
            int c;
            scanf("%d %d", &x, &y);
            total_number_of_books = (int*)malloc(sizeof(int));
            total_number_of_pages = (int**)malloc(sizeof(int*));
             printf("done 2\n");
             c =  *(total_number_of_books + x);
             printf("done 3\n");
             *(total_number_of_books + x) = c + 1;
             printf("done 4\n");
              *(total_number_of_pages + c)= (int*)malloc(sizeof(int));
             *(*(total_number_of_pages + x) + c) = y;
            printf("done");
        } 
        else
        { if (type_of_query == 2) 
         {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        }
         else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}