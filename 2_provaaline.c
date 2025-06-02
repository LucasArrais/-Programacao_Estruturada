#include <stdio.h>
#include <string.h>
int qnt_digitos(int n){
int k = n;
int cont = 0;
while (k != 0){
k = k/10;
cont++;}
return cont;}
int pot(int x,int y){
if (y == 0){
    return 1;}
else{
    return x * pot(x,y-1);}}
int pegar_dois_primeiros(int num){
int primeiros;
int digitos = qnt_digitos(num);
int pot_de_10 = pot(10,digitos - 2);
primeiros = num/pot_de_10;
return primeiros;}
int pegar_dois_ultimos(int j){
int ultimos = j % 100;
return ultimos;}
int main(){
int num;
printf("Digite um numero: ");
scanf("%d", &num);
int dois_primeiros = pegar_dois_primeiros;
int dois_ultimos = pegar_dois_ultimos;
int soma_quadrado = pot(dois_primeiros + dois_primeiros,2);
char dois_primeiros_s[20];
char dois_ultimos_s[20];
char concatenated[40];
sprintf(dois_primeiros_s, "%d", dois_primeiros);
sprintf(dois_ultimos_s, "%d", dois_ultimos);
strcpy(concatenated, dois_primeiros_s);
strcat(concatenated, dois_ultimos_s);
int concatenated_num = atoi(concatenated);
if(soma_quadrado == concatenated_num){
    printf("SIM");}
else{
    printf("NAO");}}
