        #include<stdio.h>
#include<conio.h>
void main()
{
int size,pos,i,a[5];
clrscr();
printf("ENTER YOUR ARRAY SIZE==>");
scanf("%d",&size);
for(i=0;i<size;i++)
{
  scanf("%d",&a[i]);
}
for(i=size-1;i<=pos;i++)
{
a[i-1]=a[i];
}

for(i=0;i<size-1;i++)
{
  printf("%d ",a[i]);
}
printf("\n");
getch();
}