#include <stdio.h>
#include <stdlib.h>
#include"ds_3.h"

int main()
{
    int a[50], n, c, v, p, q;

 t:
    printf("Enter Array (1-50) = ");
    scanf("%d", &n);

    if (n > 0 && n <= 50)
    {
        OneINDarray(a, n);
    }
    else
    {
        printf("\nWrong Number of Values\n");
        goto t;
    }

    while (1)
    {
        printf("\n..........MENU.............\n");
        printf("\nPress 0 for quit");
        printf("\nPress 1 for insertion at last position");
        printf("\nPress 2 for inserting at specific position");
        printf("\nPress 3 for display array");
        printf("\nPress 4 for deletion from specific position");
        printf("\nPress 5 for linear search");
        printf("\nPress 6 for bubble sort");
        printf("\nPress 7 for binary search");

        printf("\nEnter your choice: ");
        scanf("%d", &c);

        switch (c)
        {
        case 0:
            exit(0);

        case 1:
            printf("\nChoice Inserting array = ");
            scanf("%d",&v);
            n = ONEDINTArrayInput_LP(a,n,v);
            printf("Result = %d",n);

            break;

        case 2:
            printf("\nChoice Insertion at any position");
            L:
                printf("\nEnter position between %d to %d :", 1,n);
                scanf("%d", &p);
                if(p>=1 && p<=n)
                {
                    printf("\nEnter new value for Insertion : ");
                    scanf("%d", &v);
                     n = ONEDINTArrayInput_SP(a,n,v,p);
                     printf("\nInserted Succesfully %d at position %d", v, p);
                }
                else
                {
                    printf("\nInvalied position");
                    goto L;
                }

                break;

        case 3:
            printf("\nChoice = Display\n");
            if (n > 0)
            {
                one_d_int_array_display(a, n);
            }
            else
            {
                printf("Array is empty.\n");
            }
            break;

        case 4:
        M:
            printf("\nChoice Delete from specific position");
            printf("\nEnter position between %d to %d : ", 1, n);
            scanf("%d", &p);
            if(p>=1 && p<=n)
            {
                v = a[p];
                n = oneDIntDelSP(a, n, p);
                printf("\nDelete Successfully %d from the position %d", v, p);
            }
            else
            {
                printf("\nInvalied position");
                goto M;
            }
            break;

        case 5:
            printf("\nChoice Leaner search");
            if(n>0)
            {
                printf("\nEnter value for searching : ");
                scanf("%d", &v);
                OneIntArrayLeanerSearch(a, n, v);
            }
            else
            {
               printf("\nArray is Empty");
            }
            break;

        case 6:
            printf("\nChoice Bubble Sort\n");
            if(n>0)
            {
                OneDIntArrayBubble_Sort(a, n);
                printf("\nSorted Successfully\n");
            }
            else
            {
                printf("\nArray is Empty\n");
            }
            break;

        case 7:
            printf("\nChoice binary search\n");
            if (n>0)
            {
                printf("\nEnter value for searching\n");
                scanf("%d", &v);
                OneDIntArrayBinary_Search(a, n, v);
            }
                else
                {
                    printf("\nArray Empty\n");
                }

            break;

        default:
            printf("\nInvalid Choice\n");
            break;
        }
    }

    return 0;
}