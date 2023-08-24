#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 100
char stack[max];
int top = -1;
void push(char value)
{
  stack[++top] = value;
}
void pop()
{
  return stack[--top];
}
