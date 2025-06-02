#include <stdio.h>
int main(){
int t, i, pa ,pb,cont_anos;
float ga, gb;
scanf("%d", &t);
for(i = 0; i < t; i++){
    cont_anos = 0;
    scanf("%d %d %f %f", &pa, &pb, &ga, &gb);
    while(pa <= pb && cont_anos <=100){
        pa = pa * (1 + ga/100);
        pb = pb * (1 + gb/100);
        cont_anos++;
    }
    if (cont_anos > 100){
        printf("Mais de 1 seculo.\n");
    }
    else{
    printf("%d anos.\n", cont_anos);}
}
return 0;
    }
