#include <stdio.h>
stack1[100], stack2[100], x, ch;
int n, top, choice, i;
void push(value)
{
  if (top == -1)
  {
    printf("Stack is Empty\n");
  }
  else
  {
    stack1[++top] = value;
  }
}
void pop()
{
  if (top == -1)
  {
    printf("Stack is Empty\n");
  }
  else
  {
    ch = stack1[top];
    printf("Element popped = %c", ch);
    stack2[n - top] = ch;
    top--;
  }
}
void display()
{
  if (top >= 0)
  {
    for (int i = top; i >= 0; i--)
    {
      printf("%c ", stack1[i]);
    }
    printf("\n");
  }
  else
  {
    printf("Stack is Empty\n");
  }
}