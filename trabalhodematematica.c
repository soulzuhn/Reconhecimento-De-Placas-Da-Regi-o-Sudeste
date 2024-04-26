#include <stdio.h>   // Biblioteca para entrada e saída de dados
#include <string.h> // Biblioteca para as strings
#include <ctype.h> // Biblioteca para funções de teste de caracteres

char *placasdaregiaoSudeste(char *sistemadeplacaMercosul) // é um tipo de  variável CONSTANTE(ponteiro assim que é chamado em C//C++) capaz de armazenar um endereço de memória ou o endereço de outra variável.
{
    // Verificando se a entrada contém apenas caracteres alfabéticos e dígitos
    for (int i = 0; i < 3; i++) {
        if (!isalpha(sistemadeplacaMercosul[i]) && !isdigit(sistemadeplacaMercosul[i]))  { //ISALPHA = LETRAS / ISDIGIT = NUMEROS
        }
    }
    if (strncmp(sistemadeplacaMercosul, "MOX", 3) >= 0 && strncmp(sistemadeplacaMercosul, "MTZ", 3) <= 0 ||

        strncmp(sistemadeplacaMercosul, "OCV", 3) >= 0 && strncmp(sistemadeplacaMercosul, "ODT", 3) <= 0

        || strncmp(sistemadeplacaMercosul, "OVE", 3) >= 0 && strncmp(sistemadeplacaMercosul, "OVF", 3) <= 0 ||

        strncmp(sistemadeplacaMercosul, "OVH", 3) >= 0 && strncmp(sistemadeplacaMercosul, "OVL", 3) <= 0

        || strncmp(sistemadeplacaMercosul, "OYD", 3) >= 0 && strncmp(sistemadeplacaMercosul, "OYK", 3) <= 0

        || strncmp(sistemadeplacaMercosul, "PPA", 3) >= 0 && strncmp(sistemadeplacaMercosul, "PPZ", 3) <= 0

        || strncmp(sistemadeplacaMercosul, "QRB", 3) >= 0 && strncmp(sistemadeplacaMercosul, "QRM", 3) <= 0

        || strncmp(sistemadeplacaMercosul, "RBA", 3) >= 0 && strncmp(sistemadeplacaMercosul, "RBJ", 3) <= 0)
    {

        return "Essa placa e do estado de Espirito Santo"; // Condição para encontrar o estado de Espírito Santo
    }
    else if (strncmp(sistemadeplacaMercosul, "KMF", 3) >= 0 && strncmp(sistemadeplacaMercosul, "LVE", 3) <= 0

             || strncmp(sistemadeplacaMercosul, "RIO", 3) == 0 && strncmp(sistemadeplacaMercosul, "RIO", 3) == 0 ||

                    strncmp(sistemadeplacaMercosul, "RIP", 3) >= 0 && strncmp(sistemadeplacaMercosul, "RKV", 3) <= 0)
    {

        return "Essa placa e do estado de Rio de Janeiro"; // Condição para encontrar o estado de Rio de Janeiro
    }
    else if (strncmp(sistemadeplacaMercosul, "BFA", 3) >= 0 && strncmp(sistemadeplacaMercosul, "GKI", 3) <= 0

             || strncmp(sistemadeplacaMercosul, "QSN", 3) >= 0 && strncmp(sistemadeplacaMercosul, "QSZ", 3) <= 0 ||

             strncmp(sistemadeplacaMercosul, "SAV", 3) == 0)
    {

        return "Essa placa e do estado de São Paulo"; // Condição para encontrar o estado de São Paulo
    }
    else
    {

        return "Nao foi reconhecida na regiao Sudeste ou formato da placa e invalida"; // Condição para caso a não for reconhecida ou a placa ser invalida
    }

   
}

// Entrada e saída de dados


int main()
{
    char sistemadeplacaMercosul[8]; // Variavel do tipo que armazena um numero limitado de caracteres

    printf("Coloque aqui somente as tres primeiras letras necessarias em formato maisculo ou a placa completa:\n");
    scanf("%s", sistemadeplacaMercosul);

    char *estadosdaregiaoSudeste = placasdaregiaoSudeste(sistemadeplacaMercosul);

    printf("%s\n", estadosdaregiaoSudeste); // %s = Avisa a memoria que o tipo de variavel é caractere , a linguagem C trabalha diretamente com a memória do computador

    return 0;
}
