#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* leftChild;
    struct Node* rightChild;
    int height;
}Node;

int max(int a, int b)
{
    return (a>b)?a:b;
}

int height(Node* N) {
    if(N==NULL) {
        return 0;
    }
    return N->height;
}

Node* newNode (int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->leftChild = NULL;
    node->rightChild = NULL;
    node->height = 1;
    return (node);
}

Node* rightChild (Node* y) {
    Node* x = y->leftChild;
    Node* T2 = x->rightChild;
    x->rightChild = y;
    y->leftChild = T2;
    y->height = max(height(y->leftChild), height(y->rightChild) +1);
    x->height = max(height(x->leftChild), height(x->rightChild)+1);
    return x;
}

Node* leftRotate (Node* x) {
    Node* y = x->rightChild;
    Node* T2= y->leftChild;
    y->leftChild = x;
    x->rightChild = x;
    x->height = max(height(x->leftChild), height(x->rightChild) + 1);
    y->height = max(height(y->leftChild), height(y->rightChild) + 1);
    return y;
}

int getBalance (Node* N) {
    if(N==NULL){
        return 0;
    }
    return height(N->leftChild)-height(N->rightChild);
}

Node* insertNode( Node* node, int data) {
    if(node==NULL) {
        return (newNode(data));
    }
    if(data<node->data) {
        node->leftChild = insertNode(node->leftChild, data);
    }
    else if(data>node->data) {
        node->rightChild = insertNode(node->rightChild, data);
        
    }
    else return node;
    node->height = 1 + max(height(node->leftChild), height(node->rightChild));
    int balance = getBalance(node);
    if(balance>1 && data<node->leftChild->data) {
        return rightRotate(node);
    }
    else if(balance <-1 && data >node->rightChild->data) {
        return leftRotate(node);
    }
    else if (balance>1&&data>node->leftChild->data) {
        node->leftChild=leftRotate(node->leftChild);
    
    return rightRotate(node);
    }
    else if(balance<-1&&data<node->rightChild->data) {
        node->rightChild = rightRotate(node->rightChild);
        return leftRotate(node);
    }
    return node;

    }

    Node* minValueNode (Node* node) {
        Node* current = node;
        while(current->leftChild!=NULL){
            current = current->leftChild;
        }
        return current;
    }

    void printTree(Node* root) {
        if(root==NULL)
        return;
        if(root!=NULL){
            printTree(root->leftChild);
            printf("%d", root->data);
            printTree(root->rightChild);
        }
    }

    int main() {
        Node* root = NULL;
        root = isertNode(root,22);
        root = isertNode(root,34);
        root = isertNode(root,40);
        root = isertNode(root,98);
        root = isertNode(root,1);
        root = isertNode(root,45);
        root = isertNode(root,56);
        root = isertNode(root,78);
        root = isertNode(root,34);
        root = isertNode(root,86);
        root = isertNode(root,11);
        root = isertNode(root,10);
        root = isertNode(root,8);
        root = isertNode(root,88);
        printf("AVL tree: ");
        printTree(root);
        return 0;
    }







