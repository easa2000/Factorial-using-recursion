// Factorial

#include<stdio.h>
int Fact(int);
void main(){
    int num,factorial;
    printf("\n Enter the number: ");
    scanf("%d",&num);
    factorial = Fact(num);
    printf("\n Factorial of %d = %d ",num,factorial);
}
int Fact(int n){
    if(n==1)
      return 1;
    else
      return (n * Fact(n-1));
}
