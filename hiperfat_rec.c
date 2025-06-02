#include <stdio.h>
int pot(int n,int y){
if (y == 0) return 1;
else return n * pot(n,y-1);
}
int hiperfat(k){
if (k == 0) return 1;
else return pot(k,k) * hiperfat(k-1);
}
int main(){
printf("%d", hiperfat(3));

}
