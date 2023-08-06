#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,r,c,row_sum=0,a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
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
 printf("\n Row sum\n");
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
   row_sum=row_sum+a[i][j];
   }
   printf("Row %d: %d\n",i+1,row_sum);
 }
 getch();
}