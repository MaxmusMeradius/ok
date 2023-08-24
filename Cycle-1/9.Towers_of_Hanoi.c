#include <stdio.h>
void towers(int n, char beg, char aux, char end)
{
  if (n == 1)
  {
    printf("%c -> %c", beg, end);
  }
  else
  {
    towers(n - 1, aux, beg, end);
    printf("%c -> %c", beg, end);
    towers(n - 1, aux, beg, end);
  }
}
int main()
{
  int num;
  printf("Enter the number of disk : ");
  scanf("%d", &num);
  towers(num, 'A', 'B', 'C');
  return 0;
}