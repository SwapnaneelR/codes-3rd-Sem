#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int x)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = x;
    return newNode;
}
void insert(Node **head, int x)
{
    if (*head == NULL)
    {
        *head = createNode(x);
        return;
    }
    Node *temp = *head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = createNode(x);
}

void printList(Node *head)
{
    Node *t = head;
    while (t)
    {
        printf("%d->", t->data);
        t = t->next;
    }
    printf("NULL\n");
}

Node *merge(Node *head1, Node *head2)
{
    Node *t1 = head1, *t2 = head2;
    Node *head = NULL;
    while (t1 && t2)
    {
        if (t1->data > t2->data)
        {
            insert(&head, t2->data);
            t2 = t2->next;
        }
        else
        {
            insert(&head, t1->data);
            t1 = t1->next;
        }
    }
    while (t1)
    {
        insert(&head, t1->data);
        t1 = t1->next;
    }
    while (t2)
    {
        insert(&head, t2->data);
        t2 = t2->next;
    }
    return head;
}
Node *findLastK(Node *head, int k)
{
    Node *slow = head, *fast = head;
    int i = 1;
    while (fast && i <= k)
    {
        fast = fast->next;
        i++;
    }
    slow = fast;
    while (fast)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
void movelastTofirst(Node **head)
{
    Node *secondlast = *head;
    while (secondlast->next->next)
    {
        secondlast = secondlast->next;
    }
    Node *last = secondlast->next;
    secondlast->next = NULL;
    last->next = *head;
    *head = last;
}
Node *middleofLL(Node *head)
{

    Node *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int isCyclePresent(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return 1;
    }
    return 0;
}

Node *findMiddle(Node *start, Node *end)
{
    Node *slow = start, *fast = start;
    while (fast != end && fast->next != end)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *binarySearch(Node *head, int target)
{
    Node *low = head;
    Node *high = NULL;
    while (low != high)
    {
        Node *mid = findMiddle(low, high);
        if (!mid)
            return NULL;
        if (mid->data == target)
        {
            return mid;
        }
        else if (target > mid->data)
            low = mid->next;
        else
            high = mid;
    }
    return NULL;
}
Node *MS(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *mid = middleofLL(head);
    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;

    left = MS(leaft);
    right = MS(right);
    return merge(left, right);
}
int main()
{
    printf("Enter number of Nodes of LL\n");
    int t;
    scanf("%d", &t);
    printf("Enter values of first Linked List\n");
    Node *head1 = NULL;
    while (t--)
    {
        int x;
        scanf("%d", &x);
        insert(&head1, x);
    }

    // printf("ENter the value of k \n");
    // int k;
    // scanf("%d",&k);
    // Node * ans = findLastK(head1,k);
    // printf("%d\n",ans->data);

    // 	printList(head1);
    // 	movelastTofirst(&head1);
    // 	printf("\nLast Swapping : \n");

    // int key;
    // printf("Enter Taget\n");
    // scanf("%d",&key);

    // printList(head1);
    // Node* ans = binarySearch(head1,key);
    // if(ans)
    // {
    //     printf("\nFound");
    // }
    // else{
    //     printf("No element as that");
    // }
    // Node* ans = middleofLL(head1);
    // printf("%d",ans->data);
    // printf("Enter the Position of LL to which last noode connect\n");
    // int k;
    // scanf("%d",&k);
    // int i = 1;
    // if(k!=-1){

    //     Node* last = head1;
    //     while(last->next)last = last->next;

    //     Node* temp = head1;
    //     while(i++<=k){
    //         temp = temp->next;
    //     }

    //     last->next = temp;
    // }

    // if(isCyclePresent(head1))
    // printf("Yes\n");
    // else
    // printf("No\n");

    //     printf("Enter values of 2nd Linked List . Press -1 to abort\n");
    //     Node* head2 = NULL;
    //   while(1){
    //         int x;
    //         scanf("%d",&x);
    //         if(x==-1)
    //         break;
    //         insert(&head2,x);

    //     }
    //     printList(head1);
    //         printList(head2);

    // Node * newHead = merge(head1,head2);
    // printList(newHead);
}