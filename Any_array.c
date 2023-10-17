#include<stdio.h>
void main()
{

int n,a;
printf("Enter rows");
scanf("%d",&n);
int m;
printf("Enter columns");
scanf("%d",&m);
a=1;
for(int I=1;I<=n;I++){
for(int j=1;j<=m;j++){

printf("%d ",a);
a++;
}
printf("\n");
}




}
