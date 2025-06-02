#include <stdio.h>
int pot(n,k){
if(k ==0) return 1;
else return n * (pot(n,k-1));
}
int main(){
printf("%d", pot(2,3));

}
