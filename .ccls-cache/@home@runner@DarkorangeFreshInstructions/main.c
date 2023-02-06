#include <stdio.h>
int main()
{
  int a,b,c,op;
  //clrscr();
  printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
  printf("Enter values of a & b:");
  scanf("%d%d", &a,&b);
  printf("Enter your choice:");

  scanf("%d",&op);
  switch(op)
    {
      case 1:
      c=a+b;
      printf("Sum of %d and %d is %d:",a,b,c);
      break;

      case 2:
      c=a-b;
      printf("Difference of %d and %d is %d:",a,b,c);
      break;

      case 3:
      c=a*b;
      printf("Multiplication of %d and %d is %d:",a,b,c);
      break;

      case 4:
      c=a/b;
      printf("Division of Two numbers is %d:",c);
      break;
      default:
      printf("No option provided");
      return 0;
    }
}