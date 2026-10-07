#include <stdio.h>
#include <stdlib.h>
#define buffer_size 40
typedef struct  Node{
    char data;
    struct Node* link;

}Node;

Node* head = NULL;

char push(int x)
{
    if(head==NULL){
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = x;
        head = newNode;
        newNode->link = NULL;
        return;
    }
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->link = head;
    head = newNode;


}

char pop(){
    if(head==NULL){
        printf("Underflow\n");
        exit(EXIT_SUCCESS);
    }
    Node* tmp = head;
    head = head->link;
    return tmp->data;
    free(tmp);
}

int main()
 {
    char expression[buffer_size], tmp;
    printf("Enter an expression: ");
    scanf("%s",expression);
    int i=0;
    while(expression[i]!='\0')
    {
        if(expression[i]=='('||expression[i]=='{' || expression[i]=='[')
        {
            push(expression[i]);
        }
        else if(expression[i]==')'||expression[i]=='}'||expression[i]=']')
        {
            tmp = pop();
           switch(tmp)
           {
            case '(':
            
           }
        }
    }

 }