#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 80

Node *create_node(char *adress)
{
    Node *temp=NULL;
    char *word=NULL;
    int i;

    temp=malloc(sizeof(Node));
    word=(char*)malloc(MAXLEN*sizeof(char));
    if(temp&&word)
    {
        strcpy(word,adress);
        temp->adress = word;

        temp->next=NULL;
    }
    return temp;
}

void free_list(Node *head) {
    int i;
    Node *tmp = head;
    Node *next = NULL;
    while (tmp){
        next = tmp->next;
        free(tmp);
        tmp = NULL;
        tmp = next;
    }
    free(head);
    head = NULL;
}
