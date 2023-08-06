#include<stdio.h>
#include<conio.h>
void main()
{
int r,j,c,i,a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
long int mul=1;
clrscr();
printf("ENTER YOUR ROW & COLUMN SIZE==>");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
  scanf("%d",a[i][j]);
  mul=mul*a[i][j];
  }
}
for(i=0;i<r;i++)
{
  for(j=0;j<r;j++)
  {
   printf("%d",a[i][j]);
  }
  printf("\n");
}
printf("YOUR ANSWER==>");
printf("%ld",mul);
getch();
}