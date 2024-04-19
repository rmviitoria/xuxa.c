/******************************************************************************

Muitos fãs da Xuxa pedem para que ela cante a música "5 Patinhos" com um número maior de patos. 
Obviamente, Xuxa não quer escrever uma letra para cada fã, e pediu para que você escrevesse um programa que faça isso por ela. 
Assim sendo, crie um programa que recebe uma quantidade de patinhos e armazena em P. 
Seu programa deve imprimir na tela a música "P Patinhos" (trocando P pela quantidade de patos)
da Xuxa com a quantidade de patinhos informada pelo usuário via teclado.
Atenção: você deve garantir que o número de patinhos informado pelo usuário é maior ou igual a 2.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int x;
    
    do{
        printf("Digite o número de patinhos: ");
        scanf("%d", &x);
    }while(x<2);
    
    for(int i=x; i>1; i--){
        printf("%d patinhos\n", i);
        printf("Foram passear\n");
        printf("Além das montanhas\n");
        printf("Para brincar\n");
        printf("A mamãe gritou\n");
        printf("Quack quack quack\n");
        if(i-1 == 1){
            printf("Mas só %d patinho\n", i-1);
            printf("Voltou de lá\n\n");
        }else{
            printf("Mas só %d patinhos\n", i-1);
            printf("Voltaram de lá\n\n");
        }
    }
    printf("1 patinho foi passear\n");
    printf("Além das montanhas\n");
    printf("Para brincar\n");
    printf("A mamãe gritou\n");
    printf("Quack quack quack\n");
    printf("Mas nenhum patinho\n");
    printf("Voltou de lá\n\n");


    printf("A mamãe patinha\n");
    printf("Foi procurar\n");
    printf("Além das montanhas\n");
    printf("Na beira do mar\n");
    printf("A mamãe gritou\n");
    printf("Quack quack quack\n");
    printf("E os %d patinhos\n", x);
    printf("Voltaram de lá\n");


    return 0;
}

