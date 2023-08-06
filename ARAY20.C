#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,r,c,column_sum=0,a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 clrscr();
 printf("ENTER YOUR ROW &COLUMN SIZE==>");
 scanf("%d%d",&r,&c);
 for (i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
    printf("%d",a[i][j]);
   }
   printf("\n");
 }
 printf("\n Column_sum\n");
 for(j=0;j<r;j++)
 {
   for(i=0;i<c;i++)
   {
   column_sum=column_sum+a[i][j];
   }
   printf("column %d: %d\n",j+1,column_sum);
 }
 getch();
}