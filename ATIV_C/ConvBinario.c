#include <stdio.h>
#include <string.h>
#include <math.h>


int to_bin(int decimal)
{
    int resto;
    int len = 1;
    int bin[32];

    printf("+---+-----------+-----+\n");
    printf("|\033[01;32m %1s \033[01;37m| %9i | ÷ 2 |\n", "#", decimal);    
    while(decimal > 1)
    {
        resto = decimal % 2;
        bin[len] = resto;
        decimal = decimal / 2;
        if(decimal < 2)
        {
            printf("|\033[01;32m %1i \033[01;37m|\033[01;32m %9i \033[01;37m|     |\n", resto, decimal);
            bin[len+1] = decimal;
        }else{
            printf("|\033[01;32m %1i \033[01;37m| %9i | ÷ 2 |\n", resto, decimal);
        }
        len++;
    }
    printf("+---+-----------+-----+\n");

    printf("Result: ");    
    for(int i = len; i >= 1; i--){
        printf("%i", bin[i]);
    }
    printf("₂");

    return 0;
}


int to_oct(int decimal)
{
    int resto;
    int len = 1;
    int bin[32];

    printf("+---+-----------+-----+\n");
    printf("|\033[01;32m %1s \033[01;37m| %9i | ÷ 8 |\n", "#", decimal);

    while(decimal > 8)
    {
        resto = decimal % 8;
        bin[len] = resto;
        decimal = decimal / 8;
        if(decimal < 8)
        {
            printf("|\033[01;32m %1i \033[01;37m|\033[01;32m %9i \033[01;37m|     |\n", resto, decimal);
            bin[len+1] = decimal;
        }else{
            printf("|\033[01;32m %1i \033[01;37m| %9i | ÷ 8 |\n", resto, decimal);
        }
        len++;
    }
    printf("+---+-----------+-----+\n");    

    printf("Result: ");    
    for(int i = len; i >= 1; i--){
        printf("%i", bin[i]);
    }
    printf("₈");

    return 0;
}


int to_hex(int decimal)
{
    int resto;
    int len = 1;
    int bin[32];

    printf("+---+-----------+-----+\n");
    printf("|\033[01;32m %2s \033[01;37m| %9i | ÷ 16 |\n", "#", decimal);

    while(decimal > 16)
    {
        resto = decimal % 16;
        bin[len] = resto;
        decimal = decimal / 16;
        if(decimal < 16)
        {
            printf("|\033[01;32m %2x \033[01;37m|\033[01;32m %9i \033[01;37m|     |\n", resto, decimal);
            bin[len+1] = decimal;
        }else{
            printf("|\033[01;32m %2x \033[01;37m| %9x | ÷ 16 |\n", resto, decimal);
        }
        len++;
    }
    printf("+---+-----------+-----+\n");    

    printf("Result: ");    
    for(int i = len; i >= 1; i--){
        printf("%x", bin[i]);
    }
    printf("₁₆");

    return 0;
}

int init()
{
    int decimal;
    char tipo;
    printf("\n\033[01;32mConversão de Decimal\033[01;37m");
    printf("\n\nNúmero decimal: ");
    scanf("%i", &decimal);
    printf("Qual resultado em (B)inário, (O)ctal, (H)ex, (T)odos? ");
    scanf(" %c", &tipo);
    
    if (tipo == 'b' || tipo == 'B') {
        to_bin(decimal);
    } else if (tipo == 'o' || tipo == 'O') {
        to_oct(decimal);
    } else if (tipo == 'h' || tipo == 'H') {
        to_hex(decimal);
    } else if (tipo == 't' || tipo == 'T') {
        to_bin(decimal);
        printf("\n\n");
        to_oct(decimal);
        printf("\n\n");
        to_hex(decimal);
    } else {
       printf("\nOps, opção inválida!");
    }
    
    printf("\n\n");
    return 0;
}


int main()
{
    init();
    
    char pergunta;
    printf("Deseja converter outro numero? (S)im ou (n)ão: ");
    scanf(" %c", &pergunta);
    while (pergunta == 'S' || pergunta == 's') {
        init();
        printf("Deseja converter outro numero? (S)im ou (n)ão: ");
        scanf(" %c", &pergunta);
    }

    return 0;
}
