#include<stdio.h>
#include<conio.h>
void main()
{
    in a[20], i, j, k, n;
    clrscr();

    print("Enter array size: ");
    scanf("%d", &n);

    print("\nEnter %d array element: ", n);
    for(i = 0; i < n; i++)
    {
        scan("%d", &a[i]);
    }
    print("\nOriginal array is: ");
    for(i = 0; i < n; i++)
    {
        print(" %d", a[i]);
    }

    print("\nNew array is: ");
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; )
        {
            if(a[j] == a[i])
            {
                for(k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    getch();
}
