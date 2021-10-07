#include <iostream>
#include <queue>

using namespace std;

int main() {
    system("cls");

    int num[5], i;

    queue <string> fila;
    fila.push("primeiro");
    fila.push("segundo");
    fila.push("terceiro");
    fila.push("quarto");
    fila.push("quinto");

    for(i=0;i<5;i++) {
        cout<<"Digite o "<<fila.front()<<" número: ";
        scanf("%d", &num[i]);
        fila.pop();
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
            printf("\nEsse número está no vetor na posição: %d.\n", quant);
        else 
            printf("\nEsse número não está no vetor.\n");
    }

    return 0;
}

    return 0;
}
