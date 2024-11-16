#include <stdio.h>

//funçoes
int genero();
float peso();
int altura();
int idade();

int main(){
float tmb, p, gen;
int i, a;

    printf("****************************\n\n");
    printf("Calculadora TMB Bodybuilding by VVolfie \n\n");
    printf("****************************\n\n");

    gen = genero();

    printf("\n****************************\n\n");

    i = idade();

    printf("\n****************************\n\n");

    p = peso();

    printf("\n****************************\n\n");

    a = altura();

    printf("\n****************************\n\n");

    if(gen==1){
        tmb = 66+(13.7*p)+(5*a)-(6.8*i);
        printf("A sua TMB %.1f calorias\n",tmb);}
        else
            tmb = 665 + (9.6*p) + (1.8*a) - (4.7*i);
        printf("A sua TMB %.1f calorias\n",tmb);
//Para homens: TMB = 66 + (13,7 x peso em kg) + (5 x altura em cm) - (6,8 x idade em anos)
//Para mulheres: TMB = 655 + (9,6 x peso em kg) + (1,8 x altura em cm) - (4,7 x idade em anos)

    printf("\n****************************\n\n");

    return 0;
}

int genero(){
    int genero1;
    do{
    printf("Genero?\n\n");
    printf("1 - Masculino\n\n");
    printf("2 - Feminino\n\n");
    scanf("%d", &genero1);
    if(genero1 <1 || genero1 >2){
    printf("\nGenero invalido!\n");
    printf("\n****************************\n\n");}
    }while(genero1 < 1 || genero1 > 2);

    if(genero1==1){
        return 1;}
        else
            return 2;
}

float peso(){
    float peso;
    printf("Peso em KG?\n\n");
    printf("Peso: ");
    scanf("%f", &peso);
    return peso;
}

int altura(){
    int altura;
    do{
    printf("Altura em CM?\n\n");
    printf("Altura: ");
    scanf("%d", &altura);
    }while (altura < 120 || altura > 230);
    return altura;
}

int idade(){
    int idade;
    do{
    printf("Idade: ");
    scanf("%d",&idade);
    if(idade < 1){
    printf("\nIdade invalida.\n");}
    }while(idade < 1);
    return idade;

}
