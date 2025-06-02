#include <stdio.h>
int inverter(int n){
int n_inv = 0;
if(n == 0){
    return 0;
}
else{
    n_inv = n_inv * 10;
    n_inv = n_inv + n%10;
    return inverter(n/10);
}
}
int main(){
printf("%d", inverter(123));
return 0;
}
int
