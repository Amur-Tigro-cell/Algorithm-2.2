#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a[20], max = 5, top = -1;

    while(1)
    {
        printf("\nEnter 1 for insertion\nEnter 2 for deletion\nEnter 3 for display\nEnter 4 to exit\n");
        scanf("%d", &n);

        if(n == 1)
        {
            if(top == max - 1)
                printf("Stack is overflow\n");
            else
            {
                int b;
                printf("Enter the value: ");
                scanf("%d", &b);
                top = top + 1;
                a[top] = b;
                printf("Data successfully inserted\n");
            }
        }
        else if(n == 2)
        {
            if(top == -1)
                printf("Stack is underflow\n");
            else
            {
                printf("Deleted element: %d\n", a[top]);
                top = top - 1;
            }
        }
        else if(n == 3)
        {
            if(top == -1)
                printf("Stack is empty\n");
            else
            {
                printf("Stack elements:\n");
                for(i = top; i >= 0; i--)
                    printf("%d\n", a[i]);
            }
        }
        else if(n == 4)
        {
            exit(0);
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
}
