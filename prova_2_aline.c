#include <stdio.h>
#include <string.h>
int qnt_digitos(int numero){
int copia = numero;
int contador = 0;
while (copia > 0){
    copia = copia / 10;
    contador++;
}
return contador;
}
int retorna_dois_primeiros(int numero){
int pot_de_dez = pow(10,qnt_digitos(numero) - 2);
int dois_prim = numero/pot_de_dez;
return dois_prim;
}
int retorna_dois_ultimos(int numero){
int dois_ultimos = numero % 100;
return dois_ultimos;
}

int main(){
int num;
printf("Digite um numero: ");
scanf("%d", &num);
int dois_primeiros = retorna_dois_primeiros(num);
int dois_ultimos = retorna_dois_ultimos(num);
printf("\nDOIS PRIMEIROS : %d", dois_primeiros);
printf("\nDOIS ULTIMOS : %d", dois_ultimos);
int num_prop = (dois_primeiros + dois_ultimos) * (dois_primeiros + dois_ultimos);
printf("\n%d\n", num_prop);
char dois_primeiros_s[30];
sprintf(dois_primeiros_s,"%d", dois_primeiros);
char dois_ultimos_s[30];
sprintf(dois_ultimos_s,"%d", dois_ultimos);
char resultado[60];
strcpy(resultado,dois_primeiros_s);
strcat(resultado,dois_ultimos_s);
int resultado_int = atoi(resultado);
if (num_prop == resultado_int){
    printf("TEM PROP");
}
else{
    printf("NAO TEM");
}
}
