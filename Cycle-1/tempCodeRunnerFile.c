#include <stdio.h>
#include <ctype.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int value)
{
  if (top == MAX - 1)
  {
    printf("Stack Overflow\n");
  }
  else
  {
    stack[++top] = value;
  }
}
void pop()
{
  if (top == -1)
  {
    printf("Stack Underflow\n");
  }
  else
  {
    printf("Popped element %d\n", stack[top--]);
  }
}
void peek()
{
  if (top == -1)
  {
    printf("Stack is Empty\n");
  }
  else
  {
    printf("Peek Element : %d\n", stack[top]);
  }
}
void display()
{
  if (top == -1)
  {
    printf("Stack is Empty\n");
  }
  else
  {
    for (int i = top; i >= 0; i--)
    {
      printf("%d ", stack[i]);
    }
    printf("\n");
  }
}

int main()
{
  top = -1;
  int choice, value;
  printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
  do
  {
    printf("Enter a Choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
      printf("Enter Value to be  Pushed : ");
      scanf("%d", &value);
      push(value);
      break;
    }
    case 2:
    {
      pop();
      break;
    }
    case 3:
    {
      peek();
      break;
    }
    case 4:
    {
      display();
      break;
    }
    case 5:
    {
      printf("Exit");
      break;
    }
    }
  } while (choice != 5);
  return 0;
}