#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void lineBreak(int lines);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int firstChoice = 0;
    int continueSelling = 1;
    int productChoice;
    int paymentChoice = 0;
    int paymentLoop = 1;
    float total = 0;

    float salgadinho = 6.50;
    float agua = 3.00;
    float cigarro = 8.00;
    float cerveja = 4.00;
    float chocolate = 5.00;
    float chiclete = 2.00;

    while (firstChoice == 0) {
        system("cls");
        printf("Bem-vindo ao caixa automático de Guilherme e Alan :D");
        lineBreak(2);
        printf("Digite 1 para iniciar venda.");
        lineBreak(1);
        printf("Digite 2 para sair.");
        lineBreak(1);

        scanf("%d", &firstChoice);

        if (firstChoice != 1 && firstChoice != 2) {
            printf("ENTRADA INVÁLIDA! Digite 1 ou 2");
            lineBreak(1);
            system("pause");
            firstChoice = 0;
        } else if (firstChoice == 1) {
            system("cls");
            printf("Venda iniciada!");
            lineBreak(1);
            system("pause");

            continueSelling = 1;
            total = 0;

            while (continueSelling == 1) {
                system("cls");
                printf("Menu de preços:");
                lineBreak(2);
                printf("1. Salgadinho: R$:%.2f", salgadinho);
                lineBreak(1);
                printf("2. Água: R$:%.2f", agua);
                lineBreak(1);
                printf("3. Cigarro: R$: %.2f", cigarro);
                lineBreak(1);
                printf("4. Cerveja: R$: %.2f", cerveja);
                lineBreak(1);
                printf("5. Chocolate R$: %.2f", chocolate);
                lineBreak(1);
                printf("6. Chiclete: %.2f", chiclete);
                lineBreak(2);
                printf("Total atual: R$:%.2f", total);
                lineBreak(2);

                printf("Digite o número do produto que deseja adicionar: ");
                lineBreak(2);
                scanf("%d", &productChoice);

                if (productChoice == 1) {
                    total += salgadinho;
                    printf("Salgadinho adicionado");
                    lineBreak(2);
                } else if (productChoice == 2) {
                    total += agua;
                    printf("Água adicionada");
                    lineBreak(2);
                } else if (productChoice == 3) {
                    total += cigarro;
                    printf("Cigarro adicionado");
                    lineBreak(2);
                } else if (productChoice == 4) {
                    total += cerveja;
                    printf("Cerveja adicionada");
                    lineBreak(2);
                } else if (productChoice == 5) {
                    total += chocolate;
                    printf("Chocolate adicionado");
                    lineBreak(2);
                } else if (productChoice == 6) {
                    total += chiclete;
                    printf("Chiclete adicionado");
                    lineBreak(2);
                } else {
                    printf("Produto inválido");
                    lineBreak(2);
                }

                printf("Digite 1 para continuar vendendo ou 2 para finalizar a venda: ");
                scanf("%d", &continueSelling);
            }
            
            paymentLoop = 1;
            while (paymentLoop == 1) {
                system("cls");
                printf("Métodos de pagamento:");
                lineBreak(2);
                printf("1. À vista no dinheiro ou no Pix (15%% de desconto)");
                lineBreak(1);
                printf("2. À vista no cartão de crédito (10%% de desconto)");
                lineBreak(1);
                printf("3. Duas vezes sem juros");
                lineBreak(1);
                printf("4. Três vezes ou mais (Pode conter juros)");
                lineBreak(2);
                printf("Digite a opção de pagamento:");
                lineBreak(1);
                scanf("%d", &paymentChoice);
                lineBreak(1);
                
                if (paymentChoice == 1) {
                    total = total * 0.85;
                    printf("O total é R$:%.2f", total);
                    lineBreak(1);
                    system("pause");
                    paymentLoop = 0;
                } else if (paymentChoice == 2) {
                    total = total * 0.90;
                    printf("O total é R$:%.2f", total);
                    lineBreak(1);
                    system("pause");
                    paymentLoop = 0;
                } else if (paymentChoice == 3) {
                    float parcela = total / 2;
                    printf("O total é de 2x de R$: %.2f", parcela);
                    lineBreak(1);
                    system("pause");
                    paymentLoop = 0;
                } else if (paymentChoice == 4) {
                    total = total * 1.1;
                    int installmentNum = 0;
                    printf("Selecione o número de parcelas: ");
                    scanf("%d", &installmentNum);
                    float parcela = total / installmentNum;
                    printf("O total é de %dx de R$: %.2f", installmentNum, parcela);
                    lineBreak(1);
                    system("pause");
                    paymentLoop = 0;
                } else {
                    printf("Opção inválida. Tente novamente.");
                    lineBreak(1);
                    system("pause");
                }
                system("cls");
                printf("Obrigado por utilizar nossos serviços :)");
                lineBreak(1);
                system("pause");
            }
            firstChoice = 0;
        } else if (firstChoice == 2) {
            return 0;
        }
    }
    return 0;
}

void lineBreak(int lines) {
    int cont = 1;
    while (cont <= lines) {
        printf("\n");
        cont++;
    }
}