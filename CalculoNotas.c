#include <stdio.h>


float notas[4]; // Vetor notas, obs.: Tem que ser Global
float media;

//Função ler notas
void LerNotas()
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("Digite a %dª Nota: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

//Função Calcular média
float CalcularMedia()
{
    float soma = 0.0f;
    for (int i = 0; i < 4; i++)
    {
        soma += notas[i];
    }
    media = soma / 4.0f;
}

//Função Mostrar resultados
void MostrarResultado()
{
    printf("A média final do respectivo aluno é: %.2f", media);
    if (media < 6.0)
        printf("\nO Aluno foi reprovado;");
    
    else
        printf("\nO aluno foi aprovado");
}

//Escopo Global
int main()
{
    printf("Olá, este programa calcula a media final do aluno.\n");

    LerNotas();
    
    CalcularMedia();
    
    MostrarResultado();
    
    return 0;
}