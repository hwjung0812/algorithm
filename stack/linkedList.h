#ifndef _LINKED_STACK_
#define _LINKED_STACK_

typedef struct {
     char data;
     struct StackNode* pLink;
} StackNode;

typedef struct {
    int currentElementCount;
    StackNode* pTopElement;
} Stack;

Stack* createStack();
int push(Stack* pStack, StackNode element);
StackNode* pop(Stack* pStack);
StackNode* peek(Stack* pStack);
void deleteStack(Stack* pStack);
int isStackFull(Stack* pStack);
int isStackEmpty(Stack* pStack);

#endif

#ifndef _COMMON_STACK_DEF_
#define _COMMON_STACK_DEF_

#define TRUE 1
#define FALSE 0

#endif