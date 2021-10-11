#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//constante que define a quantidade de alunos
#define MAX_ALUNOS 10

//struct
typedef struct {
    char nome[50];
    float notas[4];
    int ativo;
} Aluno;

Aluno alunos[MAX_ALUNOS];

//Declaração das funções
void menu();
void cadastrar();
void remover();
void reprovados();
void aprovados();
void pesquisar();
void listar();

//Função principal
int main(int argc, char const *argv[])
{
    menu();
    printf("\n Programa finalizado\n");
    return 0;
}

void menu() {
    int op;
    do {
        system("cls");
        printf("\n     */ MENU /*\n");
        printf("\n 1 - Cadastrar aluno\n 2 - Remover aluno\n 3 - Alunos reprovados\n 4 - Pesquisar alunos\n 5 - Listar alunos\n 6 - Alunos aprovados\n 0 - Sair\n\n Digite: ");
        scanf("%d", &op);
        getchar();
        switch(op) {
            case 1:
                cadastrar();
            break;
            case 2:
                remover();
            break;
            case 3:
                reprovados();
            break;
            case 4:
                pesquisar();
            break;
            case 5:
                listar();
            break;
            case 6:
                aprovados();
            break;
        }
        if(op!=0)
            getchar();
    } while(op!=0);
}

void cadastrar() {

    char name[50];
    float notes[4];
    int op;
    do {
        system("cls");
        printf("\n Nome: ");
        fgets(name,sizeof(name),stdin);
        
        printf("\n 1 Bimestre: ");
        scanf("%f", &notes[0]);
        printf(" 2 Bimestre: ");
        scanf("%f", &notes[1]);
        printf(" 3 Bimestre: ");
        scanf("%f", &notes[2]);
        printf(" 4 Bimestre: ");
        scanf("%f", &notes[3]);

        for (int i = 0; i < MAX_ALUNOS; i++)
        {
            if (alunos[i].ativo==0)
            {
                alunos[i].notas[0] = notes[0];
                alunos[i].notas[1] = notes[1];
                alunos[i].notas[2] = notes[2];
                alunos[i].notas[3] = notes[3];
                strcpy(alunos[i].nome, name);
                alunos[i].ativo = 1;
                break;
            }
        }
        printf("\n 1 - Cadastrar novo aluno\n 0 - Menu\n\n Digite: ");
        scanf("%d", &op);
        if(op!=0)
            getchar();
    } while(op!=0);
}

void remover() {

    int matricula;

    listar();

    printf("\n Digite a matricula do aluno a ser removido: ");
    scanf("%d", &matricula);
    --matricula;
    alunos[matricula].ativo = 0;

    printf("\n O aluno foi removido!\n");
    getchar();
    
}

void reprovados() {

    system("cls");
    float media;
    printf("\n */ LISTA DE ALUNOS REPROVADOS /*");

    for(int i = 0; i<MAX_ALUNOS; i++) {

        if(alunos[i].ativo==1) {
            
            media = 0;
            media = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3];
            media = media/4;

            if(media<7.0) {
                printf("\n\n --------------\n");
                printf(" Matricula: %d\n", i+1);
                printf(" Nome: %s", alunos[i].nome);
                printf(" 1 Bim: %.2f\n", alunos[i].notas[0]);
                printf(" 2 Bim: %.2f\n", alunos[i].notas[1]);
                printf(" 3 Bim: %.2f\n", alunos[i].notas[2]);
                printf(" 4 Bim: %.2f\n", alunos[i].notas[3]);
            }
        }
    }
}

void pesquisar() {

    char name[50];
    int op;

    do {
        system("cls");
        printf("\n Digite o nome do aluno a ser pesquisado: ");
        fgets(name,sizeof(name),stdin);

        for(int i=0; i<MAX_ALUNOS; i++) {

            if(strstr(alunos[i].nome,name)!=NULL) {

            printf("\n\n ------------------\n");
            printf(" Matricula: %d\n", i+1);
            printf(" Nome: %s", alunos[i].nome);
            printf(" 1 Bim: %.2f\n", alunos[i].notas[0]);
            printf(" 2 Bim: %.2f\n", alunos[i].notas[1]);
            printf(" 3 Bim: %.2f\n", alunos[i].notas[2]);
            printf(" 4 Bim: %.2f\n", alunos[i].notas[3]);
            }
        }

        printf("\n 1 - Pesquisar novamente\n 0 - Menu\n\n Digite: ");
        scanf("%d", &op);
        getchar();

    } while(op!=0);
}

void listar() {
    system("cls");
    printf("\n */ LISTA DE ALUNOS /*");

    for(int i = 0; i<MAX_ALUNOS; i++) {

        if(alunos[i].ativo==1) {
            
            printf("\n\n -------------\n");

            printf(" Matricula: %d\n", i+1);
            printf(" Nome: %s", alunos[i].nome);
            printf(" 1 Bim: %.2f\n", alunos[i].notas[0]);
            printf(" 2 Bim: %.2f\n", alunos[i].notas[1]);
            printf(" 3 Bim: %.2f\n", alunos[i].notas[2]);
            printf(" 4 Bim: %.2f\n", alunos[i].notas[3]);
        }
    }
}

void aprovados() {

    system("cls");
    float media;
    printf("\n */ LISTA DE ALUNOS APROVADOS /*");

    for(int i = 0; i<MAX_ALUNOS; i++) {

        if(alunos[i].ativo==1) {
            
            media = 0;
            media = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3];
            media = media/4;

            if(media>7.0) {
                printf("\n\n --------------\n");
                printf(" Matricula: %d\n", i+1);
                printf(" Nome: %s", alunos[i].nome);
                printf(" 1 Bim: %.2f\n", alunos[i].notas[0]);
                printf(" 2 Bim: %.2f\n", alunos[i].notas[1]);
                printf(" 3 Bim: %.2f\n", alunos[i].notas[2]);
                printf(" 4 Bim: %.2f\n", alunos[i].notas[3]);
            }
        }
    }
}
