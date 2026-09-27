#include <stdio.h>
int main()
{
int N;
int i;
scanf("%d",&N);
for( i=1 ; i<13;i++){
int mul = N*i;
printf("%d * %d = %d\n",N,i, mul);
}
 
 
}