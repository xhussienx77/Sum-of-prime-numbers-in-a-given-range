#include <stdio.h>
int main(){
int x,y,i,sum,isprime;
i=2;
sum=0;
printf("Enter x:");
scanf("%d",&x);
printf("Enter y:");
scanf("%d",&y);
while(x<y){
isprime=0;    
while(i!=x-1){
if(x%i==0){
    isprime=1;
    break;
}
else{i++;}
}
if(isprime==0){
    sum+=x;
}
x++;
i=2;    
}
printf("Total of prime numbers= %d ",sum);
}