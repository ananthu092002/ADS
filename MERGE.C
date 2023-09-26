#include<stdio.h>
#include<conio.h>
void merge(int[],int,int[],int,int[]);
void main()
{
int a[100],b[100],m,n,c,sort[200];
clrscr();
printf("enter no of elements in 1st array:\n");
scanf("%d",&m);
printf("enter sorted  elements:\n");
for(c=0;c<m;c++)
{
scanf("%d",&a[c]);
}
printf("enter no of elements in 2nd array:\n");
scanf("%d",&n);
printf("enter sorted elements:\n");
for(c=0;c<n;c++)
{
scanf("%d",&b[c]);
}
merge(a,m,b,n,sort);
printf("merged arrays are:\n");
for(c=0;c<m+n;c++)
{
printf("%d\t",sort[c]);
}
getch();
}
void merge(int a[],int m,int b[],int n,int sorted[])
{
int i,j,k;
j=k=0;
for(i=0;i<m+n;)
{
if(j<m && k<n)
{
if(a[j] < b[k])
{
sorted[i]=a[j];
j++;
}
else
{
sorted[i]=b[k];
k++;
}
i++;
}
else if(j==m)
{
for(;i<m+n;)
{
sorted[i]=b[k];
k++;
i++;
}
}
else
{
for(;i<m+n;)
{
sorted[i]=a[i];
j++;
i++;
}
}
}
}