#include <stdio.h>

int main()
{   int op;
    printf("Enter the Disk Scheduling to be performed: \n1. FCFS\n2. SJF\n3. Priority\n4. Round Robin\n");
    scanf("%d",&op);

    switch(op)
    {   int pno;
        case 1:
            printf("****** FCFS Scheduling ******\n");
            printf("Enter the number of processes:");
            scanf("%d",&pno);

            break;

        case 2:
            printf("****** SJF Scheduling ******\n");
            break;

        case 3:
            printf("****** Priority Scheduling ******\n");
            break;

        case 4:
            printf("****** Round Robin Scheduling ******\n");

            int i, limit, total = 0, x, counter = 0, tq; 
            int wt = 0, tt = 0,  bt[10], temp[10]; 
            float average_wt, average_tt;
            printf("\nEnter Total Number of Processes:\n"); 
            scanf("%d", &limit); 
            x = limit; 
            for(i = 0; i < limit; i++) 
            {
                printf("\nEnter Details of Process[%d]\n", i + 1);
                printf("Burst Time:\t");
                scanf("%d", &bt[i]); 
                temp[i] = bt[i];
            } 
            printf("\nEnter Time Quantum:\t"); 
            scanf("%d", &tq); 
            printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
            for(total = 0, i = 0; x != 0;) 
            { 
                    if(temp[i] <= tq && temp[i] > 0) 
                    { 
                            total = total + temp[i]; 
                            temp[i] = 0; 
                            counter = 1; 
                    } 
                    else if(temp[i] > 0) 
                    { 
                        temp[i] = temp[i] - tq; 
                        total = total + tq; 
                    } 
                    if(temp[i] == 0 && counter == 1) 
                    { 
                        x--; 
                    printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", i + 1, bt[i], total, 
                    total - bt[i]);
                    wt = wt + total - bt[i]; 
                    tt = tt + total ; 
                    counter = 0; 
                } 
                    if(i == limit - 1) 
                {
                        i = 0; 
                    }
                else 
                    {
                        i++;
                    }
            } 
            average_wt = wt * 1.0 / limit;
            average_tt = tt * 1.0 / limit;
            printf("\n\nAverage Waiting Time:\t%f", average_wt); 
            printf("\nAvg Turnaround Time:\t%f\n", average_tt);

            break;

        default:
            printf("Invalid Operation - Exiting Program");
            break;
    }
}