# Vetor global e variável de média
notas = [0.0] * 4
media = 0.0

# Função para ler as notas
def ler_notas():
    global notas
    for i in range(4):
        notas[i] = float(input(f"Digite a {i + 1}ª Nota: "))

# Função para calcular a média
def calcular_media():
    global media
    soma = sum(notas)
    media = soma / 4

# Função para mostrar o resultado
def mostrar_resultado():
    print(f"A média final do respectivo aluno é: {media:.2f}")


print("Olá, este programa calcula a média final do aluno.\n")

ler_notas()
calcular_media()
mostrar_resultado()


