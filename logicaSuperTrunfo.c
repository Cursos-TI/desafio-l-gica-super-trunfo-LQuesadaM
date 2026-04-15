#include <stdio.h>

int main()
{
    // --- VARIÁVEIS DA CARTA 1 ---
    char estado1[3], codigo1[4], nome1[50];
    unsigned long int populacao1;
    double area1, pib1, densidade1, pibPerCapita1;
    int pontosTuristicos1;
    // float superPoder1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2[3], codigo2[4], nome2[50];
    unsigned long int populacao2;
    double area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos2;
    // float superPoder2;

    int opcao; // variavel para o menu interativo

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

    // Cálculos Carta 1
    densidade1 = (double)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (double)populacao1;
    // superPoder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontosTuristicos1 + (float)pibPerCapita1 + (1.0f / (float)densidade1);

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

    // Cálculos Carta 2
    densidade2 = (double)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (double)populacao2;
    // superPoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontosTuristicos2 + (float)pibPerCapita2 + (1.0f / (float)densidade2);

    // --- MENU INTERACTIVO ---
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da comparação ---\n");

    switch (opcao)
    {
    case 1:
        // --- LÓGICA DE COMPARAÇÃO (Atributo: População) ---
        printf("\n--- Comparação de Cartas (Atributo: População) ---\n");
        printf("Carta 1 - %s (%s): %lu\n", nome1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", nome2, estado2, populacao2);

        if (populacao1 > populacao2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }
        else
        {
            printf("Resultado: 🤝🤝🤝 Empate na população! 🤝🤝🤝\n");
        }

        break;
    case 2:
        // Comparação por Área
        printf("\n--- Atributo: Área ---\n");
        printf("Carta 1 - %s (%s): %lf\n", nome1, estado1, area1);
        printf("Carta 2 - %s (%s): %lf\n", nome2, estado2, area2);

        if (area1 > area2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        }
        else if (area1 < area2)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }
        else
        {
            printf("Resultado: 🤝🤝🤝 Empate na área! 🤝🤝🤝\n");
        }

        break;
    case 3:
        // Comparação por PIB
        printf("\n--- Atributo: PIB ---\n");
        printf("Carta 1 - %s (%s): %lf\n", nome1, estado1, pib1);
        printf("Carta 2 - %s (%s): %lf\n", nome2, estado2, pib2);

        if (pib1 > pib2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        }
        else if (pib1 < pib2)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }
        else
        {
            printf("Resultado: 🤝🤝🤝 Empate no PIB! 🤝🤝🤝\n");
        }

        break;
    case 4:
        // Comparação por Pontos Turísticos
        printf("\n--- Atributo: Pontos Turísticos ---\n");
        printf("Carta 1 - %s (%s): %d\n", nome1, estado1, pontosTuristicos1);
        printf("Carta 2 - %s (%s): %d\n", nome2, estado2, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        }
        else if (pontosTuristicos1 < pontosTuristicos2)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }
        else
        {
            printf("Resultado: 🤝🤝🤝 Empate nos pontos turísticos! 🤝🤝🤝\n");
        }
    case 5:
        // Comparação por Densidade Demográfica
        printf("\n--- Atributo: Densidade Demográfica ---\n");
        printf("Carta 1 - %s (%s): %lf\n", nome1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %lf\n", nome2, estado2, densidade2);
        if (densidade1 < densidade2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        }
        else if (densidade1 > densidade2)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }
        else
        {
            printf("Resultado: 🤝🤝🤝 Empate na densidade demográfica! 🤝🤝🤝\n");
        }

    default:
        printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
        break;
    }

    return 0;
}