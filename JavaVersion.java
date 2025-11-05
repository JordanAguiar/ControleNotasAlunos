import java.util.Scanner;

public class MediaAluno {

    // Vetor global e variável de média
    static float[] notas = new float[4];
    static float media;

    // Função para ler as notas
    static void lerNotas() {
        Scanner input = new Scanner(System.in);

        for (int i = 0; i < 4; i++) {
            System.out.print("Digite a " + (i + 1) + "ª Nota: ");
            notas[i] = input.nextFloat();
        }
    }

    // Função para calcular a média
    static void calcularMedia() {
        float soma = 0.0f;
        for (int i = 0; i < 4; i++) {
            soma += notas[i];
        }
        media = soma / 4.0f;
    }

    // Função para mostrar o resultado
    static void mostrarResultado() {
        System.out.printf("A média final do respectivo aluno é: %.2f%n", media);
    }

    // Função principal (main)
    public static void main(String[] args) {
        System.out.println("Olá, este programa calcula a média final do aluno.\n");

        lerNotas();
        calcularMedia();
        mostrarResultado();
    
}
}