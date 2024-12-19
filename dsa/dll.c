#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

Node *createNode(int x)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->next = newNode->prev = NULL;
    newNode->data = x;
    return newNode;
}

Node *insert(Node *head, int x)
{

    Node *newNode = createNode(x);
    if (head == NULL)
    {
        newNode->next = newNode->prev = newNode;
        return newNode;
    }

    Node *temp = head->prev;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = head;
    head->prev = newNode;
    return head;
}

void display(Node *head)
{
    Node *t = head;
    while (1)
    {
        printf("%d->", t->data);
        t = t->next;
        if (t == head)
            break;
    }
    printf("NULL\n");
}

int main()
{
    Node *head = NULL;
    while (1)
    {
        printf("1. Enter to the LL \n2.Display LL\n-1. Exit\n");
        int ch;

        scanf("%d", &ch);
        if (ch == 1)
        {

            printf("Enter the element : ");
            int k;
            scanf("%d", &k);
            head = insert(head, k);
            printf("Succesfully entered\n");
        }
        else if (ch == 2)
        {
            display(head);
        }
        else
            break;
    }
    return 0;
}
