#define MAXLEN 80

void enter(Node **head)
{
    char adress[MAXLEN];
    int slen, i;
    Node *temp, *p;

    printf("Enter an empty string to finish input (without spaces)\n");
    fgets(adress, MAXLEN, stdin);
    slen=strlen(adress);
    adress[slen-1]='\0';
    (*head) = create_node(adress);
    temp=(*head); //head initialization

    while(strcmp(adress,""))
    {
        fgets(adress, MAXLEN, stdin);
        slen=strlen(adress);
        adress[slen-1]='\0';

        if (strcmp(adress,""))//чтобы Enter не попал в список
        {
            p = create_node(adress);
            temp -> next = p;
            temp = p;
        }
    }
}
