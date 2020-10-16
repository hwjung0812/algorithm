#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

Stack* createStack() {
    Stack* pStack = NULL;
    pStack = (Stack *)malloc(sizeof(Stack));
    if(pStack != NULL) {
        memset(pStack, 0, sizeof(Stack));
    }
    else {
        printf("오류, 메모리 할당, createStack()\n");
        return NULL;
    }
return pStack;
}

int push(Stack* pStack, StackNode element) {
    int ret = FALSE;
    StackNode *pNode = NULL;
    // printf("pNode->pLink : [%p]\n", pNode->pLink);

    if(pStack !=NULL ) {
        pNode = (StackNode *)malloc(sizeof(StackNode));
        if(pNode != NULL) {
            memset(pNode, 0, sizeof(StackNode));
            *pNode = element;
            pNode->pLink = pStack->pTopElement;
            pStack->pTopElement = pNode;
            pStack->currentElementCount++;
            ret = TRUE;
        }
        else {
            printf("오류, 메모리 할당, push()\n");
        }
    }
    return ret;
}

StackNode* pop(Stack* pStack) {
    StackNode *pNode = NULL;
    if(pStack != NULL) {
        if(isStackEmpty(pStack) == FALSE) {
            pNode = pStack->pTopElement;
            pStack->pTopElement = pNode->pLink;
            pNode->pLink = NULL;
            pStack->currentElementCount--;
        }
    }
    return pNode;
}

StackNode* peek(Stack* pStack);
void deleteStack(Stack* pStack);
int isStackFull(Stack* pStack);

int isStackEmpty(Stack* pStack) {
    int ret = FALSE;
    if(pStack != NULL) {
        if(pStack->currentElementCount == 0) {
            ret = TRUE;
        }
    }
    return ret;
}