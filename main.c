#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
    int idade;
    do{
        printf("Digite a idade do nadador: ");
        scanf("%i", &idade);
        while(idade < 0){
            printf("Idade inválida, digite novamente: ");
            scanf("%i", &idade);
        }
        if(idade != 0){
            switch(idade){
            case 1:
            case 2:
            case 3:
            case 4:
                printf("Idade insuficiente\n");
                break;
            case 5:
            case 6:
            case 7:
                printf("Infantil A\n");
                break;
            case 8:
            case 9:
            case 10:
                printf("Infantil B\n");
                break;
            case 11:
            case 12:
            case 13:
                printf("Juvenil A\n");
                break;
            case 14:
            case 15:
            case 16:
            case 17:
                printf("Juvenil B\n");
                break;
            default:
                printf("Sênior\n");
            }
        }
    }while(idade != 0);
}