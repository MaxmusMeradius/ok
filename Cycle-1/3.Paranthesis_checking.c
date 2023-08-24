#include <stdio.h>
#include <string.h>
char s[100];
int top = -1;
void push(char x)
{
  s[top++] = x;
}
void pop()
{
  top--;
}
int main()
{
  printf("Enter a string : ");
  scanf("%s", s);
  int n = strlen(s);
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '(')
    {
      push('(');
    }
    else if (s[i] == ')')
    {
      pop();
    }
  }
  if (top == -1)
  {
    printf("Parenthesis is Balanced");
  }
  else
  {
    printf("Parenthesis is not balanced");
  }
  return 0;
}