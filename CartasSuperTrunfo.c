#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //Variáveis carta 1 e 2.
    char Estado1, Estado2;      
    char Codigo1[21], Codigo2[20];
    char Cidade1[31], Cidade2[30];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontos1, Pontos2;
    double Densidade1, Densidade2;
    float PIBpc1, PIBpc2;
    float superPoder1,superPoder2;

        /*Carta 01, Estado 'A', Nome da cidade Fortaleza, Código A01, População 2574412 habitantes, Área 313.8km², 
        PIB 73.4 bilhoes, Número de pontos turisticos 37   */
        printf("Insira o Estado (A) para a carta 01: \n" );    
        scanf("%c" , &Estado1 );

        printf("Digite o nome da cidade: (Fortaleza) \n");
        scanf("%s", &Cidade1);

        printf("Digite o Código (Estado + carta):\n");
        scanf("%s", &Codigo1);

        printf("Insira a população da cidade (2574412):\n");
        scanf("  %u", &Populacao1),

        printf("Insira a àrea da cidade (313.8): \n");
        scanf("  %f", &Area1);

        printf("Digite o PIB da cidade (73.4): \n");
        scanf("  %f", &PIB1);

        printf("Digite o número de pontos turiscos da cidade (37): \n");
        scanf("  %d", &Pontos1);

        Densidade1 = (double) Populacao1 / Area1;
        
        PIBpc1 = (double) PIB1 / Populacao1;
    
        superPoder1 = (float) Populacao1 + Area1 + PIB1 + Pontos1 + PIBpc1 + (1/Densidade1);
       
        /*Carta 02, Estado 'B', Nome da cidade Salvador, Código A02, População  2417678 habitantes, Área 693.8km², 
        PIB 62.954 bilhoes, Número de pontos turisticos 45, Densidade Populacional  */

        printf("Insira o estado (B) para a carta 02: \n");
        scanf("  %c" , &Estado2);

        printf("Digite o nome da cidade: (Salvador) \n");
        scanf("  %s" , &Cidade2);

        printf("Digite o Código (Estado + carta): \n");
        scanf("  %s" , &Codigo2);

        printf("Insira a população da cidade (2417678): \n");
        scanf("  %u" , &Populacao2);

        printf("Insira a Área da cidade (693.8): \n");
        scanf("  %f" , &Area2);

        printf("Digite o PIB da cidade (62.9): \n");
        scanf("  %f" , &PIB2);

        printf("Digite o Número de pontos turísticos da cidade (45): \n");
        scanf("  %d" , &Pontos2);

        Densidade2 = (float) Populacao2 / Area2;

        PIBpc2 = (float) PIB2 / Populacao2;

        superPoder2 = (float) Populacao2 + Area2 + PIB2 + Pontos2 + PIBpc2 + (1/Densidade2);


        
        //Dados impressos da carta 01.
        printf("\n \n \n");
        printf("Carta: 01\n" );
        printf("Estado: %c \n" , Estado1 );
        printf("Nome da cidade: %s \n" , Cidade1);
        printf("O Código da carta é: %s \n", Codigo1);
        printf("A população é: %u habitantes.\n", Populacao1);
        printf("A Área da cidade é: %.1fkm².\n", Area1);
        printf("O PIB da cidade é: R$%.1f Bilhões de Reais.\n", PIB1);
        printf("O número de pontos turísticos da cidade é: %d \n", Pontos1);
        printf("A Densidade populacional da cidade é: %.2f hab/Km²\n", Densidade1);
        //O PIBpc1 é multiplicado por 1000000000 para ajustar o valor com 2 casas decimais, pois o valor inicial(PIB) é refente a Bilhão.
        printf("O PIB per Capta da cidade é: %.2f Reais\n", PIBpc1 *1000000000);
        printf("O Super Poder da carta é %.2f: \n", superPoder1);
        printf("\n");
        //Dados impressos carta 02.
        printf("Carta: 02\n");
        printf("Estado: %c \n" , Estado2);
        printf("Nome da cidade: %s \n" , Cidade2);
        printf("O Código da carta é: %s \n" , Codigo2);
        printf("A População da cidade é: %u habitantes. \n" , Populacao2);
        printf("A Área da cidade é: %.1f km². \n" , Area2 );
        printf("O PIB da cidade é: R$%.2f Bilhões de Reais. \n", PIB2);
        printf("O número de pontos turisticos da cidade é: %d \n" , Pontos2);
        printf("A Densidade populacional é: %.2f hab/Km²\n", Densidade2);
        //O PIBpc2 é multiplicado por 1000000000 para ajustar o valor com 2 casas decimais, pois o valor inicial(PIB) é refente a Bilhão.
        printf("O PIB per Capta da cidade é: %.2f Reais\n", PIBpc2 * 1000000000);
        printf("O Super Poder da carta é %.2f: \n", superPoder2);
        // Comparativo das cartas **Jogo Super trunfo!**
        printf("\n\n\n");
       
        
        printf("*** Jogo Super Trunfo ***\n");
        unsigned long int resultadoPopulacao = Populacao1 > Populacao2;
        float resultadoArea = Area1 > Area2;
        float resultadoPIB = PIB1 > PIB2;
        int resultadoPontos = Pontos1 > Pontos2;
        float resultadoDensidade = Densidade1 < Densidade2;
        float resultadoPIBpc = PIBpc1 > PIBpc2 ;
        float resultadosuperPoder = superPoder1 > superPoder2;

        //Comparar atributos, o mairo vence(exceto a densidade populacional) e imprimir a comparação. 
        //O resultado 1 vence a carta 1 e 0 vence a carta2.
        /*Comparação de Cartas:

            População:
            Área: 
            PIB: 
            Pontos Turísticos: 
            Densidade Populacional: 
            PIB per Capita:
            Super Poder:*/

        printf("Comparação de Cartas: Se 1 venceu 'Carta 1', se 0 venceu 'Carta 2':\n");
        printf("*** RESULTADO *** \n");
        printf(" População o vencedor é: %u. \n ", resultadoPopulacao );
        printf("Area o vencedor é: %.0f. \n ", resultadoArea );
        printf("PIB o vencedor é: %.0f. \n ", resultadoPIB);
        printf("Pontos Turísticos o vencedor é: %d. \n ", resultadoPontos);
        printf("Densidade Populacional o vencedor é: %.0f. \n ", resultadoDensidade );
        printf("PIB per Capta o vencedor é: %.0f. \n ", resultadoPIBpc );
        printf("Super Poder o vencedor é: %.0f. \n ", resultadosuperPoder );   
 


    return 0;
}
