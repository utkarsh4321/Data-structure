#include<stdio.h>


// this shows that we can use all c code in c++
// C++ is the superset of c languages
int main(){
    int n,result;
    printf("Enter a no");
    scanf("%d",&n);
    result = n * n *n;
    printf("The cube of %d is %d",n,result);
}