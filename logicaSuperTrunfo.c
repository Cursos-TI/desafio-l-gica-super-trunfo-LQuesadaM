#include <stdio.h>

int main()
{
    // --- VARIÁVEIS DA CARTA 1 ---
    char estado1[3], codigo1[4], nome1[50];
    unsigned long int populacao1;
    double area1, pib1, densidade1, pibPerCapita1;
    int pontosTuristicos1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2[3], codigo2[4], nome2[50];
    unsigned long int populacao2;
    double area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos2;

    // --- NUEVAS VARIABLES PARA EL NIVEL MESTRE ---
    int opcao1, opcao2;
    double valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    double suma1, suma2;

    // --- ENTRADA DE DADOS: CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome: ");
    scanf(" %[^\n]s", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%lf", &area1);
    printf("PIB (bilhões): ");
    scanf("%lf", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    densidade1 = (double)populacao1 / area1;

    // --- ENTRADA DE DADOS: CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome: ");
    scanf(" %[^\n]s", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%lf", &area2);
    printf("PIB (bilhões): ");
    scanf("%lf", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    densidade2 = (double)populacao2 / area2;

    // --- MENU 1 ---
    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1. População | 2. Área | 3. PIB | 4. Pontos | 5. Densidade\nOpção: ");
    scanf("%d", &opcao1);

    // Asignación simple del primer atributo
    if (opcao1 == 1)
    {
        valor1_c1 = populacao1;
        valor1_c2 = populacao2;
    }
    else if (opcao1 == 2)
    {
        valor1_c1 = area1;
        valor1_c2 = area2;
    }
    else if (opcao1 == 3)
    {
        valor1_c1 = pib1;
        valor1_c2 = pib2;
    }
    else if (opcao1 == 4)
    {
        valor1_c1 = pontosTuristicos1;
        valor1_c2 = pontosTuristicos2;
    }
    else
    {
        valor1_c1 = densidade1;
        valor1_c2 = densidade2;
    }

    // --- MENU 2 DINÁMICO (No muestra la opción 1) ---
    printf("\nEscolha o SEGUNDO atributo:\n");
    if (opcao1 != 1)
        printf("1. População\n");
    if (opcao1 != 2)
        printf("2. Área\n");
    if (opcao1 != 3)
        printf("3. PIB\n");
    if (opcao1 != 4)
        printf("4. Pontos Turísticos\n");
    if (opcao1 != 5)
        printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao2);

    // Asignación del segundo atributo
    if (opcao2 == 1)
    {
        valor2_c1 = populacao1;
        valor2_c2 = populacao2;
    }
    else if (opcao2 == 2)
    {
        valor2_c1 = area1;
        valor2_c2 = area2;
    }
    else if (opcao2 == 3)
    {
        valor2_c1 = pib1;
        valor2_c2 = pib2;
    }
    else if (opcao2 == 4)
    {
        valor2_c1 = pontosTuristicos1;
        valor2_c2 = pontosTuristicos2;
    }
    else
    {
        valor2_c1 = densidade1;
        valor2_c2 = densidade2;
    }

    // --- LÓGICA DE SUMA (SUPER PODER) ---
    // Si es densidad, sumamos el inverso (1/valor) porque menos es más poder
    suma1 = (opcao1 == 5 ? 1 / valor1_c1 : valor1_c1) + (opcao2 == 5 ? 1 / valor2_c1 : valor2_c1);
    suma2 = (opcao1 == 5 ? 1 / valor1_c2 : valor1_c2) + (opcao2 == 5 ? 1 / valor2_c2 : valor2_c2);

    // --- RESULTADOS CON OPERADOR TERNARIO ---
    printf("\n--- RESULTADO DO DUELO ---\n");

    // Comparación Atributo 1
    printf("Atributo 1: %s venceu!\n",
           (opcao1 == 5) ? (valor1_c1 < valor1_c2 ? nome1 : nome2) : (valor1_c1 > valor1_c2 ? nome1 : nome2));

    // Comparación Atributo 2
    printf("Atributo 2: %s venceu!\n",
           (opcao2 == 5) ? (valor2_c1 < valor2_c2 ? nome1 : nome2) : (valor2_c1 > valor2_c2 ? nome1 : nome2));

    // Resultado Final por Suma
    printf("\nSoma dos Atributos: %s (%.2f) vs %s (%.2f)\n", nome1, suma1, nome2, suma2);
    printf("VENCEDOR FINAL: %s\n", (suma1 > suma2 ? nome1 : (suma1 < suma2 ? nome2 : "Empate!")));

    return 0;
}