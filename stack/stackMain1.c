#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void displayStack(Stack* pStack) {
    StackNode *pNode = NULL;
    int i = 1;
    
    if(pStack != NULL) {
        printf("The current number of Nodes : %d\n", 
                    pStack->currentElementCount);
        pNode = pStack->pTopElement;
        while(pNode != NULL) {
            printf("[%d] - [%c] pNodde->pLink[%p]\n",
                        pStack->currentElementCount - i,
                        pNode->data,
                        pNode->pLink);
            i++;
            pNode = pNode->pLink;
        }        
    }
}

int main(int argc, char* argv[]) {
    Stack *pStack = NULL;
    StackNode *pNode = NULL;

    pStack = createStack();
    if(pStack != NULL) {
        StackNode node1 = {'A'};
        StackNode node2 = {'B'};
        StackNode node3 = {'C'};
        StackNode node4 = {'D'};

        push(pStack, node1);
        push(pStack, node2);
        push(pStack, node3);
        push(pStack, node4);
        displayStack(pStack);
    }
    return 0;
}