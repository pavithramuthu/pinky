#include<stdio.h>
void swap(int*,int*);
{
void main()
{
int num1,num2;
int x,y;
printf("enter the numbers");
scanf("%d%d",&num1,&num2);
printf("the numbers before swapping are num1=%d and num2=%d",num1,num2);
swap(&num1,&num2);
printf("the numbers after swapping are num1=%d and num2=%d",num1,num2);
}
void swap(int*x,int*y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
}
getch();
}


