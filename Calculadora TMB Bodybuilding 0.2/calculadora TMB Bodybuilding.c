#include <stdio.h>
#include <conio.h>

#define clrsrc() printf("\e[1;1H\e[2J")


//funçoes
int genero();
float peso();
int altura();
int idade();
int fase();

int main(){
float tmb, p, gen;
int i, a, f;

    printf("***************************************\n\n");
    printf("Calculadora TMB Bodybuilding by VVolfie \n\n");
    printf("***************************************\n\n");

    gen = genero();
    clrsrc();

    i = idade();
    clrsrc();

    p = peso();
    clrsrc();

    a = altura();
    clrsrc();

    if(gen==1){
        tmb = 66+(13.7*p)+(5*a)-(6.8*i);}
        else
            tmb = 665 + (9.6*p) + (1.8*a) - (4.7*i);

    clrsrc();

    printf("\n\n A sua TMB %.1f calorias\n",tmb);

    clrsrc();

    f = fase();

    clrsrc();
    switch(f){
    case 1:
        printf("\n\n *** FASE DE BULK *** \n\n");
        printf("\n\nA fase de bulk, e um periodo de treino focado em aumentar a massa muscular,\n\n");
        printf("\e ganhar forca, onde se consome um excedente calorico para apoiar o crescimento muscular.\n\n");
        printf("\n*************************************************************\n");
        printf("\nBulk ligeiro: %.0f cals.\n\n",tmb+250);
        printf("\nBulk moderado: %.0f cals.\n\n",tmb+500);
        printf("\nBulk pesado: %.0f cals.\n\n",tmb+750);
        printf("\n*************************************************************\n");
        break;

    case 2:
        printf("\n\n *** FASE DE CUT *** \n\n");
        printf("\n\nA fase de cut, e um periodo de treino focado em reduzir o percentual de massa gorda,\n\n");
        printf("\e preservar o maximo possivel a massa magra, onde se consome em defice calorico.\n\n");
        printf("\n*************************************************************\n");
        printf("\nCut ligeiro: %.0f cals.\n\n",tmb-250);
        printf("\nCut moderado: %.0f cals.\n\n",tmb-500);
        printf("\nCut pesado: %.0f cals.\n\n",tmb-750);
        printf("\n*************************************************************\n");
        break;

    case 3:
        printf("\n\n *** FASE DE MANUTENCAO *** \n\n");
        printf("\n\nA fase de manutencao, e um periodo em que se ajusta a ingestao calorica para manter o peso,\n\n");
        printf("\e a massa muscular atuais focando na consistencia e na recuperacao, sem qualquer outro objetivo.\n\n");
        printf("\n*************************************************************\n");
        printf("\nManutencao: %.0f cals.\n",tmb);
        printf("\n*************************************************************\n");
        break;

    case 4:
        printf("\n\n *** FASE DE BODY RECOMP *** \n\n");
        printf("\n\nO body recomp e uma fase no treino de musculacao focada em reduzir a gordura corporal enquanto se\n\n");
        printf("\nganha massa muscular simultaneamente, usando ciclagem de calorias.\n");
        printf("\n*************************************************************\n");
        printf("\nDia alto (dias de treino ou dias de treino mais intenso): %.0f cals.\n",tmb+200);
        printf("\nDia baixo (dias de descanso ou dias de treino menos intensos): %.0f cals.\n",tmb-300);
        printf("\n*************************************************************\n");
        break;

    default:
        printf("\n*************************************************************\n");
        printf("\nInsira uma fase valida.\n");
        printf("\n*************************************************************\n");
    }

//Para homens: TMB = 66 + (13,7 x peso em kg) + (5 x altura em cm) - (6,8 x idade em anos)
//Para mulheres: TMB = 655 + (9,6 x peso em kg) + (1,8 x altura em cm) - (4,7 x idade em anos)

    return 0;
}

int fase(){
    int fase;
    do{
    printf("Qual fase pretende seguir?\n\n");
    printf("1 - Bulk\n\n");
    printf("2 - Cut\n\n");
    printf("3 - Manutencao\n\n");
    printf("4 - Body Recomp\n\n");
    printf("Fase: ");
    scanf("%d", &fase);
    clrsrc();
    }while(fase<0 || fase>4);
    return fase;
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
