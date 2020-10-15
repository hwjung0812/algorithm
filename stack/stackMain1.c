#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void displayStack(Stack* pStack) {
    StackNode *pNode = NULL;
    int i = 1;
    if(pStack != NULL) {
        printf("현재 노드 개수 : %d\n", 
                    pStack->currentElementCount);
        pNode = pStack->pTopElement;
        while(pNode != NULL) {
            printf("[%d] - [%c] \n",
                        pStack->currentElementCount - i,
                        pNode->data);
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
        StackNode node1 = {'A', };
        StackNode node2 = {'B', };
        StackNode node3 = {'C', };
        StackNode node4 = {'D', };

        Wpush(pStack, node1);
        push(pStack, node2);
        push(pStack, node3);
        push(pStack, node4);
        displayStack(pStack);
    }
    return 0;
}