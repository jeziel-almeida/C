#include <iostream>

using namespace std;

int main() {
    system("cls");

    int num[5], i;

    for(i=0;i<5;i++) {
        printf("Digite o %d número: ", i+1);
        scanf("%d", &num[i]);
    }

    printf("\nNúmeros armazenados com sucesso!\n");
    
    for(i=0;i<2;i++) {
        int verificar;
        printf("\nDigite um número para verificar se ele está no vetor: ");
        scanf("%d",&verificar);
        
        int quant=0, encontrado=0;

        while(quant<5 && encontrado==0) {
            if(verificar==num[quant]) {
                encontrado=1;
            } else {
                quant++;
            }
        }
        if(encontrado==1)
            printf("\nEsse numero está no vetor na posição: %d.\n", quant);
        else 
            printf("\nEsse número não está no vetor.\n\n");
    }

    return 0;
}
