#include "book.h"
#include "nodes.c"
#include "hec_and_dec.c"
#include "enter.c"
#include "print_table.c"

int main()
{
    Node *head;

    enter(&head);
    print_table(&head); //выводим и одновременно преобразуем
    free_list(head);
    return 0;
}
