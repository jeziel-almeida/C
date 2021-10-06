#include <iostream>

using namespace std;

int main() {
    
    system("cls");

    const int qtd = 3; //Quantidade de alunos
    float Matematica[qtd], Portugues[qtd]; //Quantidade de provas
    int i;

    //Entrada de dados de cada prova:
    printf("|--- Prova de Matematica ---|\n");
    for(i=0; i<qtd; i++) {
        printf("| Digite a nota do aluno %d: ", i+1);
        scanf("%f", &Matematica[i]);
    }

    printf("\n|--- Prova de Portugues ---|\n");
    for(i=0; i<qtd; i++) {
        printf("| Digite a nota do aluno %d: ", i+1);
        scanf("%f", &Portugues[i]);
    }

    //Média de cada prova:
    printf("\n|--- Media de cada prova ---|\n");
    
    float somaMat = 0;
    float mediaMat;
    
    for(i=0; i<qtd; i++) {
        somaMat += Matematica[i];
    }
    
    mediaMat = somaMat/qtd;
    printf("| A media da prova de Matematica: %.2f.\n", mediaMat);

    float somaPort = 0;
    float mediaPort;

    for(i=0; i<qtd; i++) {
        somaPort += Portugues[i];
    }

    mediaPort = somaPort/qtd;
    printf("| A media da prova de Portugues: %.2f.\n", mediaPort);

    //A média de cada aluno
    printf("\n| --- Media de cada aluno --- |\n");

    float mediaAluno = 0;

    for(i=0; i<qtd; i++) {
        printf("| Media do aluno %d nas provas: ", i+1);
        mediaAluno = (Matematica[i] + Portugues[i])/2;
        printf("%.2f.\n", mediaAluno);
    }

    //A média da turma
    printf("\n|--- Media da turma ---|\n");

    float mediaTurma = (mediaMat + mediaPort)/2;

    printf("| Media da turma: %.2f.", mediaTurma);
}
