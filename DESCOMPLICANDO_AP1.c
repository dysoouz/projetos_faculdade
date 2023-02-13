#include <conio.h>   //biblioteca ultilizada para colorir o fundo
#include <stdio.h>   //biblioteca padrão
#include <stdlib.h>  //biblioteca padrão
#include <locale.h>  //ultilizada para ser possivel a ultilização de acentos pontos e etc...
#include <Windows.h> //biblioteca usada para colorir letras também
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, a = 1, b = 1, t1 = 1, t2 = 1, t6 = 'c', t3 = 1, n = 1, nsc, pontuacao = 0, ajuda = 1, pontoparamenu = 0, mliberados[8] = {1}, aaa;
    float pontosfinais, pontos = 0;
    char p1, p2, b2, b3, b4, co, co2, b5, b6 = 's', b7;
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     ULTILIZE O PROGRAMA EM MODO JANELA PARA UMA MELHOR EXPÊRIENCIA!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t       ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); // colorir letras
        system("pause");                                             // pedindo para o usuario apertar qualquer tecla.
    }
    system("color 70"); // colorir fundos e letras
    system("cls");      // limpando as mensagens a cima
    printf("=======================================================================================================================\n");
    printf("\t\t\t\t\t\t     DESCOMPLICANDO\n");
    printf("=======================================================================================================================\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 124); // colorir letras
    printf("\n                      :::::::                      ::::::::::::::::::::::.                               .::.\n");
    printf("                     #@@@@@@#                     .@@@@@@@@@@@@@@@@@@@@@@@@@@!!                        .#@@@!\n");
    printf("                    #@@@@@@@@#                    .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@!                     !@@@@@!\n");
    printf("                   .#@@@@.@@@@#                   .@@@@@!                 #@@@@@@@:                .#@@@@@@@!\n");
    printf("                  .#@@@@  #@@@@!                  .@@@@@!                   .@@@@@#.            .:@@@@@@@@@@!\n");
    printf("                  #@@@@!  .@@@@@!                 .@@@@@!                    .@@@@@!         :#@@@@@@#::@@@@!\n");
    printf("                 #@@@@@    .@@@@@!                .@@@@@!                    .@@@@@!         #@@@@@:.  :@@@@!\n");
    printf("                !@@@@@      :@@@@@:               .@@@@@!                    .@@@@@!         #@!.      :@@@@!\n");
    printf("               !@@@@@.       !@@@@#:              .@@@@@!                   .@@@@@@!                   :@@@@!\n");
    printf("              .#@@@@.        .#@@@@!.             .@@@@@!                 .:@@@@@@:                    :@@@@!\n");
    printf("             .#@@@@!          .@@@@@!.            .@@@@@#::::::::::::!#@@@@@@@@@#:                     :@@@@!\n");
    printf("             !@@@@#.           :@@@@@:            .@@@@@@@@@@@@@@@@@@@@@@@@@@@#.                       :@@@@!\n");
    printf("            !@@@@@.             :@@@@@:           .@@@@@@@@@@@@@@@@@@@@@@:...                          :@@@@!\n");
    printf("           :@@@@@@@@@@@@@@@@@@@@@@@@@@@:          .@@@@@!                                              :@@@@!\n");
    printf("          :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:         .@@@@@!                                              :@@@@!\n");
    printf("         .!@@@@#.                 .#@@@@@.        .@@@@@!                                              :@@@@!\n");
    printf("        .!@@@@@:                   :@@@@@#.       .@@@@@!                                              :@@@@!\n");
    printf("        :@@@@@:                     !@@@@@#.      .@@@@@!                                              :@@@@!\n");
    printf("       :@@@@@:                       !@@@@@!      .@@@@@!                                              :@@@@!\n");
    printf("      .@@@@@!                         !@@@@@.     .@@@@@!                                              :@@@@!\n");
    printf("     .@@@@@#:                         :#@@@@@:    .@@@@@!                                              :@@@@!\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 112); // colorir letras
    printf("\n\n\n\t\t\t\t       ");
    system("pause");
    system("cls");                                       // limpando mensagens a cima
    while (b != 's' && b != 'S' && b != 'n' && b != 'N') // tratamento de erro caso o usuario queira sair e a resposta seja inesperada.
    {
        printf("\n\n\n\n\n\n\n\n\n\n                                          você deseja seguir o crograma de estudo?                        \n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 114); // colorir letras
        printf("\n\n\n\t\t\t\tS para (sim)\t\t\t\t\t");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 124); // colorir letras
        printf("N para (não)  \n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 112); // colorir letras
        b6 = getch();
        system("cls");                                                     // limpando as mensagens a cima
        if (b6 != 's' && b6 != 'S' && b6 != 'N' && b6 != 'n' && b6 != 'N') // tratamento de erro do cronograma
        {
            system("cls"); // limpando as mensagens a cima
            printf("                                            opção Invalida! digite novamente");
        }
        else
        {
            if (b6 == 's' || b6 == 'S')
            {

                while (b != 48) // laço de repetição while para a seleção do menu continuar voltando até o usuario digitar 0
                {
                    system("cls");                                               // limpando mensagens a cima
                    system("color 70");                                          // colorir fundos e letras
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // colorir letras
                    printf("=======================================================================================================================\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 96); // colorir letras
                    printf("\n\t\t\t\t\t\t   * * * * * * * *   \n");
                    printf("\t\t\t\t\t\t   *  CONTEÚDOS  *   \n");
                    printf("\t\t\t\t\t\t   * * * * * * * *   \n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 94); // colorir letras
                    pontoparamenu = 0;
                    for ( i = 0; i < 8; i++) // sistema para mostrar os modulos que estão liberados no programa
                    {
                        pontoparamenu += (mliberados[i]);
                    }
                    if (pontoparamenu == 1) // variaveis para diferentes mensagens
                    {
                        printf("\t\t\t\t\tMÓDULOS LIBERADOS: APENAS O MÓDULO 1\n");
                    }
                    if (pontoparamenu == 7) // variaveis para diferentes mensagens
                    {
                        printf("\t\t\t\t\t     MÓDULOS LIBERADOS: TODOS!!!     \n");
                    }
                    else
                    {
                        if (pontoparamenu < 7 && pontoparamenu > 1) // variaveis para diferentes mensagens
                        {
                            printf("\t\t\t\t\t    MÓDULOS LIBERADOS: DO 1 AO %d:    \n", pontoparamenu);
                        }
                    }
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // colorir letras
                    printf("\n=======================================================================================================================\n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 112); // colorir letras
                    // menu principal
                    printf("                                                   ***************\n");
                    printf("\nintrodução a programação                           |  Módulo  1  |\n");
                    printf("Conceitos iniciais                                 |  Módulo  2  |\n");
                    printf("Estrutura Sequencial                               |  Módulo  3  |\n");
                    printf("Estrutura condicional                              |  Módulo  4  |\n");
                    printf("Estrutura condicional composta e switch-case       |  Módulo  5  |\n");
                    printf("Estrutura de Repetição                             |  Módulo  6  |\n");
                    printf("Vetores                                            |  Módulo  7  |\n");
                    printf("\n                                                   ***************\n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 124); // colorir letras
                    printf("Mais Opções/ajuda:                                 |  Digite  8  |                                                      \n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 112); // colorir letras

                    printf("\n\nInforme o número módulo que você deseja acessar :  ");
                    a = getch(); // usamos getch pra não precisar apertar enter e também para tratamento de erro.
                    if (a == 49) // modulo 1
                    {

                        co = 's';
                        system("color 09"); // colorir fundos e letras
                        do                  // laço de repetição do while para repetir as opções do modulo até o usuario digitar n na opção sair
                        {
                            do // laço de repetição do while para tratamento de erro caso o usuario digite um numero errado
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-----------------------------------------------INTRODUÇÃO A PROGRAMAÇÃO-------------------------------------------------\n\n");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf(" digite ( 1 ) para introdução do fluxograma\n\n");
                                printf(" digite ( 2 ) para a introdução do Pseudocódigo(portugol)\n\n");
                                printf(" digite ( 3 ) para introdução da linguagem c\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                if (n < 1 || n > 3) // tratamento de erro caso o numero seja incorreto.
                                {
                                    printf("\n\n                                          Opção não encontrada, digite novamente.\n");
                                }
                                printf("\n\n em qual você deseja entrar:  ");
                                scanf("%d", &n);

                            } while (n < 1 || n > 3);
                            switch (n) // switch case para mostrar as opções escolhidas.
                            {
                            case 1:
                                system("cls"); // limpando mensagens a cima
                                printf("\n=======================================================================================================================\n");
                                printf("\t\t\t\t\t       * * * * * * * * *\n");
                                printf("\t\t\t\t\t       *   Fluxograma  *\n");
                                printf("\t\t\t\t\t       * * * * * * * * *\n");
                                printf("\n=======================================================================================================================\n");
                                printf("\n[Fluxograma]\n");
                                printf("\n=======================================================================================================================\n");
                                printf("\nFluxograma: é um tipo de diagrama, e pode ser entendido como uma representação esquemática de um processo ou algoritmo,\n");
                                printf("\nmuitas vezes feito através de gráficos que ilustram de forma descomplicada a transição de informações entre os elementos\n");
                                printf("\nque o compõem, ou seja, é a sequência operacional do desenvolvimento de um processo, o qual caracteriza: o trabalho que\n");
                                printf("\nestá sendo realizado, o tempo necessário para sua realização, a distância percorrida pelos documentos, quem está\n");
                                printf("\nrealizando o trabalho e como ele flui entre os participantes deste processo. Os fluxogramas são muito utilizados em\n");
                                printf("\nprojetos de software para representar a lógica interna dos programas, mas podem também ser usados para desenhar\n");
                                printf("\nprocessos de negócio e o workflow que envolve diversos atores corporativos no exercício de suas atribuições.[1]\n");
                                printf("\nO diagrama de fluxo de dados (DFD) utiliza do fluxograma para modelagem e documentação de sistemas computacionais.\n");
                                printf("\nO termo fluxograma designa uma representação gráfica de um determinado processo ou fluxo de trabalho,\n");
                                printf("\nefetuado geralmente com recurso a figuras geométricas normalizadas e as setas unindo essas figuras geométricas.\n");
                                printf("\nAtravés desta representaçãográfica é possível compreender de forma rápida e fácil a transição de informações\n");
                                printf("\nou documentos entre os elementos que participam no processo em causa. O fluxograma pode ser definido também como\n");
                                printf("\no gráfico em que se representa o percurso ou caminho percorrido por certo elemento\n");
                                printf("\n(por exemplo, um determinado documento), através dos vários departamentos da organização, bem como o tratamento\n");
                                printf("\nque cada um vai lhe dando. A existência de fluxogramas para cada um dos processos é fundamental para a\n");
                                printf("\nsimplificação e racionalização do trabalho, permitindo a compreensão e posterior otimização dos processos desenvolvidos\n");
                                printf("\nem cada departamento ou área da organização.\n\n");
                                printf("=======================================================================================================================\n");
                                if (pontuacao == 0) // aumento da pontuação para o usuario entrar no caso 2
                                {
                                    pontuacao++;
                                }
                                break;
                            case 2:
                                if (pontuacao > 0) // bloqueio para a pessoa precisar entrar no caso 1 antes do caso 2
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n=======================================================================================================================\n");
                                    printf("\t\t\t\t\t       * * * * * * * * *\n");
                                    printf("\t\t\t\t\t       *  Pseudocódigo *\n");
                                    printf("\t\t\t\t\t       * * * * * * * * *\n");
                                    printf("\n=======================================================================================================================\n");
                                    printf("\n[Pseudocódigo]\n");
                                    printf("\n=======================================================================================================================\n");
                                    printf("\nPseudocódigo é uma forma genérica de escrever um algoritmo, utilizando uma linguagem simples\n");
                                    printf("\n(nativa a quem o escreve, de forma a ser entendida por qualquer pessoa) sem necessidade de\n");
                                    printf("\nconhecer a sintaxe de nenhuma linguagem de programação. Um exemplo de pseudocódigo é o Portugol,\n");
                                    printf("\nque utiliza o compilador Visualg ou Portugol Viana que pode ser baixado do portal de software livre SourceForge.\n");
                                    printf("\nOs livros sobre a ciência de computação utilizam frequentemente o pseudocódigo para ilustrar os seus exemplos,\n");
                                    printf("\nde forma que todos os programadores possam entendê-los (independentemente da linguagem que utilizem).\n");
                                    printf("\nNo caso da língua portuguesa existem alguns interpretadores de pseudocódigo, nenhum tem a projecção das\n");
                                    printf("\nlinguagens Pascal ou BASIC, que no caso da língua inglesa se assemelham bastante a um pseudo-código.\n");
                                    printf("=======================================================================================================================\n");
                                }
                                else // mensagem para a pessoa precisar entrar no caso 1 antes do caso 2
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n\t\t\tvocê precisa ver introdução do fluxograma (1) antes de acessar esta parte.\n\n");
                                }
                                if (pontuacao == 1) // aumento da pontuação para o usuario entrar no caso 3
                                {
                                    pontuacao++;
                                }
                                break;
                            case 3:
                                if (pontuacao > 1) // bloqueio para a pessoa precisar entrar no caso 2 antes do caso 3
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n=======================================================================================================================\n");
                                    printf("\t\t\t\t\t       * * * * * * * * *\n");
                                    printf("\t\t\t\t\t       *  Linguagem C  *\n");
                                    printf("\t\t\t\t\t       * * * * * * * * *\n");
                                    printf("\n=======================================================================================================================\n");
                                    printf("\n[Linguagem C]\n");
                                    printf("\n=======================================================================================================================\n");
                                    printf("O foco inicial da Linguagem C era o desenvolvimento de sistemas \n");
                                    printf("\noperacionais e compiladores.Sua estrutura e seu nome provêm de uma linguagem anterior B.\n");
                                    printf("\nFoi usada na construção de uma nova versão do \n");
                                    printf("\nsistema operacional Unix.Quase todos os grandes sistemas operacionais \n");
                                    printf("\nsão construídos em C/C++.No ano de 1978 foi publicado o livro: The C Programming \n");
                                    printf("\nLanguage por Kernigham & Ritchie,tornando a linguagem conhecida.No início dos anos 80,passou a ser reconhecida \n");
                                    printf("\ncomo uma linguagem de propósito geral.A padronização da linguagem era uma necessidade real. \n");
                                    printf("\nA padronização foi iniciada pela ANSI ? American National Standard Institute ? em 1983 e \n");
                                    printf("\nfinalizada em 1989.Esta linguagem precisava prover acesso de baixo nível ao hardware \n");
                                    printf("\n(PCU, I/Os e periféricos) e se entender bem com o Assembly.\n");
                                    printf("\nEla é linguagem procedural, modular,estruturada e multiplataforma,onde \n");
                                    printf("\ngeralmente é compilada para o código de máquina.\n");
                                    printf("\nA linguagem C inspirou a criação de muitas outras linguagens \n");
                                    printf("\nde programação mais recentes, como C++, Java, C#, JavaScript, Perl, PHP. \n");
                                    printf("=======================================================================================================================\n");
                                }
                                else // mensagem para a pessoa precisar entrar no caso 2 antes do caso 3
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n\t\t     você precisa ver introdução do Pseudocódigo (2) antes de acessar esta parte.\n\n");
                                }
                                if (pontuacao == 2) // aumento da pontuação
                                {
                                    pontuacao++;
                                }
                                break;
                            default:
                                break;
                            }
                            if (pontos == 0) // aumento na pontuação de modulos para o usuario conseguir prosseguir até o proximo modulo
                            {
                                pontos++;
                                mliberados[1] = 1; // aumentado numeros no menu para mostrar modulos liberados através de vetor
                            }
                            // mensagem perguntando se deseja continuar no modulo
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                            co = getch();
                            system("cls"); // limpando mensagens a cima
                        } while (co != 'n' && co != 'N');
                    }
                    if (a == 50) // modulo 2
                    {
                        if (pontos >= 1) // liberar caso a pessoa tenha ponto suficiente
                        {
                            b2 = '0';
                            system("color 04"); // colorir fundos e letras
                            system("cls");      // limpando mensagens a cima
                            while (b2 != 'n' && b2 != 'N')
                            {
                                do // laço do while tratamento de erro caso um numero incorreto seja inserido.
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("-------------------------------------------------CONCEITOS INICIAIS----------------------------------------------------\n\n");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------");
                                    printf("\n\nAlgoritmo                                1\n");
                                    printf("\nTipos de dados em C                      2\n");
                                    printf("\nTipos de dados em pseudocódio            3\n");
                                    printf("\nOperadores                               4\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    if (t1 < 1 || t1 > 4) // tratamento de erro caso um numero incorreto seja inserido.
                                    {
                                        printf("\n\n                                          Opção não encontrada, digite novamente.\n");
                                    }
                                    printf("\n\nInforme o número do conceito a ser visto ?:  ");
                                    scanf("%d", &t1);
                                } while (t1 < 1 || t1 > 4);
                                system("cls"); // limpando mensagens a cima

                                if (t1 == 1) // opção 1
                                {

                                    printf("\n=======================================================================================================================\n");
                                    printf("\t\t\t\t\t\t   * * * * * * * *\n");
                                    printf("\t\t\t\t\t\t   *  Algoritmo  *\n");
                                    printf("\t\t\t\t\t\t   * * * * * * * *\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("É um conjunto de instruções para realizar determinada tarefa. ");
                                    printf("Um exemplo claro de algoritmo é uma receita,onde há passos \nexplicados de maneira ");
                                    printf("especifica,seguindo um conjundo de regras relacionadas a linguagem escolhida.");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t1 == 2) // opção 2
                                {
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Tipos de dados na Linguagem C]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                    printf("\nDados do tipo 'int' : \n");
                                    printf("\nSão dados que não possuem casas decimais(1,2,3...),");
                                    printf("podendo ser positivo,negativo e nulo.\n");
                                    printf("\nDados do tipo 'float' :\n");
                                    printf("\nSão dados que possuem casas decimais(1.1,.1.2,...)");
                                    printf("\n\nDados do tipo 'char':\n");
                                    printf("\nSão cadeias de caracteres.");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t1 == 3) // opção 3
                                {
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Tipos de dados no pseudocódigo]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                    printf("\nDados do tipo inteiro: \n");
                                    printf("\nSão dados que não possuem casas decimais(1,2,3...),");
                                    printf("podendo ser positivo,negativo e nulo.\n");
                                    printf("\nDados do tipo real:\n");
                                    printf("\nSão dados que possuem casas decimais(1.1,.1.2,...)");
                                    printf("\n\nDados do tipo caracter:\n");
                                    printf("\nSão cadeias de caracteres.");
                                    printf("\n\nDados do tipo lógico:\n");
                                    printf("\nBooleano,com valores relacionados a verdadeiro ou falso.");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                }

                                if (t1 == 4) // opção 4
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("[Operadores Arítmeticos]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nMultiplicação                (*)\n");
                                    printf("\nDivisão                      (/)\n");
                                    printf("\nDivisão inteira              (Barra invertida)\n");
                                    printf("\nExponeciação                 (^)\n");
                                    printf("\nSoma                         (+)\n");
                                    printf("\nSubtração                    (-)\n");
                                    printf("\nincremento em 1 unidade      (++)\n");
                                    printf("\ndecremento em 1 unidade      (+=)\n");
                                    printf("\nincremento genérico          (++)\n");
                                    printf("\ndecremento genérico          (-=)\n");
                                    printf("\natribuição com multiplicação (*=)\n");
                                    printf("\natribuição por divisão       (/=)\n");
                                    printf("\n=======================================================================================================================\n");
                                }
                                if (pontos == 1) // aumento de pontuação para o acesso do proximo modulo
                                {
                                    pontos++;
                                    mliberados[2] = 1; // aumentado numeros no menu para mostrar modulos liberados através de vetor
                                }
                                printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                                b2 = getch();
                                system("cls"); // limpando mensagens a cima
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem para concluir o modulo x primeiro
                            printf("\n\n\n\n\t\t\t\t     Você precisa concluir o módulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
                        }
                    }

                    if (a == 51) // modulo 3
                    {
                        if (pontos >= 2) // caso a pessoa tenha ponto suficiente
                        {

                            system("color 02"); // colorir fundos e letras
                            system("cls");      // limpando mensagens a cima
                            printf("\n=======================================================================================================================\n");
                            printf("\t\t\t\t\t\t* * * * * * * * * * * * * \n");
                            printf("\t\t\t\t\t\t* Estrutura Sequencial  *\n");
                            printf("\t\t\t\t\t\t* * * * * * * * * * * * * \n");
                            printf("\n=======================================================================================================================\n");
                            printf("\nComo o próprio nome sugere, estrutura sequencial é um conjunto de intruções no qual cada instrução será \nexecutada em sequencia.\n");
                            printf("\nÉ uma estrutura de controle básica, em que os comandos em um programa (função) \n");
                            printf("\nsão executados um após o outro (na ordem em que são especificados).\n");
                            printf("Primeiramente, é feita a declaração das variáveis, posteriormente, são executados os comandos de entrada\n e/ou atribuição. \n");
                            printf("Na sequência é realizado o processamento dos dados e, no final, realiza-se a saída de dados.\n");
                            printf("-----------------------------------------------------------------------------------------------------------------------\n\n");
                            printf("\t\t\t\t\t\t          * * * * *       \n");
                            printf("\t\t\t\t\t\t        *           *     \n");
                            printf("\t\t\t\t\t\t       *   Início    *    \n");
                            printf("\t\t\t\t\t\t        *           *     \n");
                            printf("\t\t\t\t\t\t          * * * * *       \n");
                            printf("\t\t\t\t\t\t             |            \n");
                            printf("\t\t\t\t\t\t             V            \n");
                            printf("\t\t\t\t\t\t       * * * * * * * * *  \n");
                            printf("\t\t\t\t\t\t      *   Entrada    *    \n");
                            printf("\t\t\t\t\t\t     *    de dados  *     \n");
                            printf("\t\t\t\t\t\t    * * * * * * * *       \n");
                            printf("\t\t\t\t\t\t             |            \n");
                            printf("\t\t\t\t\t\t             V            \n");
                            printf("\t\t\t\t\t\t     * * * * * * * * * *  \n");
                            printf("\t\t\t\t\t\t     *  Processamento  *  \n");
                            printf("\t\t\t\t\t\t     * * * * * * * * * *  \n");
                            printf("\t\t\t\t\t\t             |            \n");
                            printf("\t\t\t\t\t\t             V            \n");
                            printf("\t\t\t\t\t\t       * * * * * * * *    \n");
                            printf("\t\t\t\t\t\t       *  Saída de   *    \n");
                            printf("\t\t\t\t\t\t       *   dados     *    \n");
                            printf("\t\t\t\t\t\t       *       *  *  *    \n");
                            printf("\t\t\t\t\t\t         * * *            \n");
                            printf("\t\t\t\t\t\t             |            \n");
                            printf("\t\t\t\t\t\t             V            \n");
                            printf("\t\t\t\t\t\t          * * * * *       \n");
                            printf("\t\t\t\t\t\t        *           *     \n");
                            printf("\t\t\t\t\t\t       *     Fim     *    \n");
                            printf("\t\t\t\t\t\t        *           *     \n");
                            printf("\t\t\t\t\t\t          * * * * *       \n\n");
                            printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            printf("\nDe um modo geral a estrutura sequencial mais básica consiste de:\n");
                            printf("\n-Entrada de dados\n");
                            printf("\n-Processamento\n");
                            printf("\n-Saída de dados\n");
                            printf("\n=======================================================================================================================\n");
                            printf("=======================================================================================================================\n");
                            if (pontos == 2) // aumento de pontuação para o acesso do proximo modulo
                            {
                                pontos++;
                                mliberados[3] = 1; // aumentado numeros no menu para mostrar modulos liberados através de vetor
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem para concluir o modulo x primeiro
                            printf("\n\n\n\n\t\t\t\t     Você precisa concluir o módulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
                        }
                    }

                    if (a == 52) // modulo 4
                    {
                        if (pontos >= 3) // caso a pessoa tenha ponto suficiente
                        {

                            b4 = 's';
                            system("color 06"); // colorir fundos e letras
                            system("cls");      // limpando mensagens a cima

                            while (b4 != 'n' && b4 != 'N') // laço while até o usuario colocar 'n' para não continuar no modulo
                            {
                                do // laço do while para tratamento de erro caso algum numero seja incorreto.
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("-------------------------------------------------ESTRUTURA CONDICIONAL--------------------------------------------------\n\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nEstrutura condicional                     1\n");
                                    printf("\nOperadores lógicos                        2\n");
                                    printf("\nInstrução if                              3\n");
                                    printf("\nEstrutura do if                           4\n");
                                    printf("\nConectores na linguagem  C                5\n");
                                    printf("\nInstrução se                              6\n");
                                    printf("\nEstrutura do se                           7\n");
                                    printf("\nConectores em pseudocódigo                8\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    if (t2 < 1 || t2 > 8) // mensagem para escolhas não existentes.
                                    {
                                        printf("\n\n                                          Opção não encontrada, digite novamente.\n\n");
                                    }
                                    printf("\nInforme o número do conceito a ser visto ?   ");
                                    scanf("%d", &t2);
                                } while (t2 < 1 || t2 > 8);
                                system("cls"); // limpando mensagens a cima
                                if (t2 == 1)   // opção 1
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Estrutura condicional]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                    printf("\nUma instrução é uma expressão seguida de ponto e vírgula.\n");
                                    printf("\nBlocos são o agrupamento de várias intruções. \n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                }
                                if (t2 == 2) // opção 2
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Operadores lógicos]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nMaior do que                  (>)\n");
                                    printf("\nMenor do que                  (<)\n");
                                    printf("\nMaior ou igual                (>=)\n");
                                    printf("\nMenor ou igual                (<=)\n");
                                    printf("\nDiferente                     (!=)\n");
                                    printf("\nIgual                         (==)\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                }
                                if (t2 == 3) // opção 3
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Instrução if]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nÉ uma estrutura de teste básica encontrada em todas as linguagens.\n");
                                    printf("\nRealiza um conjunto de instruções caso a condição seja verdadeira.\n");
                                    printf("\nA condição deve ficar entre parênteses.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                }

                                if (t2 == 4) // opção 4
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Estrutura do if]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                    printf("\nif(condição){\n");
                                    printf("\n<Bloco de instruções>\n");
                                    printf("\n}\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }

                                if (t2 == 5) // opção 5
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Conector \"e\"(&&)]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[&&]  --> (e)\n");
                                    printf("\nExemplo:\n");
                                    printf("\nif(a==b && b==c){\n");
                                    printf("\n<Bloco de instruções>\n");
                                    printf("\n}\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Conector \"ou\"(||)]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[||]  --> (ou)\n");
                                    printf("\nExemplo:\n");
                                    printf("\nif(a==b || b==c)\n{");
                                    printf("\n<Bloco de condições>\n");
                                    printf("\n}\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }

                                if (t2 == 6) // opção 6
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Instrução se ]\n");
                                    printf("\nSemelhante a instrução if na Linguagem C,ela executa\n");
                                    printf("\num conjunto de instruções caso a condição seja verdadeira.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }

                                if (t2 == 7) // opção 7
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Estrutura do se ]\n");
                                    printf("\nse(a>=x) entao\n");
                                    printf("\n<Bloco de instruções>\n");
                                    printf("\nfimse\n");
                                    printf("\n\n Caso a condição entre parênteses seja verdadeira\n");
                                    printf("\nas instruções serão executadas.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t2 == 8) // opção 8
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Conector 'e']\n");
                                    printf("\nExemplo:\n");
                                    printf("\nse(a>b e b>c) entao\n");
                                    printf("\n<Bloco de comandos>\n");
                                    printf("\nfimse\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Conector 'ou']\n");
                                    printf("\nse(a>b ou b<c)entao\n");
                                    printf("\n<Bloco de instruções>\n");
                                    printf("\nfimse\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (pontos == 3) // aumento da pontuação para o usuario conseguir acessar o proximo modulo.
                                {
                                    pontos++;
                                    mliberados[4] = 1; // aumentado numeros no menu para mostrar modulos liberados através de vetor
                                }
                                printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                                b4 = getch();  // getch para capturar a informação se o usuario deseja sair sim ou nao
                                system("cls"); // limpando mensagens a cima
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem para concluir o modulo x primeiro
                            printf("\n\n\n\n\t\t\t\t     Você precisa concluir o módulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
                        }
                    }

                    if (a == 53) // modulo 5
                    {
                        b5 = 's';
                        if (pontos >= 4)
                        {
                            system("color 0b");            // colorir fundos e letras
                            system("cls");                 // limpando mensagens a cima
                            while (b5 != 'n' && b5 != 'N') // laço while para repetir caso o usuario queira continuar no modulo
                            {
                                do // tratamento de erro caso um numero seja incorreto
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("---------------------------------------Estrutura condicional composta e switch-case------------------------------------");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n\nInstrução if-else            \t\t1\n");
                                    printf("\nEstrutura do if-else         \t\t2\n");
                                    printf("\nInstrução 'se-senao'         \t\t3\n");
                                    printf("\nEstrutura do se-senao        \t\t4\n");
                                    printf("\nSwitch-case                  \t\t5\n");
                                    printf("\nEstrutura do Switch-case     \t\t6\n");
                                    printf("\nEstrutura do escolha-caso    \t\t7\n");
                                    if (t3 < 1 || t3 > 7) // mensagem de numero incorreto
                                    {
                                        printf("\n\n                                          Opção não encontrada, digite novamente.\n");
                                    }
                                    printf("\n\n\nInforme o número do  conceito a ser visto :   ");
                                    scanf("%d", &t3);
                                } while (t3 < 1 || t3 > 7);
                                system("cls"); // limpando mensagens a cima
                                if (t3 == 1)   // opção 1
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Instrução if-else]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nA instrução if-else permite a execução de outro bloco\n");
                                    printf("\nde instruções,caso o resultado da condicional seja falso\n");
                                    printf("\nDe modo geral a condicional composta executa um bloco de \n");
                                    printf("\ncomandos quando a condicional da instrução if for falsa.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t3 == 2) // opção 2
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Estrutura do if-else]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nif(condição){\n");
                                    printf("\n<Bloco de instruções>\n");
                                    printf("\n}else{\n");
                                    printf("\n<Bloco de instruções>\n");
                                    printf("\n}\n");
                                    printf("\nAo verificar a condicional ,o bloco de comando entre \n");
                                    printf("\nchaves  será executado,porém,caso a condicional seja falsa,\n");
                                    printf("\no bloco de comandos da instrução else será executada.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t3 == 3) // opção 3
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Instrução 'se-senao']\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nPermite a execução de outro bloco de istruções caso\n");
                                    printf("\na condição do 'se' seja falsa. \n");
                                    printf("\nDe modo geral a condicional composta é a execução de \n");
                                    printf("\num bloco de instruções caso o a consicional seja falsa.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t3 == 4) // opção 4
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Estrutura do se-senao]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n\n\nse(condição)entao\n");
                                    printf("\n<Bloco de instruções>\n");
                                    printf("\nsenao\n");
                                    printf("\n<Bloco de instruções>\n");
                                    printf("\nfimse\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t3 == 5) // opção 5
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Switch-case]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nBasicamente é uma maneira de evitar uma quantidade \n");
                                    printf("\nexagerada de instruções if.\n");
                                    printf("\nÉ muito utilizado em estruturas de menu.\n");
                                    printf("\nO valor da variavel escolhida para controle da instrução\n");
                                    printf("\né comparada com o valor da constante,caso o resultado seja verdadeiro\n");
                                    printf("\no bloco de código relacionado ao case será executado.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t3 == 6) // opção 6
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Estrutura do Switch-case]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nswitch(){\n");
                                    printf("\n   case 1:\n");
                                    printf("\n    <Bloco de comandos>\n");
                                    printf("\n   break;\n");
                                    printf("\n   case 2:\n");
                                    printf("\n    <Bloco de comandos>\n");
                                    printf("\n   break,\n");
                                    printf("\n   default:\n");
                                    printf("\n   break,\n");
                                    printf("\n    <Bloco de comandos>\n");
                                    printf("\n            }          \n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t3 == 7) // opção 7
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("[Estrutura do Escolha-Caso]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nescolha(variável)\n");
                                    printf("\n   caso 1\n");
                                    printf("\n    <Bloco de comandos>\n");
                                    printf("\n   caso 2\n");
                                    printf("\n    <Bloco de comandos>\n");
                                    printf("\n   caso 3\n");
                                    printf("\n    <Bloco de comandos>\n");
                                    printf("\n   outrocaso:\n");
                                    printf("\n    <Bloco de comandos>\n");
                                    printf("\nfimescolha\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (pontos == 4) // sistema de pontos para modulo
                                {
                                    pontos++;
                                    mliberados[5] = 1; // aumentado numeros no menu para mostrar modulos liberados através de vetor
                                }
                                // mensagem perguntando se deseja continuar no modulo
                                printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                                b5 = getch();
                                system("cls"); // limpando mensagens a cima
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem falando para concluir o modulo descrito
                            printf("\n\n\n\n\t\t\t\t     Você precisa concluir o módulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
                        }
                    }

                    if (a == 54) // modulo 6
                    {
                        if (pontos >= 5) // tratamento para pesoa
                        {
                            for (co2 = 's'; co2 != 'n' && co2 != 'N'; co2) // laço for para repetir o modulo até o usuario digitar não.
                            {
                                do // do while para tratamento de erro
                                {
                                    system("color 03"); // colorir fundos e letras
                                    system("cls");      // limpando mensagens a cima
                                    printf("\t\t\t\t\t      * * * * * * * * * * * * * *\n");
                                    printf("----------------------------------------------*  Estrutura de repetição *----------------------------------------------\n");
                                    printf("\t\t\t\t\t      * * * * * * * * * * * * * *\n");
                                    printf("\n\n[Estrutura de repetição]\n\n");
                                    if (t6 != 'c' && t6 != 'p') // mensagem de erro caso a char seja incorreto.
                                    {
                                        printf("\n\n                                          Opção não encontrada, digite novamente.\n\n\n\n");
                                    }
                                    printf("digite (P) para Pseudocódigo ou (C) para Linguagem C: ");
                                    t6 = getch();
                                } while (t6 != 'c' && t6 != 'C' && t6 != 'p' && t6 != 'P');
                                if (t6 == 'c' || t6 == 'C') // opção c
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\t\t\t\t\t  [Estruturas de repetição LINGUAGEM C]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nWhile(Enquanto)                          (1)\n");
                                    printf("\nDo...While(faça...Enquanto)              (2)\n");
                                    printf("\nFor(Para)                                (3)\n");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                    printf("qual você deseja acessar?: ");
                                    scanf("%d", &nsc);
                                    switch (nsc)
                                    {
                                    case 1:
                                        system("cls"); // limpando mensagens a cima
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("\n[WHILE(ENQUANTO)]\n\n");
                                        printf("O while é a estrutura de repetição mais simples. Ele repete a execução de um bloco de sentenças enquanto uma condição \n");
                                        printf("permanecer verdadeira. Na primeira vez que a condição se tornar falsa, o while não repetirá a execução do bloco, \n");
                                        printf("e a execução continuará com a sentença ou comando que vem logo após o bloco do while, na seqüência do programa. \n");
                                        printf("\n\tSINTAXE: \n\t\twhile(_condição_)\n\t\t{\n\t\t\t**Instruções**;\n\t\t}\n\n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        break;
                                    case 2:
                                        system("cls"); // limpando mensagens a cima
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("\n[DO...WHILE(FAÇA...ENQUANTO)]\n\n");
                                        printf("Esta estrutura tem um comportamento muito semelhante ao while, com uma diferença crucial: a condição é verificada após\n");
                                        printf("executar o bloco de instruções correspondente. ");
                                        printf("\n\n\tSINTAXE: \n\t\tdo\n\t\t{\n\t\t   **Instruções**;\n\t\t}\n\t\twhile(_condição_);\n\n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        break;
                                    case 3:
                                        system("cls"); // limpando mensagens a cima
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("\n[FOR(PARA)]\n\n");
                                        printf("O For é a estrutura de repetição que utilizamos quando sabemos a quantidade de repetições que um bloco de código deve \n");
                                        printf("ser executado. A sintaxe é composta por três expressões separadas por ponto e vírgula. Elas controlam o início do loop \n");
                                        printf("e as condições de como cada iteração irá executar.\n");
                                        printf("\n\n\tSINTAXE: \n\t\tfor(valor_inicial; condição_final; valor_incremento)\n\t\t{\n\t\t **Instruções**;\n\t\t}\n\n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        break;
                                    default:
                                        system("cls"); // limpando mensagens a cima
                                        printf("\n                                                Estrutura não encontrada\n\n\n");
                                        break;
                                    }
                                }
                                if (t6 == 'p' || t6 == 'P') // opção p
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\t\t\t\t\t[Estruturas de repetição em PSEUDOCÓDIGO]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n(Enquanto)                               (1)\n");
                                    printf("\n(faça...Enquanto)                        (2)\n");
                                    printf("\n(Para)                                   (3)\n");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                    printf("qual você deseja acessar?: ");
                                    scanf("%d", &nsc);
                                    system("cls"); // limpando mensagens a cima
                                    switch (nsc)   // switch case para escolha das opções
                                    {
                                    case 1:
                                        printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                        printf("\n[ENQUANTO]\n\n");
                                        printf("O Enquanto é a estrutura de repetição mais simples. Ele repete a execução de um bloco de sentenças enquanto uma condição \n");
                                        printf("permanecer verdadeira. Na primeira vez que a condição se tornar falsa, o while não repetirá a execução do bloco, \n");
                                        printf("e a execução continuará com a sentença ou comando que vem logo após o bloco do while, na seqüência do programa. \n");
                                        printf("\n\tSINTAXE: \n\t\tenquanto (_condição_) faca\n\t\t***Instruções***\n\t\tfimenquanto\n");
                                        printf("\t\tO \"fimenquanto\" é uma instrução que dara fim a estrutura de repetição ENQUANTO.");
                                        printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                        break;
                                    case 2:
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("\n[FAÇA...ENQUANTO]\n\n");
                                        printf("Esta estrutura tem um comportamento muito semelhante ao ENQUANTO, com uma diferença crucial: a condição é verificada após\n");
                                        printf("executar o bloco de instruções correspondente. ");
                                        printf("\n\tSINTAXE: \n\t\trepita \n\t\t***Instruções***\n\t\tate(_condição_de_parada_)\n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        break;
                                    case 3:
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("\n[PARA]\n\n");
                                        printf("O PARA é a estrutura de repetição que utilizamos quando sabemos a quantidade de repetições que um bloco de código deve \n");
                                        printf("ser executado. A sintaxe é composta por três expressões separadas por ponto e vírgula. Elas controlam o início do loop \n");
                                        printf("e as condições de como cada iteração irá executar.\n");
                                        printf("\n\tSINTAXE: \n\t\tPARA **variável** DE **valor_inicial** ATE **valor_final** PASSO **incremento** FACA");
                                        printf("\n\t\t***Instruções***\n\t\tfimpara\n");
                                        printf("\nO [PASSO **incremento**] é opcional, esse recurso serve pera definir qual o valor do incremento da [**variável**], \n");
                                        printf("por exemplo de 1 em 1 (padrão), de 2 em 2, de 3 em 3, etc. \n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        break;
                                    default:
                                        system("cls"); // limpando mensagens a cima
                                        printf("\n                                                Estrutura não encontrada\n\n\n");
                                        break;
                                    }
                                }
                                if (pontos == 5) // sistema de pontuação de modulos
                                {
                                    pontos++;
                                    mliberados[6] = 1; // aumentado numeros no menu para mostrar modulos liberados através de vetor
                                }
                                // mensagem para escolher se continua no modulo sim ou não.
                                printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                                co2 = getch();
                                system("cls"); // limpando mensagens a cima
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem de erro para o usuario que não acessou o modulo anterior mensionado
                            printf("\n\n\n\n\t\t\t\t     Você precisa concluir o módulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
                        }
                    }
                    if (a == 55) // modulo 7
                    {
                        if (pontos >= 6) // vendo se a pessoa tem ponto suficiente para acessar o modulo
                        {
                            system("cls"); // limpando textos anteriores
                            system("color 43");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                            printf("\n\n--------------------------------------------------------");
                            printf("VETORES---------------------------------------------------------\n\n");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                            printf("\n\nUm vetor é uma variável que possui várias ocorrências de um mesmo tipo. Cada ocorrência é acessada através de um índice;");
                            printf("\nOs vetores também são chamados de arrays ou matrizes unidimensionais por possuírem somente um índice;");
                            printf("\nPara definir um vetor em C deve-se indicar a quantidade de ocorrência que este terá,");
                            printf("\ncolocando na sua definição o valor entre [ ];");
                            printf("\nOs índices de um vetor em C, sempre começarão em zero. Portanto,");
                            printf("\npara se acessar a primeira ocorrência de um vetor deve-se indicar o índice zero");
                            printf("\nOcupam posições contíguas na memória;");
                            printf("\nO índice varia obrigatoriamente de 0 a N-1, onde N é o tamanho do vetor;");
                            printf("\nOs elementos podem ser de qualquer tipo, mas são sempre do mesmo tipo;                                                            ");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                            printf("\n\n        Exemplo: int notas[4];                                                                                          ");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                            printf("\n\n      O vetor tem 4 elementos do tipo inteiro;                                                                                ");
                            printf("\n      Os elementos estão nas posições 0, 1, 2 e 3;                                                                            ");
                            printf("\n      Os elementos são referenciados como notas[0], notas[1], notas[2] e notas[3];                                            ");
                            printf("\n\nCada posição deve ser tratada exatamente como uma variável do tipo do vetor Atribuição de Valores ao Vetor              ");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                            printf("\n\n        Exemplo: int notas[4];                                                                                          ");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                            printf("\n\n      O vetor tem 4 elementos;                                                                                                ");
                            printf("\n      Os elementos estão nas posições 0, 1, 2 e 3;                                                                            ");
                            printf("\n      Os elementos são referenciados como: notas[0],                                                                          ");
                            printf("\n      notas[1], notas[2] e notas[3];                                                                                          ");
                            printf("\n      Atribuição de valores aos elementos do vetor:                                                                           ");
                            printf("\n      notas[0] = 5;                                                                                                           ");
                            printf("\n      notas[1] = 2;                                                                                                           ");
                            printf("\n      notas[2] = 6;                                                                                                           ");
                            printf("\n      notas[3] = 10;                                                                                                          ");
                            printf("\n\nINICIALIZAÇÃO DE VETORES\n");
                            printf("\nint a[4]={1,2,3};");
                            printf("\nCria um vetor de quatro inteiros e inicializa a[0]=1, a[1]=2, e a[2]= 3; a[3] fica valendo zero;");
                            printf("\nint a[]={1,2,3};");
                            printf("\nCria um vetor de apenas três elementos, com inicialização equivalente ao anterior;");
                            printf("\nchar a[3]={'b','k','n'};");
                            printf("\nCria um vetor de três caracteres e inicializa a[0]='b',");
                            printf("\na[1]='k', e a[2]='n';");
                            printf("\nint v[10];");
                            printf("\nCria um vetor de dez posições inteiras, não inicializado.");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                            printf("\n\n\n\n\t\tSintaxe:");
                            printf("\n\n\t\t\ttipo_variável nome_vetor[tamanho];\n\n\n\n");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                            printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

                            if (pontos == 5) // sistema de pontuação de modulos
                            {
                                pontos++;
                                mliberados[6] = 1; // aumentado numeros no menu para mostrar modulos liberados através de vetor
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem para concluir o modulo x primeiro
                            printf("\n\n\n\n\t\t\t\t     Você precisa concluir o módulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
                        }
                    }
                    if (a == 56) // modulo 8 / ajuda
                    {
                        for (b7 = 's'; b7 != 'n' && b7 != 'N'; b7) // laço for para repetição até o usuario digitar 'n'
                        {
                            do // do while para tratamento de erro
                            {
                                system("cls");      // limpando mensagens a cima
                                system("color 08"); // colorir fundos e letras
                                printf("\n\n-------------------------------------------------------MAIS OPÇÕES------------------------------------------------------");
                                printf("\n\n\n                                     Instruções/ajuda                      ( 1 )");
                                printf("\n\n                                         Créditos                          ( 2 )");
                                printf("\n\n\n\n------------------------------------------------------------------------------------------------------------------------");
                                if (ajuda < 1 || ajuda > 2)
                                {
                                    printf("\n                                         Opção não encontrada, Digite novamente.");
                                }
                                printf("\n\n\n\n\n                                                digite o número da opção: ");
                                scanf("%d", &ajuda);
                            } while (ajuda < 1 || ajuda > 2);
                            switch (ajuda)
                            {
                            case 1:
                                system("cls");      // limpando mensagens a cima
                                system("color 08"); // colorir fundos e letras
                                printf("\n\n                                                     INSTRUÇÕES/AJUDA\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n     COMO ULTILIZAR O PROGRAMA?:\n\n");
                                printf("\n  -você consegue ter acesso ao programa através das teclas pré determinas depedendo da ocasião, sendo elas:\n   1,2,3,4,5,6,7,8,9,s,n,c,p,[Enter].\n");
                                printf("\n  -Lembre-se toda vez que você precisar escolher alguma opção por meio de números, escreva o número e pressione [ENTER].\n");
                                printf("\n  -para fechar o programa, espere a mensagem aparecer assim que você fizer qualquer interação.\n");
                                printf("\n  -se você escolher seguir o cronograma, será preciso entrar em um módulo para conseguir liberar o outro. \n");
                                printf("   isso não irá ocorrer caso escolha não seguir o cronograma.");
                                printf("\n\n------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n    QUAL O OBJETIVO DO PROGRAMA?:\n\n");
                                printf("\n  ajudar e instruir calouros dos cursos de exatas que possuem a materia de Algoritimo e Programação 1 (AP1) e, auxiliar");
                                printf("\n  aprendizagem basica sobre linguagens de programação(C e Portugol) e fluxogramas\n\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n    ASSUNTO DOS MÓDULOS RESUMIDO:\n\n");
                                printf("\n  Módulo 1: introdução dos 3 formas de demonstra programação e suas origens sendo elas\n  Pseudocódigo(portugol), Fluxograma e Linguaguem C");
                                printf("\n\n  Módulo 2: conceitos iniciais sobre algoritmos, tipos de dados da linguagem C, tipos de dados em pseudocódico(portugol)\n");
                                printf("\n\n  Módulo 3: conceitos sobre estrutura sequencial através de fluxograma\n");
                                printf("\n\n  Módulo 4: conceitos e exemplos sobre estrutura condicional em linguagem c e pseudocodigo(portugol)\n");
                                printf("\n\n  Módulo 5: conceitos e exemplos sobre estrutura condicional Composta em linguagem c e pseudocodigo(portugol)\n");
                                printf("\n\n  Módulo 6: conceito e exemplos sobre Estruturas de repetição/laços de repetição em linguagem C e Pseudocodigo(portugol)\n");
                                printf("\n\n  Módulo 7: conceitos e exemplos sobre Vetores (uma forma diferente de manipular variaveis)\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                break;
                            case 2:
                                system("cls"); // limpando mensagens a cima
                                printf("\n\n                                                        CRÉDITOS:\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n\n                                                  Programa feito por:");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                                printf("\n\n                                                     Danilo S R Silva");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
                                printf("\n\n                                               Gustavo Santos teixeira");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
                                printf("\n\n                                           Neemias Claudio Oliveira Farias ");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                                printf("<3");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
                                printf("\n\n\n\n\n                               Trabalho final da diciplina Algoritimo e Programação 1.");
                                printf("\n\n                                    Universidade federal de Jatai - GO  (UFJ) 2022");
                                printf("\n\n------------------------------------------------------------------------------------------------------------------------\n\n");
                                break;
                            }
                            // mensagem se deseja continuar no modulo
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                            b7 = getch();
                            system("cls"); // limpando mensagens a cima
                        }
                    }
                    if (a > 56 || a < 49) // tratamento de erro caso o modulo descrito não exista.
                    {
                        system("cls"); // limpando mensagens a cima
                        printf("\n\n\n\n                                                Módulo não encontrado!!!\n\n\n\n\n");
                    }
                    printf("\a");
                    // mensagem para fechar o programa ou escolher outro modulo.
                    printf("\n\t\t\t\t         Para fechar o programa digite ( 0 ) \n\n\t\t\t\t para escolher outro módulo aperte ( QUALQUER TECLA )\n");
                    b = getch();
                    system("cls");      // limpando mensagens a cima
                    system("color 70"); // colorir fundos e letras
                }
            }
            if (b == 48)
            {
                pontosfinais = pow(7, pontos); // pontuaçãozinha para o final, eu pego 5 e elevo a quantidade de modulos liberados.
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("                                                   PONTUAÇÃO %f", pontosfinais);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                system("pause");
            }
            if (b6 == 'n' || b6 == 'N') // caso a pessoa não queira seguir o plano de ensino, tudo é liberado em bloqueio de modulo
            {
                while (b != 48) // laço de repetição while para a seleção do menu continuar voltando até o usuario digitar 0
                {
                    system("cls");                                               // limpando mensagens a cima
                    system("color 70");                                          // colorir fundos e letras
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // colorir letras
                    printf("=======================================================================================================================\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 96); // colorir letras
                    printf("\n\t\t\t\t\t\t   * * * * * * * *   \n");
                    printf("\t\t\t\t\t\t   *  CONTEÚDOS  *   \n");
                    printf("\t\t\t\t\t\t   * * * * * * * *   \n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 94); // colorir letras
                    printf("\t\t\t\t\t     MÓDULOS LIBERADOS: TODOS!!!     \n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // colorir letras
                    printf("\n=======================================================================================================================\n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 112); // colorir letras
                    // menu principal
                    printf("                                                   ***************\n");
                    printf("\nintrodução a programação                           |  Módulo  1  |\n");
                    printf("Conceitos iniciais                                 |  Módulo  2  |\n");
                    printf("Estrutura Sequencial                               |  Módulo  3  |\n");
                    printf("Estrutura condicional                              |  Módulo  4  |\n");
                    printf("Estrutura condicional composta e switch-case       |  Módulo  5  |\n");
                    printf("Estrutura de Repetição                             |  Módulo  6  |\n");
                    printf("Vetores                                            |  Módulo  7  |\n");
                    printf("\n                                                   ***************\n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 124); // colorir letras
                    printf("Mais Opções/ajuda:                                 |  Digite  8  |                                                      \n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 112); // colorir letras

                    printf("\n\nInforme o número módulo que você deseja acessar :  ");
                    a = getch();
                    if (a == 49) // modulo 1
                    {

                        co = 's';
                        system("color 09"); // colorir fundos e letras
                        do                  // laço de repetição do while para repetir as opções do modulo até o usuario digitar n na opção sair
                        {
                            do // laço de repetição do while para tratamento de erro caso o usuario digite um numero errado
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-----------------------------------------------INTRODUÇÃO A PROGRAMAÇÃO-------------------------------------------------\n\n");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf(" digite ( 1 ) para introdução do fluxograma\n\n");
                                printf(" digite ( 2 ) para a introdução do Pseudocódigo(portugol)\n\n");
                                printf(" digite ( 3 ) para introdução da linguagem c\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                if (n < 1 || n > 3) // tratamento de erro caso o numero seja incorreto.
                                {
                                    printf("\n\n                                          Opção não encontrada, digite novamente.\n");
                                }
                                printf("\n\n em qual você deseja entrar:  ");
                                scanf("%d", &n);

                            } while (n < 1 || n > 3);
                            switch (n) // switch case para mostrar as opções escolhidas.
                            {
                            case 1:
                                system("cls"); // limpando mensagens a cima
                                printf("\n=======================================================================================================================\n");
                                printf("\t\t\t\t\t       * * * * * * * * *\n");
                                printf("\t\t\t\t\t       *   Fluxograma  *\n");
                                printf("\t\t\t\t\t       * * * * * * * * *\n");
                                printf("\n=======================================================================================================================\n");
                                printf("\n[Fluxograma]\n");
                                printf("\n=======================================================================================================================\n");
                                printf("\nFluxograma: é um tipo de diagrama, e pode ser entendido como uma representação esquemática de um processo ou algoritmo,\n");
                                printf("\nmuitas vezes feito através de gráficos que ilustram de forma descomplicada a transição de informações entre os elementos\n");
                                printf("\nque o compõem, ou seja, é a sequência operacional do desenvolvimento de um processo, o qual caracteriza: o trabalho que\n");
                                printf("\nestá sendo realizado, o tempo necessário para sua realização, a distância percorrida pelos documentos, quem está\n");
                                printf("\nrealizando o trabalho e como ele flui entre os participantes deste processo. Os fluxogramas são muito utilizados em\n");
                                printf("\nprojetos de software para representar a lógica interna dos programas, mas podem também ser usados para desenhar\n");
                                printf("\nprocessos de negócio e o workflow que envolve diversos atores corporativos no exercício de suas atribuições.[1]\n");
                                printf("\nO diagrama de fluxo de dados (DFD) utiliza do fluxograma para modelagem e documentação de sistemas computacionais.\n");
                                printf("\nO termo fluxograma designa uma representação gráfica de um determinado processo ou fluxo de trabalho,\n");
                                printf("\nefetuado geralmente com recurso a figuras geométricas normalizadas e as setas unindo essas figuras geométricas.\n");
                                printf("\nAtravés desta representaçãográfica é possível compreender de forma rápida e fácil a transição de informações\n");
                                printf("\nou documentos entre os elementos que participam no processo em causa. O fluxograma pode ser definido também como\n");
                                printf("\no gráfico em que se representa o percurso ou caminho percorrido por certo elemento\n");
                                printf("\n(por exemplo, um determinado documento), através dos vários departamentos da organização, bem como o tratamento\n");
                                printf("\nque cada um vai lhe dando. A existência de fluxogramas para cada um dos processos é fundamental para a\n");
                                printf("\nsimplificação e racionalização do trabalho, permitindo a compreensão e posterior otimização dos processos desenvolvidos\n");
                                printf("\nem cada departamento ou área da organização.\n\n");
                                printf("=======================================================================================================================\n");
                                break;
                            case 2:
                                system("cls"); // limpando mensagens a cima
                                printf("\n=======================================================================================================================\n");
                                printf("\t\t\t\t\t       * * * * * * * * *\n");
                                printf("\t\t\t\t\t       *  Pseudocódigo *\n");
                                printf("\t\t\t\t\t       * * * * * * * * *\n");
                                printf("\n=======================================================================================================================\n");
                                printf("\n[Pseudocódigo]\n");
                                printf("\n=======================================================================================================================\n");
                                printf("\nPseudocódigo é uma forma genérica de escrever um algoritmo, utilizando uma linguagem simples\n");
                                printf("\n(nativa a quem o escreve, de forma a ser entendida por qualquer pessoa) sem necessidade de\n");
                                printf("\nconhecer a sintaxe de nenhuma linguagem de programação. Um exemplo de pseudocódigo é o Portugol,\n");
                                printf("\nque utiliza o compilador Visualg ou Portugol Viana que pode ser baixado do portal de software livre SourceForge.\n");
                                printf("\nOs livros sobre a ciência de computação utilizam frequentemente o pseudocódigo para ilustrar os seus exemplos,\n");
                                printf("\nde forma que todos os programadores possam entendê-los (independentemente da linguagem que utilizem).\n");
                                printf("\nNo caso da língua portuguesa existem alguns interpretadores de pseudocódigo, nenhum tem a projecção das\n");
                                printf("\nlinguagens Pascal ou BASIC, que no caso da língua inglesa se assemelham bastante a um pseudo-código.\n");
                                printf("=======================================================================================================================\n");
                                break;
                            case 3:

                                system("cls"); // limpando mensagens a cima
                                printf("\n=======================================================================================================================\n");
                                printf("\t\t\t\t\t       * * * * * * * * *\n");
                                printf("\t\t\t\t\t       *  Linguagem C  *\n");
                                printf("\t\t\t\t\t       * * * * * * * * *\n");
                                printf("\n=======================================================================================================================\n");
                                printf("\n[Linguagem C]\n");
                                printf("\n=======================================================================================================================\n");
                                printf("O foco inicial da Linguagem C era o desenvolvimento de sistemas \n");
                                printf("\noperacionais e compiladores.Sua estrutura e seu nome provêm de uma linguagem anterior B.\n");
                                printf("\nFoi usada na construção de uma nova versão do \n");
                                printf("\nsistema operacional Unix.Quase todos os grandes sistemas operacionais \n");
                                printf("\nsão construídos em C/C++.No ano de 1978 foi publicado o livro: The C Programming \n");
                                printf("\nLanguage por Kernigham & Ritchie,tornando a linguagem conhecida.No início dos anos 80,passou a ser reconhecida \n");
                                printf("\ncomo uma linguagem de propósito geral.A padronização da linguagem era uma necessidade real. \n");
                                printf("\nA padronização foi iniciada pela ANSI ? American National Standard Institute ? em 1983 e \n");
                                printf("\nfinalizada em 1989.Esta linguagem precisava prover acesso de baixo nível ao hardware \n");
                                printf("\n(PCU, I/Os e periféricos) e se entender bem com o Assembly.\n");
                                printf("\nEla é linguagem procedural, modular,estruturada e multiplataforma,onde \n");
                                printf("\ngeralmente é compilada para o código de máquina.\n");
                                printf("\nA linguagem C inspirou a criação de muitas outras linguagens \n");
                                printf("\nde programação mais recentes, como C++, Java, C#, JavaScript, Perl, PHP. \n");
                                printf("=======================================================================================================================\n");
                                break;
                            default:
                                break;
                            }

                            // mensagem perguntando se deseja continuar no modulo
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                            co = getch();
                            system("cls"); // limpando mensagens a cima
                        } while (co != 'n' && co != 'N');
                    }
                    if (a == 50) // modulo 2
                    {
                        b2 = '0';
                        system("color 04"); // colorir fundos e letras
                        system("cls");      // limpando mensagens a cima
                        while (b2 != 'n' && b2 != 'N')
                        {
                            do // laço do while tratamento de erro caso um numero incorreto seja inserido.
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-------------------------------------------------CONCEITOS INICIAIS----------------------------------------------------\n\n");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------");
                                printf("\n\nAlgoritmo                                1\n");
                                printf("\nTipos de dados em C                      2\n");
                                printf("\nTipos de dados em pseudocódio            3\n");
                                printf("\nOperadores                               4\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                if (t1 < 1 || t1 > 4) // tratamento de erro caso um numero incorreto seja inserido.
                                {
                                    printf("\n\n                                          Opção não encontrada, digite novamente.\n");
                                }
                                printf("\n\nInforme o número do conceito a ser visto ?:  ");
                                scanf("%d", &t1);
                            } while (t1 < 1 || t1 > 4);
                            system("cls"); // limpando mensagens a cima

                            if (t1 == 1) // opção 1
                            {

                                printf("\n=======================================================================================================================\n");
                                printf("\t\t\t\t\t\t   * * * * * * * *\n");
                                printf("\t\t\t\t\t\t   *  Algoritmo  *\n");
                                printf("\t\t\t\t\t\t   * * * * * * * *\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("É um conjunto de instruções para realizar determinada tarefa.");
                                printf("Um exemplo claro de algoritmo é uma receita,onde há passos \nexplicados de maneira ");
                                printf("especifica,seguindo um conjundo de regras relacionadas a linguagem escolhida.");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t1 == 2) // opção 2
                            {
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Tipos de dados na Linguagem C]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                printf("\nDados do tipo 'int' : \n");
                                printf("\nSão dados que não possuem casas decimais(1,2,3...),");
                                printf("podendo ser positivo,negativo e nulo.\n");
                                printf("\nDados do tipo 'float' :\n");
                                printf("\nSão dados que possuem casas decimais(1.1,.1.2,...)");
                                printf("\n\nDados do tipo 'char':\n");
                                printf("\nSão cadeias de caracteres.");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t1 == 3) // opção 3
                            {
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Tipos de dados no pseudocódigo]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                printf("\nDados do tipo inteiro: \n");
                                printf("\nSão dados que não possuem casas decimais(1,2,3...),");
                                printf("podendo ser positivo,negativo e nulo.\n");
                                printf("\nDados do tipo real:\n");
                                printf("\nSão dados que possuem casas decimais(1.1,.1.2,...)");
                                printf("\n\nDados do tipo caracter:\n");
                                printf("\nSão cadeias de caracteres.");
                                printf("\n\nDados do tipo lógico:\n");
                                printf("\nBooleano,com valores relacionados a verdadeiro ou falso.");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                            }

                            if (t1 == 4) // opção 4
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("[Operadores Arítmeticos]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nMultiplicação                (*)\n");
                                printf("\nDivisão                      (/)\n");
                                printf("\nDivisão inteira              (Barra invertida)\n");
                                printf("\nExponeciação                 (^)\n");
                                printf("\nSoma                         (+)\n");
                                printf("\nSubtração                    (-)\n");
                                printf("\nincremento em 1 unidade      (++)\n");
                                printf("\ndecremento em 1 unidade      (+=)\n");
                                printf("\nincremento genérico          (++)\n");
                                printf("\ndecremento genérico          (-=)\n");
                                printf("\natribuição com multiplicação (*=)\n");
                                printf("\natribuição por divisão       (/=)\n");
                                printf("\n=======================================================================================================================\n");
                            }
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                            b2 = getch();
                            system("cls"); // limpando mensagens a cima
                        }
                    }

                    if (a == 51) // modulo 3
                    {

                        system("color 02"); // colorir fundos e letras
                        system("cls");      // limpando mensagens a cima
                        printf("\n=======================================================================================================================\n");
                        printf("\t\t\t\t\t\t* * * * * * * * * * * * * \n");
                        printf("\t\t\t\t\t\t* Estrutura Sequencial  *\n");
                        printf("\t\t\t\t\t\t* * * * * * * * * * * * * \n");
                        printf("\n=======================================================================================================================\n");
                        printf("\nComo o próprio nome sugere, estrutura sequencial é um conjunto de intruções no qual cada instrução será \nexecutada em sequencia.\n");
                        printf("\nÉ uma estrutura de controle básica, em que os comandos em um programa (função) \n");
                        printf("\nsão executados um após o outro (na ordem em que são especificados).\n");
                        printf("Primeiramente, é feita a declaração das variáveis, posteriormente, são executados os comandos de entrada\n e/ou atribuição. \n");
                        printf("Na sequência é realizado o processamento dos dados e, no final, realiza-se a saída de dados.\n");
                        printf("-----------------------------------------------------------------------------------------------------------------------\n\n");
                        printf("\t\t\t\t\t\t          * * * * *       \n");
                        printf("\t\t\t\t\t\t        *           *     \n");
                        printf("\t\t\t\t\t\t       *   Início    *    \n");
                        printf("\t\t\t\t\t\t        *           *     \n");
                        printf("\t\t\t\t\t\t          * * * * *       \n");
                        printf("\t\t\t\t\t\t             |            \n");
                        printf("\t\t\t\t\t\t             V            \n");
                        printf("\t\t\t\t\t\t       * * * * * * * * *  \n");
                        printf("\t\t\t\t\t\t      *   Entrada    *    \n");
                        printf("\t\t\t\t\t\t     *    de dados  *     \n");
                        printf("\t\t\t\t\t\t    * * * * * * * *       \n");
                        printf("\t\t\t\t\t\t             |            \n");
                        printf("\t\t\t\t\t\t             V            \n");
                        printf("\t\t\t\t\t\t     * * * * * * * * * *  \n");
                        printf("\t\t\t\t\t\t     *  Processamento  *  \n");
                        printf("\t\t\t\t\t\t     * * * * * * * * * *  \n");
                        printf("\t\t\t\t\t\t             |            \n");
                        printf("\t\t\t\t\t\t             V            \n");
                        printf("\t\t\t\t\t\t       * * * * * * * *    \n");
                        printf("\t\t\t\t\t\t       *  Saída de   *    \n");
                        printf("\t\t\t\t\t\t       *   dados     *    \n");
                        printf("\t\t\t\t\t\t       *       *  *  *    \n");
                        printf("\t\t\t\t\t\t         * * *            \n");
                        printf("\t\t\t\t\t\t             |            \n");
                        printf("\t\t\t\t\t\t             V            \n");
                        printf("\t\t\t\t\t\t          * * * * *       \n");
                        printf("\t\t\t\t\t\t        *           *     \n");
                        printf("\t\t\t\t\t\t       *     Fim     *    \n");
                        printf("\t\t\t\t\t\t        *           *     \n");
                        printf("\t\t\t\t\t\t          * * * * *       \n\n");
                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                        printf("\nDe um modo geral a estrutura sequencial mais básica consiste de:\n");
                        printf("\n-Entrada de dados\n");
                        printf("\n-Processamento\n");
                        printf("\n-Saída de dados\n");
                        printf("\n=======================================================================================================================\n");
                        printf("=======================================================================================================================\n");
                    }

                    if (a == 52) // modulo 4
                    {

                        b4 = 's';
                        system("color 06"); // colorir fundos e letras
                        system("cls");      // limpando mensagens a cima

                        while (b4 != 'n' && b4 != 'N') // laço while até o usuario colocar 'n' para não continuar no modulo
                        {
                            do // laço do while para tratamento de erro caso algum numero seja incorreto.
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-------------------------------------------------ESTRUTURA CONDICIONAL--------------------------------------------------\n\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nEstrutura condicional                     1\n");
                                printf("\nOperadores lógicos                        2\n");
                                printf("\nInstrução if                              3\n");
                                printf("\nEstrutura do if                           4\n");
                                printf("\nConectores na linguagem  C                5\n");
                                printf("\nInstrução se                              6\n");
                                printf("\nEstrutura do se                           7\n");
                                printf("\nConectores em pseudocódigo                8\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                if (t2 < 1 || t2 > 8) // mensagem para escolhas não existentes.
                                {
                                    printf("\n\n                                          Opção não encontrada, digite novamente.\n\n");
                                }
                                printf("\nInforme o número do conceito a ser visto ?   ");
                                scanf("%d", &t2);
                            } while (t2 < 1 || t2 > 8);
                            system("cls"); // limpando mensagens a cima
                            if (t2 == 1)   // opção 1
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Estrutura condicional]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                printf("\nUma instrução é uma expressão seguida de ponto e vírgula.\n");
                                printf("\nBlocos são o agrupamento de várias intruções. \n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                            }
                            if (t2 == 2) // opção 2
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Operadores lógicos]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nMaior do que                  (>)\n");
                                printf("\nMenor do que                  (<)\n");
                                printf("\nMaior ou igual                (>=)\n");
                                printf("\nMenor ou igual                (<=)\n");
                                printf("\nDiferente                     (!=)\n");
                                printf("\nIgual                         (==)\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                            }
                            if (t2 == 3) // opção 3
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Instrução if]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nÉ uma estrutura de teste básica encontrada em todas as linguagens.\n");
                                printf("\nRealiza um conjunto de instruções caso a condição seja verdadeira.\n");
                                printf("\nA condição deve ficar entre parênteses.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                            }

                            if (t2 == 4) // opção 4
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Estrutura do if]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                printf("\nif(condição){\n");
                                printf("\n<Bloco de instruções>\n");
                                printf("\n}\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }

                            if (t2 == 5) // opção 5
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Conector \"e\"(&&)]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[&&]  --> (e)\n");
                                printf("\nExemplo:\n");
                                printf("\nif(a==b && b==c){\n");
                                printf("\n<Bloco de instruções>\n");
                                printf("\n}\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Conector \"ou\"(||)]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[||]  --> (ou)\n");
                                printf("\nExemplo:\n");
                                printf("\nif(a==b || b==c)\n{");
                                printf("\n<Bloco de condições>\n");
                                printf("\n}\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }

                            if (t2 == 6) // opção 6
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Instrução se ]\n");
                                printf("\nSemelhante a instrução if na Linguagem C,ela executa\n");
                                printf("\num conjunto de instruções caso a condição seja verdadeira.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }

                            if (t2 == 7) // opção 7
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Estrutura do se ]\n");
                                printf("\nse(a>=x) entao\n");
                                printf("\n<Bloco de instruções>\n");
                                printf("\nfimse\n");
                                printf("\n\n Caso a condição entre parênteses seja verdadeira\n");
                                printf("\nas instruções serão executadas.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t2 == 8) // opção 8
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Conector 'e']\n");
                                printf("\nExemplo:\n");
                                printf("\nse(a>b e b>c) entao\n");
                                printf("\n<Bloco de comandos>\n");
                                printf("\nfimse\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Conector 'ou']\n");
                                printf("\nse(a>b ou b<c)entao\n");
                                printf("\n<Bloco de instruções>\n");
                                printf("\nfimse\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }

                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                            b4 = getch();
                            system("cls"); // limpando mensagens a cima
                        }
                    }

                    if (a == 53) // modulo 5
                    {
                        b5 = 's';

                        system("color 0b");            // colorir fundos e letras
                        system("cls");                 // limpando mensagens a cima
                        while (b5 != 'n' && b5 != 'N') // laço while para repetir caso o usuario queira continuar no modulo
                        {
                            do // tratamento de erro caso um numero seja incorreto
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("---------------------------------------Estrutura condicional composta e switch-case------------------------------------");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n\nInstrução if-else            \t\t1\n");
                                printf("\nEstrutura do if-else         \t\t2\n");
                                printf("\nInstrução 'se-senao'         \t\t3\n");
                                printf("\nEstrutura do se-senao        \t\t4\n");
                                printf("\nSwitch-case                  \t\t5\n");
                                printf("\nEstrutura do Switch-case     \t\t6\n");
                                printf("\nEstrutura do escolha-caso    \t\t7\n");
                                if (t3 < 1 || t3 > 7) // mensagem de numero incorreto
                                {
                                    printf("\n\n                                          Opção não encontrada, digite novamente.\n");
                                }
                                printf("\n\n\nInforme o número do  conceito a ser visto :   ");
                                scanf("%d", &t3);
                            } while (t3 < 1 || t3 > 7);
                            system("cls"); // limpando mensagens a cima
                            if (t3 == 1)   // opção 1
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Instrução if-else]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nA instrução if-else permite a execução de outro bloco\n");
                                printf("\nde instruções,caso o resultado da condicional seja falso\n");
                                printf("\nDe modo geral a condicional composta executa um bloco de \n");
                                printf("\ncomandos quando a condicional da instrução if for falsa.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t3 == 2) // opção 2
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Estrutura do if-else]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nif(condição){\n");
                                printf("\n<Bloco de instruções>\n");
                                printf("\n}else{\n");
                                printf("\n<Bloco de instruções>\n");
                                printf("\n}\n");
                                printf("\nAo verificar a condicional ,o bloco de comando entre \n");
                                printf("\nchaves  será executado,porém,caso a condicional seja falsa,\n");
                                printf("\no bloco de comandos da instrução else será executada.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t3 == 3) // opção 3
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Instrução 'se-senao']\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nPermite a execução de outro bloco de istruções caso\n");
                                printf("\na condição do 'se' seja falsa. \n");
                                printf("\nDe modo geral a condicional composta é a execução de \n");
                                printf("\num bloco de instruções caso o a consicional seja falsa.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t3 == 4) // opção 4
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Estrutura do se-senao]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n\n\nse(condição)entao\n");
                                printf("\n<Bloco de instruções>\n");
                                printf("\nsenao\n");
                                printf("\n<Bloco de instruções>\n");
                                printf("\nfimse\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t3 == 5) // opção 5
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Switch-case]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nBasicamente é uma maneira de evitar uma quantidade \n");
                                printf("\nexagerada de instruções if.\n");
                                printf("\nÉ muito utilizado em estruturas de menu.\n");
                                printf("\nO valor da variavel escolhida para controle da instrução\n");
                                printf("\né comparada com o valor da constante,caso o resultado seja verdadeiro\n");
                                printf("\no bloco de código relacionado ao case será executado.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t3 == 6) // opção 6
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Estrutura do Switch-case]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nswitch(){\n");
                                printf("\n   case 1:\n");
                                printf("\n    <Bloco de comandos>\n");
                                printf("\n   break;\n");
                                printf("\n   case 2:\n");
                                printf("\n    <Bloco de comandos>\n");
                                printf("\n   break,\n");
                                printf("\n   default:\n");
                                printf("\n   break,\n");
                                printf("\n    <Bloco de comandos>\n");
                                printf("\n        }              \n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t3 == 7) // opção 7
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("[Estrutura do Escolha-Caso]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nescolha(variável)\n");
                                printf("\n   caso 1\n");
                                printf("\n    <Bloco de comandos>\n");
                                printf("\n   caso 2\n");
                                printf("\n    <Bloco de comandos>\n");
                                printf("\n   caso 3\n");
                                printf("\n    <Bloco de comandos>\n");
                                printf("\n   outrocaso:\n");
                                printf("\n    <Bloco de comandos>\n");
                                printf("\nfimescolha\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            // mensagem perguntando se deseja continuar no modulo
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                            b5 = getch();
                            system("cls"); // limpando mensagens a cima
                        }
                    }
                    if (a == 54) // modulo 6
                    {
                        for (co2 = 's'; co2 != 'n' && co2 != 'N'; co2) // laço for para repetir o modulo até o usuario digitar não.
                        {
                            do // do while para tratamento de erro
                            {
                                system("color 03"); // colorir fundos e letras
                                system("cls");      // limpando mensagens a cima
                                printf("\t\t\t\t\t      * * * * * * * * * * * * * *\n");
                                printf("----------------------------------------------*  Estrutura de repetição *----------------------------------------------\n");
                                printf("\t\t\t\t\t      * * * * * * * * * * * * * *\n");
                                printf("\n\n[Estrutura de repetição]\n\n");
                                if (t6 != 'c' && t6 != 'p') // mensagem de erro caso a char seja incorreto.
                                {
                                    printf("\n\n                                          Opção não encontrada, digite novamente.\n\n\n\n");
                                }
                                printf("digite (P) para Pseudocódigo ou (C) para Linguagem C: ");
                                t6 = getch();
                            } while (t6 != 'c' && t6 != 'C' && t6 != 'p' && t6 != 'P');
                            if (t6 == 'c' || t6 == 'C') // opção c
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\t\t\t\t\t  [Estruturas de repetição LINGUAGEM C]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nWhile(Enquanto)                          (1)\n");
                                printf("\nDo...While(faça...Enquanto)              (2)\n");
                                printf("\nFor(Para)                                (3)\n");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                printf("qual você deseja acessar?: ");
                                scanf("%d", &nsc);
                                switch (nsc)
                                {
                                case 1:
                                    system("cls"); // limpando mensagens a cima
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[WHILE(ENQUANTO)]\n\n");
                                    printf("O while é a estrutura de repetição mais simples. Ele repete a execução de um bloco de sentenças enquanto uma condição \n");
                                    printf("permanecer verdadeira. Na primeira vez que a condição se tornar falsa, o while não repetirá a execução do bloco, \n");
                                    printf("e a execução continuará com a sentença ou comando que vem logo após o bloco do while, na seqüência do programa. \n");
                                    printf("\n\tSINTAXE: \n\t\twhile(_condição_)\n\t\t{\n\t\t\t**Instruções**;\n\t\t}\n\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    break;
                                case 2:
                                    system("cls"); // limpando mensagens a cima
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[DO...WHILE(FAÇA...ENQUANTO)]\n\n");
                                    printf("Esta estrutura tem um comportamento muito semelhante ao while, com uma diferença crucial: a condição é verificada após\n");
                                    printf("executar o bloco de instruções correspondente. ");
                                    printf("\n\n\tSINTAXE: \n\t\tdo\n\t\t{\n\t\t   **Instruções**;\n\t\t}\n\t\twhile(_condição_);\n\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    break;
                                case 3:
                                    system("cls"); // limpando mensagens a cima
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[FOR(PARA)]\n\n");
                                    printf("O For é a estrutura de repetição que utilizamos quando sabemos a quantidade de repetições que um bloco de código deve \n");
                                    printf("ser executado. A sintaxe é composta por três expressões separadas por ponto e vírgula. Elas controlam o início do loop \n");
                                    printf("e as condições de como cada iteração irá executar.\n");
                                    printf("\n\n\tSINTAXE: \n\t\tfor(valor_inicial; condição_final; valor_incremento)\n\t\t{\n\t\t **Instruções**;\n\t\t}\n\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    break;
                                default:
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n                                                Estrutura não encontrada\n\n\n");
                                    break;
                                }
                            }
                            if (t6 == 'p' || t6 == 'P') // opção p
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\t\t\t\t\t[Estruturas de repetição em PSEUDOCÓDIGO]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n(Enquanto)                               (1)\n");
                                printf("\n(faça...Enquanto)                        (2)\n");
                                printf("\n(Para)                                   (3)\n");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                printf("qual você deseja acessar?: ");
                                scanf("%d", &nsc);
                                system("cls"); // limpando mensagens a cima
                                switch (nsc)   // switch case para escolha das opções
                                {
                                case 1:
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                    printf("\n[ENQUANTO]\n\n");
                                    printf("O Enquanto é a estrutura de repetição mais simples. Ele repete a execução de um bloco de sentenças enquanto uma condição \n");
                                    printf("permanecer verdadeira. Na primeira vez que a condição se tornar falsa, o while não repetirá a execução do bloco, \n");
                                    printf("e a execução continuará com a sentença ou comando que vem logo após o bloco do while, na seqüência do programa. \n");
                                    printf("\n\tSINTAXE: \n\t\tenquanto (_condição_) faca\n\t\t***Instruções***\n\t\tfimenquanto\n");
                                    printf("\t\tO \"fimenquanto\" é uma instrução que dara fim a estrutura de repetição ENQUANTO.");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                case 2:
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[FAÇA...ENQUANTO]\n\n");
                                    printf("Esta estrutura tem um comportamento muito semelhante ao ENQUANTO, com uma diferença crucial: a condição é verificada após\n");
                                    printf("executar o bloco de instruções correspondente. ");
                                    printf("\n\tSINTAXE: \n\t\trepita \n\t\t***Instruções***\n\t\tate(_condição_de_parada_)\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    break;
                                case 3:
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[PARA]\n\n");
                                    printf("O PARA é a estrutura de repetição que utilizamos quando sabemos a quantidade de repetições que um bloco de código deve \n");
                                    printf("ser executado. A sintaxe é composta por três expressões separadas por ponto e vírgula. Elas controlam o início do loop \n");
                                    printf("e as condições de como cada iteração irá executar.\n");
                                    printf("\n\tSINTAXE: \n\t\tPARA **variável** DE **valor_inicial** ATE **valor_final** PASSO **incremento** FACA");
                                    printf("\n\t\t***Instruções***\n\t\tfimpara\n");
                                    printf("\nO [PASSO **incremento**] é opcional, esse recurso serve pera definir qual o valor do incremento da [**variável**], \n");
                                    printf("por exemplo de 1 em 1 (padrão), de 2 em 2, de 3 em 3, etc. \n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    break;
                                default:
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n                                                Estrutura não encontrada\n\n\n");
                                    break;
                                }
                            }
                            // mensagem para escolher se continua no modulo sim ou não.
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                            co2 = getch();
                            system("cls"); // limpando mensagens a cima
                        }
                    }
                    if (a == 55) // modulo 7
                    {
                        system("cls"); // limpando textos anteriores
                        system("color 43");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                        printf("\n\n--------------------------------------------------------");
                        printf("VETORES---------------------------------------------------------\n\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                        printf("\n\nUm vetor é uma variável que possui várias ocorrências de um mesmo tipo. Cada ocorrência é acessada através de um índice;");
                        printf("\nOs vetores também são chamados de arrays ou matrizes unidimensionais por possuírem somente um índice;");
                        printf("\nPara definir um vetor em C deve-se indicar a quantidade de ocorrência que este terá,");
                        printf("\ncolocando na sua definição o valor entre [ ];");
                        printf("\nOs índices de um vetor em C, sempre começarão em zero. Portanto,");
                        printf("\npara se acessar a primeira ocorrência de um vetor deve-se indicar o índice zero");
                        printf("\nOcupam posições contíguas na memória;");
                        printf("\nO índice varia obrigatoriamente de 0 a N-1, onde N é o tamanho do vetor;");
                        printf("\nOs elementos podem ser de qualquer tipo, mas são sempre do mesmo tipo;                                                            ");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                        printf("\n\n        Exemplo: int notas[4];                                                                                          ");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                        printf("\n\n      O vetor tem 4 elementos do tipo inteiro;                                                                                ");
                        printf("\n      Os elementos estão nas posições 0, 1, 2 e 3;                                                                            ");
                        printf("\n      Os elementos são referenciados como notas[0], notas[1], notas[2] e notas[3];                                            ");
                        printf("\n\nCada posição deve ser tratada exatamente como uma variável do tipo do vetor Atribuição de Valores ao Vetor              ");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                        printf("\n\n        Exemplo: int notas[4];                                                                                          ");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                        printf("\n\n      O vetor tem 4 elementos;                                                                                                ");
                        printf("\n      Os elementos estão nas posições 0, 1, 2 e 3;                                                                            ");
                        printf("\n      Os elementos são referenciados como: notas[0],                                                                          ");
                        printf("\n      notas[1], notas[2] e notas[3];                                                                                          ");
                        printf("\n      Atribuição de valores aos elementos do vetor:                                                                           ");
                        printf("\n      notas[0] = 5;                                                                                                           ");
                        printf("\n      notas[1] = 2;                                                                                                           ");
                        printf("\n      notas[2] = 6;                                                                                                           ");
                        printf("\n      notas[3] = 10;                                                                                                          ");
                        printf("\n\nINICIALIZAÇÃO DE VETORES\n");
                        printf("\nint a[4]={1,2,3};");
                        printf("\nCria um vetor de quatro inteiros e inicializa a[0]=1, a[1]=2, e a[2]= 3; a[3] fica valendo zero;");
                        printf("\nint a[]={1,2,3};");
                        printf("\nCria um vetor de apenas três elementos, com inicialização equivalente ao anterior;");
                        printf("\nchar a[3]={'b','k','n'};");
                        printf("\nCria um vetor de três caracteres e inicializa a[0]='b',");
                        printf("\na[1]='k', e a[2]='n';");
                        printf("\nint v[10];");
                        printf("\nCria um vetor de dez posições inteiras, não inicializado.");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                        printf("\n\n\n\n\t\tSintaxe:");
                        printf("\n\n\t\t\ttipo_variável nome_vetor[tamanho];\n\n\n\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                    }
                    if (a == 56) // modulo 8 / ajuda
                    {
                        for (b7 = 's'; b7 != 'n' && b7 != 'N'; b7) // laço for para repetição até o usuario digitar 'n'
                        {
                            do // do while para tratamento de erro
                            {
                                system("cls");      // limpando mensagens a cima
                                system("color 08"); // colorir fundos e letras
                                printf("\n\n-------------------------------------------------------MAIS OPÇÕES------------------------------------------------------");
                                printf("\n\n\n                                     Instruções/ajuda                      ( 1 )");
                                printf("\n\n                                         Créditos                          ( 2 )");
                                printf("\n\n\n\n------------------------------------------------------------------------------------------------------------------------");
                                if (ajuda < 1 || ajuda > 2)
                                {
                                    printf("\n                                         Opção não encontrada, Digite novamente.");
                                }
                                printf("\n\n\n\n\n                                                digite o número da opção: ");
                                scanf("%d", &ajuda);
                            } while (ajuda < 1 || ajuda > 2);
                            switch (ajuda)
                            {
                            case 1:
                                system("cls");      // limpando mensagens a cima
                                system("color 08"); // colorir fundos e letras
                                printf("\n\n                                                     INSTRUÇÕES/AJUDA\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n     COMO ULTILIZAR O PROGRAMA?:\n\n");
                                printf("\n  -você consegue ter acesso ao programa através das teclas pré determinas depedendo da ocasião, sendo elas:\n   1,2,3,4,5,6,7,8,9,s,n,c,p,[Enter].\n");
                                printf("\n  -Lembre-se toda vez que você precisar escolher alguma opção por meio de números, escreva o número e pressione [ENTER].\n");
                                printf("\n  -para fechar o programa, espere a mensagem aparecer assim que você fizer qualquer interação.\n");
                                printf("\n  -se você escolher seguir o cronograma, será preciso entrar em um módulo para conseguir liberar o outro. \n");
                                printf("   isso não irá ocorrer caso escolha não seguir o cronograma.");
                                printf("\n\n------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n    QUAL O OBJETIVO DO PROGRAMA?:\n\n");
                                printf("\n  ajudar e instruir calouros dos cursos de exatas que possuem a materia de Algoritimo e Programação 1 (AP1) e, auxiliar");
                                printf("\n  aprendizagem basica sobre linguagens de programação(C e Portugol) e fluxogramas\n\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n    ASSUNTO DOS MÓDULOS RESUMIDO:\n\n");
                                printf("\n  Módulo 1: introdução dos 3 formas de demonstra programação e suas origens sendo elas\n  Pseudocódigo(portugol), Fluxograma e Linguaguem C");
                                printf("\n\n  Módulo 2: conceitos iniciais sobre algoritmos, tipos de dados da linguagem C, tipos de dados em pseudocódico(portugol)\n");
                                printf("\n\n  Módulo 3: conceitos sobre estrutura sequencial através de fluxograma\n");
                                printf("\n\n  Módulo 4: conceitos e exemplos sobre estrutura condicional em linguagem c e pseudocodigo(portugol)\n");
                                printf("\n\n  Módulo 5: conceitos e exemplos sobre estrutura condicional Composta em linguagem c e pseudocodigo(portugol)\n");
                                printf("\n\n  Módulo 6: conceito e exemplos sobre Estruturas de repetição/laços de repetição em linguagem C e Pseudocodigo(portugol)\n");
                                printf("\n\n  Módulo 7: conceitos e exemplo sobre introdução de Vetores (uma forma diferente de manipular variaveis)\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                break;
                            case 2:
                                system("cls"); // limpando mensagens a cima
                                printf("\n\n                                                        CRÉDITOS:\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n\n                                                  Programa feito por:");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                                printf("\n\n                                                     Danilo S R Silva");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
                                printf("\n\n                                               Gustavo Santos teixeira");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
                                printf("\n\n                                           Neemias Claudio Oliveira Farias ");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                                printf("<3");
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
                                printf("\n\n\n\n\n                               Trabalho final da diciplina Algoritimo e Programação 1.");
                                printf("\n\n                                    Universidade federal de Jatai - GO  (UFJ) 2022");
                                printf("\n\n------------------------------------------------------------------------------------------------------------------------\n\n");
                                break;
                            }
                            // mensagem se deseja continuar no modulo
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (não)  \n\n");
                            b7 = getch();
                            system("cls"); // limpando mensagens a cima
                        }
                    }
                    if (a > 56 || a < 49) // tratamento de erro caso o modulo descrito não exista.
                    {
                        system("cls"); // limpando mensagens a cima
                        printf("\n\n\n\n                                                Módulo não encontrado!!!\n\n\n\n\n");
                    }
                    printf("\a");
                    // mensagem para fechar o programa ou escolher outro modulo.
                    printf("\n\t\t\t\t         Para fechar o programa digite ( 0 ) \n\n\t\t\t\t para escolher outro módulo aperte ( QUALQUER TECLA )\n");
                    b = getch();
                    system("cls");      // limpando mensagens a cima
                    system("color 70"); // colorir fundos e letras
                }
            }
            return 0;
        }
    }
}
// sistema caso a pessoa escolha não seguir o cronograma
