#include <stdio.h>
float cat(float n){
if(n ==0){
    return 1;
}
else{
    return (2*(2*n - 1)/(n+1))* cat(n - 1);
}
}
int main(){
printf("%.2f", cat(4));
}


