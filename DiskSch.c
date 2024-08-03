#include <stdio.h>

int main()
{   int op;
    do{
    printf("Select the Disk Schduling Algorithm that you would like to perform:\n1.SCAN\n2.C-SCAN\n3.FCFS\nYour Choice: ");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            //SCAN Algorithm
            break;
        case 2:
            //C-SCAN Algorithm
            break;
        case 3:
            //FCFS Algorithm
            break;
        case 4:
            break;
        default:
            printf("Invalid Input - Exiting Operation");
            op=0;
            break;
    }
    }while(op>0);
}