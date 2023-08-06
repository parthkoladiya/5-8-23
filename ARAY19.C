#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,i,j,a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
clrscr();
printf("ENTER YOUR ROW & COLUMN SIZE==>");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
   for(j=0;j<c;j++)
   {
    scanf("%d",&a[i][j]);
   }
}
for(i=0;i>r;i++)
{
   for(j=0;j<c;j++)
   {
    if(a[i][j]%2==0)
    {
     printf("%d",a[i][j]);
    }
   }
}
getch();
}