#include <stdio.h>
int main(){
int questoes;
printf("Digite a quantidade de questoes: ");
scanf("%d", &questoes);
char gabarito[questoes];
int numero_alunos;
int k;
int c;
int pos_acertos = 0;
int cont = 0;
printf("Digite a quantidade de alunos: ");
scanf("%d", &numero_alunos);
char respostas_alunos[numero_alunos][questoes];
int acertos[numero_alunos];
for (k = 0; k < questoes; k++){
    printf("Digite o gabarito da questao %d: ", k+1);
    scanf(" %c", &gabarito[k]);
}
for(k = 0; k < numero_alunos; k++){
    for (c = 0; c < questoes; c++){
    printf("Digite a resposta %d do aluno %d: ", c+1,k+1);
    scanf(" %c", &respostas_alunos[k][c]);
    }
}
for(k = 0; k < numero_alunos; k ++){
    cont = 0;
    for(c = 0; c < questoes; c ++){
        if (gabarito[c] == respostas_alunos[k][c]){
            cont++;
        }
    }
    acertos[k] = cont;
}
for(k = 0; k < numero_alunos; k++){
    printf("\nAluno %d : %d", k+1, acertos[k]);
}

}
