#define TEXTBAR "+--------------------+---------------------+"

void print_table(Node **head)
{
    Node *temp;
    int i;
    char byte[3];
    cb mybyte;

    if (strcmp((*head)->adress, "")==0) printf("You haven't entered anything\nShame on you\n");
    else
    {
        temp = (*head);
        printf("|%19s |%20s |\n", "Entered adress", "Modified adress");
        puts(TEXTBAR);
        while (temp)
        {
            printf("|%19s ", temp->adress);
            //-------------Модификация------------
            for (i=0; i<2; i++) byte[i]=temp->adress[i];
            byte[2]='\0';
            mybyte.ss = hec_to_dec(byte);
            mybyte.b.s1 ^= (0x1);
            itoa(mybyte.ss, byte, 16);
            if (hec_to_dec(byte)<16) //если byte состоит из 1 символа
            {
                byte[1]=byte[0];
                byte[0]='0';
            }
            for (i=0; i<2; i++) temp->adress[i]=byte[i];
            //------------------------------------
            printf("|%20s |\n", temp->adress);

            temp=temp->next;
        }
        puts(TEXTBAR);
    }
}
