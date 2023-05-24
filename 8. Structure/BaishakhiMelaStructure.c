#include <stdio.h>

struct BAISHAKHI_MELA{
    char Event_Name[20];
    int Event_ID;
    int no_of_participants;
    int Ticket_Sold;
}event[10];

int main()
{
    FILE *fp;
    int i,max=0,maxIndex;
    for(i=0;i<10;i++)
    {
        //This section takes inputs
        printf("Enter Info of event %d:\n",i+1);
        gets(event[i].Event_Name);
        scanf("%d",&event[i].Event_ID);
        scanf("%d",&event[i].no_of_participants);
        scanf("%d",&event[i].Ticket_Sold);
        printf("\n");
        fflush(stdin);
    }
    for(i=0;i<10;i++)
    {
        if(max<event[i].Ticket_Sold){
            max=event[i].Ticket_Sold;
            maxIndex=i;
        }
    }

    fp=fopen("Winner.txt","w");
    fputs(event[maxIndex].Event_Name,fp);
    fprintf(fp, "\n ID: %d", event[maxIndex].Event_ID);
    fprintf(fp, "\n: No of Participants: %d", event[maxIndex].no_of_participants);
    fprintf(fp, "\nTicket SOld: %d", event[maxIndex].Ticket_Sold);
    fclose(fp);

    return 0;
}
