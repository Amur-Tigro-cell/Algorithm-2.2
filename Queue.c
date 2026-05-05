#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main()
{
    int a[MAX], front = -1, rear = -1, n, x, i;

    while(1)
    {
        printf("\nEnter 1 for insert\nEnter 2 for delete\nEnter 3 for display\nEnter 4 for exit\n");
        scanf("%d", &n);
        if(n == 1)
        {
            if((rear + 1) % MAX == front)
            {
                printf("Queue is overflow\n");
            }
            else
            {
                printf("Enter the value: ");
                scanf("%d", &x);

                if(front == -1)
                    front = 0;

                rear = (rear + 1) % MAX;
                a[rear] = x;

                printf("Data successfully inserted\n");
            }
        }
        else if(n == 2)
        {
            if(front == -1)
            {
                printf("Queue is underflow\n");
            }
            else
            {
                printf("Deleted element: %d\n", a[front]);

                if(front == rear)
                {
                    front = rear = -1;
                }
                else
                {
                    front = (front + 1) % MAX;
                }
            }
        }
        else if(n == 3)
        {
            if(front == -1)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue elements:\n");
                i = front;
                while(1)
                {
                    printf("%d\n", a[i]);
                    if(i == rear)
                        break;
                    i = (i + 1) % MAX;
                }
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
