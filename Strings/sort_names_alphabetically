#include <stdio.h>

    #include <string.h>
    void main()
    {
        char name[10][8], temp[8];
        int i, j, n;
        printf("Enter the value of n \n");
        scanf("%d", &n);
        for (i = 0; i < n; i++) 
        {     printf("Enter the name of student %d:",i+1);
              scanf("%s", name[i]);
        }
     for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
	           {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }

        }

        printf("Input NamestSorted names\n");

        for (i = 0; i < n; i++) 

        printf("\t%s\n", name[i]);
 
    }
