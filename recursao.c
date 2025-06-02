#include <stdio.h>
int pot(int num, int expo){
int potencia = num;
if (expo == 0){
    return 1;
}
else if(expo > 0){
    potencia = potencia * num;
    return pot(potencia,expo - 1);
}
}
int main(){
printf("%d", pot(4,3));
}
