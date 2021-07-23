#include<stdio.h>

void main()
{
    int marks;
    int x=1;
    printf("Enter the Marks of student for Grading : \n");
    scanf("%d",&marks);
    while (x==1)
    {
    if (marks>100)
    {
        printf("Invalid Input \n");
        while (marks>100)
            {
                printf("Enter the Marks of student for Grading : \n");
                scanf("%d",&marks);
            }
    }

    else if (marks>=85)
        {
            printf("Grade-A");
            ++x;
        }

    else if (marks>=84)
    {
         printf("Grade-B");
         ++x;
    }

    else if (marks>=69)
    {
         printf("Grade-C");
         ++x;
    }
    else if (marks>=40)
    {
         printf("Grade-D");
         ++x;
    }
    else if (marks<40)
    {
         printf("Grade-F");
         ++x;
    }

    }
}
