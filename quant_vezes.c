#include <stdio.h>
int qnt_vezes(int n, int k){
int static cont = 0;
if(n == 0){
    return 0;
}
else{
    if (n%10 == k){
        cont++;
    }
    qnt_vezes(n/10,k);
}
return cont;
}
int main(){
printf("%d", qnt_vezes(6543235,3));
}
