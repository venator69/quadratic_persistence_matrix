#include <stdio.h>

int nextelmt(int sum, int next){
    if (sum == 0){
        return (next);
    }
    else{
        next += (sum % 10)*(sum % 10);
        return (nextelmt(sum/10 , next));
    }
}
int quadratic(int sum, int iter){
    if (sum == 1 && iter < 999){
        return (iter);
    } 
    else if(iter == 999){
        return (0);
    }
    else{
        iter ++;
        return (quadratic(nextelmt(sum, 0),iter));
        }
    }
int main(){
    int sum,num1,num2;
    sum = num1*num1 + num2*num2;
    int arr[10][10] = {0};
    for (num1 = 1; num1<10;num1++){
        for (num2 = 1; num2 <10;num2++){
            sum = num1*num1 + num2*num2;
            if (quadratic(sum,1)!= 0){
                arr[num1][num2] = 1;
            }
        }
    }
    for (num1 = 1; num1<10;num1++){
        for (num2 = 1; num2 <10;num2++){
            printf("%d ", arr[num1][num2]);
        }printf("\n");
    }
    num1 = 9;
    num2 = 7;
    sum = num1*num1 + num2*num2;
    printf("%d",quadratic(sum,1));
    return 0;
}