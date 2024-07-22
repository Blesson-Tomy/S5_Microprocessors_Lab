#include <stdio.h>

int main()
{   int op;
    printf("Enter the Disk Scheduling to be performed: \n1. FCFS\n2. SJF\n 3.Priority\n 4.Round Robin\n");
    scanf("%d",&op);

    switch(op)
    {
        case 1:
            printf("****** FCFS Scheduling ******");
            break;

        case 2:
            printf("****** SJF Scheduling ******");
            break;

        case 3:
            printf("****** Priority Scheduling ******");
            break;

        case 4:
            printf("****** Round Robin Scheduling ******");
            break;

        default:
            printf("Invalid Operation - Exiting Program");
            break;
    }
}