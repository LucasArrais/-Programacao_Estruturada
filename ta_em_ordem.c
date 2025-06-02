#include <stdio.h>
int ta_em_ordem(int n){
if (n < 10){
    return 1;

}
else{
    if (((n/10)%10) > n % 10){
        return 0;
    }
    else{
    ta_em_ordem(n/10);
        }

}
}
int main(){
printf("%d", ta_em_ordem(14576));
return 0;
}
