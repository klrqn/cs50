#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
    int n;
    struct node* next;
}
node;

bool search(int n, node* list) 
{
    node* ptr = list;
    while (ptr != NULL)
    {
        if (ptr->n == n)
        {
            return true;
        }
        ptr = ptr->next;
        
    }
    return false;
}