#include <conio.h>   //biblioteca ultilizada para colorir o fundo
#include <stdio.h>   //biblioteca padr�o
#include <stdlib.h>  //biblioteca padr�o
#include <locale.h>  //ultilizada para ser possivel a ultiliza��o de acentos pontos e etc...
#include <Windows.h> //biblioteca usada para colorir letras tamb�m
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, a = 1, b = 1, t1 = 1, t2 = 1, t6 = 'c', t3 = 1, n = 1, nsc, pontuacao = 0, ajuda = 1, pontoparamenu = 0, mliberados[8] = {1}, aaa;
    float pontosfinais, pontos = 0;
    char p1, p2, b2, b3, b4, co, co2, b5, b6 = 's', b7;
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     ULTILIZE O PROGRAMA EM MODO JANELA PARA UMA MELHOR EXP�RIENCIA!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t       ");
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
        printf("\n\n\n\n\n\n\n\n\n\n                                          voc� deseja seguir o crograma de estudo?                        \n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 114); // colorir letras
        printf("\n\n\n\t\t\t\tS para (sim)\t\t\t\t\t");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 124); // colorir letras
        printf("N para (n�o)  \n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 112); // colorir letras
        b6 = getch();
        system("cls");                                                     // limpando as mensagens a cima
        if (b6 != 's' && b6 != 'S' && b6 != 'N' && b6 != 'n' && b6 != 'N') // tratamento de erro do cronograma
        {
            system("cls"); // limpando as mensagens a cima
            printf("                                            op��o Invalida! digite novamente");
        }
        else
        {
            if (b6 == 's' || b6 == 'S')
            {

                while (b != 48) // la�o de repeti��o while para a sele��o do menu continuar voltando at� o usuario digitar 0
                {
                    system("cls");                                               // limpando mensagens a cima
                    system("color 70");                                          // colorir fundos e letras
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // colorir letras
                    printf("=======================================================================================================================\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 96); // colorir letras
                    printf("\n\t\t\t\t\t\t   * * * * * * * *   \n");
                    printf("\t\t\t\t\t\t   *  CONTE�DOS  *   \n");
                    printf("\t\t\t\t\t\t   * * * * * * * *   \n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 94); // colorir letras
                    pontoparamenu = 0;
                    for ( i = 0; i < 8; i++) // sistema para mostrar os modulos que est�o liberados no programa
                    {
                        pontoparamenu += (mliberados[i]);
                    }
                    if (pontoparamenu == 1) // variaveis para diferentes mensagens
                    {
                        printf("\t\t\t\t\tM�DULOS LIBERADOS: APENAS O M�DULO 1\n");
                    }
                    if (pontoparamenu == 7) // variaveis para diferentes mensagens
                    {
                        printf("\t\t\t\t\t     M�DULOS LIBERADOS: TODOS!!!     \n");
                    }
                    else
                    {
                        if (pontoparamenu < 7 && pontoparamenu > 1) // variaveis para diferentes mensagens
                        {
                            printf("\t\t\t\t\t    M�DULOS LIBERADOS: DO 1 AO %d:    \n", pontoparamenu);
                        }
                    }
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // colorir letras
                    printf("\n=======================================================================================================================\n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 112); // colorir letras
                    // menu principal
                    printf("                                                   ***************\n");
                    printf("\nintrodu��o a programa��o                           |  M�dulo  1  |\n");
                    printf("Conceitos iniciais                                 |  M�dulo  2  |\n");
                    printf("Estrutura Sequencial                               |  M�dulo  3  |\n");
                    printf("Estrutura condicional                              |  M�dulo  4  |\n");
                    printf("Estrutura condicional composta e switch-case       |  M�dulo  5  |\n");
                    printf("Estrutura de Repeti��o                             |  M�dulo  6  |\n");
                    printf("Vetores                                            |  M�dulo  7  |\n");
                    printf("\n                                                   ***************\n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 124); // colorir letras
                    printf("Mais Op��es/ajuda:                                 |  Digite  8  |                                                      \n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 112); // colorir letras

                    printf("\n\nInforme o n�mero m�dulo que voc� deseja acessar :  ");
                    a = getch(); // usamos getch pra n�o precisar apertar enter e tamb�m para tratamento de erro.
                    if (a == 49) // modulo 1
                    {

                        co = 's';
                        system("color 09"); // colorir fundos e letras
                        do                  // la�o de repeti��o do while para repetir as op��es do modulo at� o usuario digitar n na op��o sair
                        {
                            do // la�o de repeti��o do while para tratamento de erro caso o usuario digite um numero errado
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-----------------------------------------------INTRODU��O A PROGRAMA��O-------------------------------------------------\n\n");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf(" digite ( 1 ) para introdu��o do fluxograma\n\n");
                                printf(" digite ( 2 ) para a introdu��o do Pseudoc�digo(portugol)\n\n");
                                printf(" digite ( 3 ) para introdu��o da linguagem c\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                if (n < 1 || n > 3) // tratamento de erro caso o numero seja incorreto.
                                {
                                    printf("\n\n                                          Op��o n�o encontrada, digite novamente.\n");
                                }
                                printf("\n\n em qual voc� deseja entrar:  ");
                                scanf("%d", &n);

                            } while (n < 1 || n > 3);
                            switch (n) // switch case para mostrar as op��es escolhidas.
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
                                printf("\nFluxograma: � um tipo de diagrama, e pode ser entendido como uma representa��o esquem�tica de um processo ou algoritmo,\n");
                                printf("\nmuitas vezes feito atrav�s de gr�ficos que ilustram de forma descomplicada a transi��o de informa��es entre os elementos\n");
                                printf("\nque o comp�em, ou seja, � a sequ�ncia operacional do desenvolvimento de um processo, o qual caracteriza: o trabalho que\n");
                                printf("\nest� sendo realizado, o tempo necess�rio para sua realiza��o, a dist�ncia percorrida pelos documentos, quem est�\n");
                                printf("\nrealizando o trabalho e como ele flui entre os participantes deste processo. Os fluxogramas s�o muito utilizados em\n");
                                printf("\nprojetos de software para representar a l�gica interna dos programas, mas podem tamb�m ser usados para desenhar\n");
                                printf("\nprocessos de neg�cio e o workflow que envolve diversos atores corporativos no exerc�cio de suas atribui��es.[1]\n");
                                printf("\nO diagrama de fluxo de dados (DFD) utiliza do fluxograma para modelagem e documenta��o de sistemas computacionais.\n");
                                printf("\nO termo fluxograma designa uma representa��o gr�fica de um determinado processo ou fluxo de trabalho,\n");
                                printf("\nefetuado geralmente com recurso a figuras geom�tricas normalizadas e as setas unindo essas figuras geom�tricas.\n");
                                printf("\nAtrav�s desta representa��ogr�fica � poss�vel compreender de forma r�pida e f�cil a transi��o de informa��es\n");
                                printf("\nou documentos entre os elementos que participam no processo em causa. O fluxograma pode ser definido tamb�m como\n");
                                printf("\no gr�fico em que se representa o percurso ou caminho percorrido por certo elemento\n");
                                printf("\n(por exemplo, um determinado documento), atrav�s dos v�rios departamentos da organiza��o, bem como o tratamento\n");
                                printf("\nque cada um vai lhe dando. A exist�ncia de fluxogramas para cada um dos processos � fundamental para a\n");
                                printf("\nsimplifica��o e racionaliza��o do trabalho, permitindo a compreens�o e posterior otimiza��o dos processos desenvolvidos\n");
                                printf("\nem cada departamento ou �rea da organiza��o.\n\n");
                                printf("=======================================================================================================================\n");
                                if (pontuacao == 0) // aumento da pontua��o para o usuario entrar no caso 2
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
                                    printf("\t\t\t\t\t       *  Pseudoc�digo *\n");
                                    printf("\t\t\t\t\t       * * * * * * * * *\n");
                                    printf("\n=======================================================================================================================\n");
                                    printf("\n[Pseudoc�digo]\n");
                                    printf("\n=======================================================================================================================\n");
                                    printf("\nPseudoc�digo � uma forma gen�rica de escrever um algoritmo, utilizando uma linguagem simples\n");
                                    printf("\n(nativa a quem o escreve, de forma a ser entendida por qualquer pessoa) sem necessidade de\n");
                                    printf("\nconhecer a sintaxe de nenhuma linguagem de programa��o. Um exemplo de pseudoc�digo � o Portugol,\n");
                                    printf("\nque utiliza o compilador Visualg ou Portugol Viana que pode ser baixado do portal de software livre SourceForge.\n");
                                    printf("\nOs livros sobre a ci�ncia de computa��o utilizam frequentemente o pseudoc�digo para ilustrar os seus exemplos,\n");
                                    printf("\nde forma que todos os programadores possam entend�-los (independentemente da linguagem que utilizem).\n");
                                    printf("\nNo caso da l�ngua portuguesa existem alguns interpretadores de pseudoc�digo, nenhum tem a projec��o das\n");
                                    printf("\nlinguagens Pascal ou BASIC, que no caso da l�ngua inglesa se assemelham bastante a um pseudo-c�digo.\n");
                                    printf("=======================================================================================================================\n");
                                }
                                else // mensagem para a pessoa precisar entrar no caso 1 antes do caso 2
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n\t\t\tvoc� precisa ver introdu��o do fluxograma (1) antes de acessar esta parte.\n\n");
                                }
                                if (pontuacao == 1) // aumento da pontua��o para o usuario entrar no caso 3
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
                                    printf("\noperacionais e compiladores.Sua estrutura e seu nome prov�m de uma linguagem anterior B.\n");
                                    printf("\nFoi usada na constru��o de uma nova vers�o do \n");
                                    printf("\nsistema operacional Unix.Quase todos os grandes sistemas operacionais \n");
                                    printf("\ns�o constru�dos em C/C++.No ano de 1978 foi publicado o livro: The C Programming \n");
                                    printf("\nLanguage por Kernigham & Ritchie,tornando a linguagem conhecida.No in�cio dos anos 80,passou a ser reconhecida \n");
                                    printf("\ncomo uma linguagem de prop�sito geral.A padroniza��o da linguagem era uma necessidade real. \n");
                                    printf("\nA padroniza��o foi iniciada pela ANSI ? American National Standard Institute ? em 1983 e \n");
                                    printf("\nfinalizada em 1989.Esta linguagem precisava prover acesso de baixo n�vel ao hardware \n");
                                    printf("\n(PCU, I/Os e perif�ricos) e se entender bem com o Assembly.\n");
                                    printf("\nEla � linguagem procedural, modular,estruturada e multiplataforma,onde \n");
                                    printf("\ngeralmente � compilada para o c�digo de m�quina.\n");
                                    printf("\nA linguagem C inspirou a cria��o de muitas outras linguagens \n");
                                    printf("\nde programa��o mais recentes, como C++, Java, C#, JavaScript, Perl, PHP. \n");
                                    printf("=======================================================================================================================\n");
                                }
                                else // mensagem para a pessoa precisar entrar no caso 2 antes do caso 3
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n\t\t     voc� precisa ver introdu��o do Pseudoc�digo (2) antes de acessar esta parte.\n\n");
                                }
                                if (pontuacao == 2) // aumento da pontua��o
                                {
                                    pontuacao++;
                                }
                                break;
                            default:
                                break;
                            }
                            if (pontos == 0) // aumento na pontua��o de modulos para o usuario conseguir prosseguir at� o proximo modulo
                            {
                                pontos++;
                                mliberados[1] = 1; // aumentado numeros no menu para mostrar modulos liberados atrav�s de vetor
                            }
                            // mensagem perguntando se deseja continuar no modulo
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
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
                                do // la�o do while tratamento de erro caso um numero incorreto seja inserido.
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("-------------------------------------------------CONCEITOS INICIAIS----------------------------------------------------\n\n");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------");
                                    printf("\n\nAlgoritmo                                1\n");
                                    printf("\nTipos de dados em C                      2\n");
                                    printf("\nTipos de dados em pseudoc�dio            3\n");
                                    printf("\nOperadores                               4\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    if (t1 < 1 || t1 > 4) // tratamento de erro caso um numero incorreto seja inserido.
                                    {
                                        printf("\n\n                                          Op��o n�o encontrada, digite novamente.\n");
                                    }
                                    printf("\n\nInforme o n�mero do conceito a ser visto ?:  ");
                                    scanf("%d", &t1);
                                } while (t1 < 1 || t1 > 4);
                                system("cls"); // limpando mensagens a cima

                                if (t1 == 1) // op��o 1
                                {

                                    printf("\n=======================================================================================================================\n");
                                    printf("\t\t\t\t\t\t   * * * * * * * *\n");
                                    printf("\t\t\t\t\t\t   *  Algoritmo  *\n");
                                    printf("\t\t\t\t\t\t   * * * * * * * *\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("� um conjunto de instru��es para realizar determinada tarefa. ");
                                    printf("Um exemplo claro de algoritmo � uma receita,onde h� passos \nexplicados de maneira ");
                                    printf("especifica,seguindo um conjundo de regras relacionadas a linguagem escolhida.");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t1 == 2) // op��o 2
                                {
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Tipos de dados na Linguagem C]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                    printf("\nDados do tipo 'int' : \n");
                                    printf("\nS�o dados que n�o possuem casas decimais(1,2,3...),");
                                    printf("podendo ser positivo,negativo e nulo.\n");
                                    printf("\nDados do tipo 'float' :\n");
                                    printf("\nS�o dados que possuem casas decimais(1.1,.1.2,...)");
                                    printf("\n\nDados do tipo 'char':\n");
                                    printf("\nS�o cadeias de caracteres.");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t1 == 3) // op��o 3
                                {
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Tipos de dados no pseudoc�digo]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                    printf("\nDados do tipo inteiro: \n");
                                    printf("\nS�o dados que n�o possuem casas decimais(1,2,3...),");
                                    printf("podendo ser positivo,negativo e nulo.\n");
                                    printf("\nDados do tipo real:\n");
                                    printf("\nS�o dados que possuem casas decimais(1.1,.1.2,...)");
                                    printf("\n\nDados do tipo caracter:\n");
                                    printf("\nS�o cadeias de caracteres.");
                                    printf("\n\nDados do tipo l�gico:\n");
                                    printf("\nBooleano,com valores relacionados a verdadeiro ou falso.");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                }

                                if (t1 == 4) // op��o 4
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("[Operadores Ar�tmeticos]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nMultiplica��o                (*)\n");
                                    printf("\nDivis�o                      (/)\n");
                                    printf("\nDivis�o inteira              (Barra invertida)\n");
                                    printf("\nExponecia��o                 (^)\n");
                                    printf("\nSoma                         (+)\n");
                                    printf("\nSubtra��o                    (-)\n");
                                    printf("\nincremento em 1 unidade      (++)\n");
                                    printf("\ndecremento em 1 unidade      (+=)\n");
                                    printf("\nincremento gen�rico          (++)\n");
                                    printf("\ndecremento gen�rico          (-=)\n");
                                    printf("\natribui��o com multiplica��o (*=)\n");
                                    printf("\natribui��o por divis�o       (/=)\n");
                                    printf("\n=======================================================================================================================\n");
                                }
                                if (pontos == 1) // aumento de pontua��o para o acesso do proximo modulo
                                {
                                    pontos++;
                                    mliberados[2] = 1; // aumentado numeros no menu para mostrar modulos liberados atrav�s de vetor
                                }
                                printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
                                b2 = getch();
                                system("cls"); // limpando mensagens a cima
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem para concluir o modulo x primeiro
                            printf("\n\n\n\n\t\t\t\t     Voc� precisa concluir o m�dulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
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
                            printf("\nComo o pr�prio nome sugere, estrutura sequencial � um conjunto de intru��es no qual cada instru��o ser� \nexecutada em sequencia.\n");
                            printf("\n� uma estrutura de controle b�sica, em que os comandos em um programa (fun��o) \n");
                            printf("\ns�o executados um ap�s o outro (na ordem em que s�o especificados).\n");
                            printf("Primeiramente, � feita a declara��o das vari�veis, posteriormente, s�o executados os comandos de entrada\n e/ou atribui��o. \n");
                            printf("Na sequ�ncia � realizado o processamento dos dados e, no final, realiza-se a sa�da de dados.\n");
                            printf("-----------------------------------------------------------------------------------------------------------------------\n\n");
                            printf("\t\t\t\t\t\t          * * * * *       \n");
                            printf("\t\t\t\t\t\t        *           *     \n");
                            printf("\t\t\t\t\t\t       *   In�cio    *    \n");
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
                            printf("\t\t\t\t\t\t       *  Sa�da de   *    \n");
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
                            printf("\nDe um modo geral a estrutura sequencial mais b�sica consiste de:\n");
                            printf("\n-Entrada de dados\n");
                            printf("\n-Processamento\n");
                            printf("\n-Sa�da de dados\n");
                            printf("\n=======================================================================================================================\n");
                            printf("=======================================================================================================================\n");
                            if (pontos == 2) // aumento de pontua��o para o acesso do proximo modulo
                            {
                                pontos++;
                                mliberados[3] = 1; // aumentado numeros no menu para mostrar modulos liberados atrav�s de vetor
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem para concluir o modulo x primeiro
                            printf("\n\n\n\n\t\t\t\t     Voc� precisa concluir o m�dulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
                        }
                    }

                    if (a == 52) // modulo 4
                    {
                        if (pontos >= 3) // caso a pessoa tenha ponto suficiente
                        {

                            b4 = 's';
                            system("color 06"); // colorir fundos e letras
                            system("cls");      // limpando mensagens a cima

                            while (b4 != 'n' && b4 != 'N') // la�o while at� o usuario colocar 'n' para n�o continuar no modulo
                            {
                                do // la�o do while para tratamento de erro caso algum numero seja incorreto.
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("-------------------------------------------------ESTRUTURA CONDICIONAL--------------------------------------------------\n\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nEstrutura condicional                     1\n");
                                    printf("\nOperadores l�gicos                        2\n");
                                    printf("\nInstru��o if                              3\n");
                                    printf("\nEstrutura do if                           4\n");
                                    printf("\nConectores na linguagem  C                5\n");
                                    printf("\nInstru��o se                              6\n");
                                    printf("\nEstrutura do se                           7\n");
                                    printf("\nConectores em pseudoc�digo                8\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    if (t2 < 1 || t2 > 8) // mensagem para escolhas n�o existentes.
                                    {
                                        printf("\n\n                                          Op��o n�o encontrada, digite novamente.\n\n");
                                    }
                                    printf("\nInforme o n�mero do conceito a ser visto ?   ");
                                    scanf("%d", &t2);
                                } while (t2 < 1 || t2 > 8);
                                system("cls"); // limpando mensagens a cima
                                if (t2 == 1)   // op��o 1
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Estrutura condicional]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                    printf("\nUma instru��o � uma express�o seguida de ponto e v�rgula.\n");
                                    printf("\nBlocos s�o o agrupamento de v�rias intru��es. \n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                }
                                if (t2 == 2) // op��o 2
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Operadores l�gicos]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nMaior do que                  (>)\n");
                                    printf("\nMenor do que                  (<)\n");
                                    printf("\nMaior ou igual                (>=)\n");
                                    printf("\nMenor ou igual                (<=)\n");
                                    printf("\nDiferente                     (!=)\n");
                                    printf("\nIgual                         (==)\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                }
                                if (t2 == 3) // op��o 3
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Instru��o if]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n� uma estrutura de teste b�sica encontrada em todas as linguagens.\n");
                                    printf("\nRealiza um conjunto de instru��es caso a condi��o seja verdadeira.\n");
                                    printf("\nA condi��o deve ficar entre par�nteses.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                }

                                if (t2 == 4) // op��o 4
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Estrutura do if]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------");
                                    printf("\nif(condi��o){\n");
                                    printf("\n<Bloco de instru��es>\n");
                                    printf("\n}\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }

                                if (t2 == 5) // op��o 5
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Conector \"e\"(&&)]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[&&]  --> (e)\n");
                                    printf("\nExemplo:\n");
                                    printf("\nif(a==b && b==c){\n");
                                    printf("\n<Bloco de instru��es>\n");
                                    printf("\n}\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Conector \"ou\"(||)]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[||]  --> (ou)\n");
                                    printf("\nExemplo:\n");
                                    printf("\nif(a==b || b==c)\n{");
                                    printf("\n<Bloco de condi��es>\n");
                                    printf("\n}\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }

                                if (t2 == 6) // op��o 6
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Instru��o se ]\n");
                                    printf("\nSemelhante a instru��o if na Linguagem C,ela executa\n");
                                    printf("\num conjunto de instru��es caso a condi��o seja verdadeira.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }

                                if (t2 == 7) // op��o 7
                                {

                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Estrutura do se ]\n");
                                    printf("\nse(a>=x) entao\n");
                                    printf("\n<Bloco de instru��es>\n");
                                    printf("\nfimse\n");
                                    printf("\n\n Caso a condi��o entre par�nteses seja verdadeira\n");
                                    printf("\nas instru��es ser�o executadas.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t2 == 8) // op��o 8
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
                                    printf("\n<Bloco de instru��es>\n");
                                    printf("\nfimse\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (pontos == 3) // aumento da pontua��o para o usuario conseguir acessar o proximo modulo.
                                {
                                    pontos++;
                                    mliberados[4] = 1; // aumentado numeros no menu para mostrar modulos liberados atrav�s de vetor
                                }
                                printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
                                b4 = getch();  // getch para capturar a informa��o se o usuario deseja sair sim ou nao
                                system("cls"); // limpando mensagens a cima
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem para concluir o modulo x primeiro
                            printf("\n\n\n\n\t\t\t\t     Voc� precisa concluir o m�dulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
                        }
                    }

                    if (a == 53) // modulo 5
                    {
                        b5 = 's';
                        if (pontos >= 4)
                        {
                            system("color 0b");            // colorir fundos e letras
                            system("cls");                 // limpando mensagens a cima
                            while (b5 != 'n' && b5 != 'N') // la�o while para repetir caso o usuario queira continuar no modulo
                            {
                                do // tratamento de erro caso um numero seja incorreto
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("---------------------------------------Estrutura condicional composta e switch-case------------------------------------");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n\nInstru��o if-else            \t\t1\n");
                                    printf("\nEstrutura do if-else         \t\t2\n");
                                    printf("\nInstru��o 'se-senao'         \t\t3\n");
                                    printf("\nEstrutura do se-senao        \t\t4\n");
                                    printf("\nSwitch-case                  \t\t5\n");
                                    printf("\nEstrutura do Switch-case     \t\t6\n");
                                    printf("\nEstrutura do escolha-caso    \t\t7\n");
                                    if (t3 < 1 || t3 > 7) // mensagem de numero incorreto
                                    {
                                        printf("\n\n                                          Op��o n�o encontrada, digite novamente.\n");
                                    }
                                    printf("\n\n\nInforme o n�mero do  conceito a ser visto :   ");
                                    scanf("%d", &t3);
                                } while (t3 < 1 || t3 > 7);
                                system("cls"); // limpando mensagens a cima
                                if (t3 == 1)   // op��o 1
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Instru��o if-else]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nA instru��o if-else permite a execu��o de outro bloco\n");
                                    printf("\nde instru��es,caso o resultado da condicional seja falso\n");
                                    printf("\nDe modo geral a condicional composta executa um bloco de \n");
                                    printf("\ncomandos quando a condicional da instru��o if for falsa.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t3 == 2) // op��o 2
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Estrutura do if-else]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nif(condi��o){\n");
                                    printf("\n<Bloco de instru��es>\n");
                                    printf("\n}else{\n");
                                    printf("\n<Bloco de instru��es>\n");
                                    printf("\n}\n");
                                    printf("\nAo verificar a condicional ,o bloco de comando entre \n");
                                    printf("\nchaves  ser� executado,por�m,caso a condicional seja falsa,\n");
                                    printf("\no bloco de comandos da instru��o else ser� executada.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t3 == 3) // op��o 3
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Instru��o 'se-senao']\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nPermite a execu��o de outro bloco de istru��es caso\n");
                                    printf("\na condi��o do 'se' seja falsa. \n");
                                    printf("\nDe modo geral a condicional composta � a execu��o de \n");
                                    printf("\num bloco de instru��es caso o a consicional seja falsa.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t3 == 4) // op��o 4
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Estrutura do se-senao]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n\n\nse(condi��o)entao\n");
                                    printf("\n<Bloco de instru��es>\n");
                                    printf("\nsenao\n");
                                    printf("\n<Bloco de instru��es>\n");
                                    printf("\nfimse\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t3 == 5) // op��o 5
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[Switch-case]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nBasicamente � uma maneira de evitar uma quantidade \n");
                                    printf("\nexagerada de instru��es if.\n");
                                    printf("\n� muito utilizado em estruturas de menu.\n");
                                    printf("\nO valor da variavel escolhida para controle da instru��o\n");
                                    printf("\n� comparada com o valor da constante,caso o resultado seja verdadeiro\n");
                                    printf("\no bloco de c�digo relacionado ao case ser� executado.\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                }
                                if (t3 == 6) // op��o 6
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
                                if (t3 == 7) // op��o 7
                                {
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("[Estrutura do Escolha-Caso]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nescolha(vari�vel)\n");
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
                                    mliberados[5] = 1; // aumentado numeros no menu para mostrar modulos liberados atrav�s de vetor
                                }
                                // mensagem perguntando se deseja continuar no modulo
                                printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
                                b5 = getch();
                                system("cls"); // limpando mensagens a cima
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem falando para concluir o modulo descrito
                            printf("\n\n\n\n\t\t\t\t     Voc� precisa concluir o m�dulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
                        }
                    }

                    if (a == 54) // modulo 6
                    {
                        if (pontos >= 5) // tratamento para pesoa
                        {
                            for (co2 = 's'; co2 != 'n' && co2 != 'N'; co2) // la�o for para repetir o modulo at� o usuario digitar n�o.
                            {
                                do // do while para tratamento de erro
                                {
                                    system("color 03"); // colorir fundos e letras
                                    system("cls");      // limpando mensagens a cima
                                    printf("\t\t\t\t\t      * * * * * * * * * * * * * *\n");
                                    printf("----------------------------------------------*  Estrutura de repeti��o *----------------------------------------------\n");
                                    printf("\t\t\t\t\t      * * * * * * * * * * * * * *\n");
                                    printf("\n\n[Estrutura de repeti��o]\n\n");
                                    if (t6 != 'c' && t6 != 'p') // mensagem de erro caso a char seja incorreto.
                                    {
                                        printf("\n\n                                          Op��o n�o encontrada, digite novamente.\n\n\n\n");
                                    }
                                    printf("digite (P) para Pseudoc�digo ou (C) para Linguagem C: ");
                                    t6 = getch();
                                } while (t6 != 'c' && t6 != 'C' && t6 != 'p' && t6 != 'P');
                                if (t6 == 'c' || t6 == 'C') // op��o c
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\t\t\t\t\t  [Estruturas de repeti��o LINGUAGEM C]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\nWhile(Enquanto)                          (1)\n");
                                    printf("\nDo...While(fa�a...Enquanto)              (2)\n");
                                    printf("\nFor(Para)                                (3)\n");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                    printf("qual voc� deseja acessar?: ");
                                    scanf("%d", &nsc);
                                    switch (nsc)
                                    {
                                    case 1:
                                        system("cls"); // limpando mensagens a cima
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("\n[WHILE(ENQUANTO)]\n\n");
                                        printf("O while � a estrutura de repeti��o mais simples. Ele repete a execu��o de um bloco de senten�as enquanto uma condi��o \n");
                                        printf("permanecer verdadeira. Na primeira vez que a condi��o se tornar falsa, o while n�o repetir� a execu��o do bloco, \n");
                                        printf("e a execu��o continuar� com a senten�a ou comando que vem logo ap�s o bloco do while, na seq��ncia do programa. \n");
                                        printf("\n\tSINTAXE: \n\t\twhile(_condi��o_)\n\t\t{\n\t\t\t**Instru��es**;\n\t\t}\n\n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        break;
                                    case 2:
                                        system("cls"); // limpando mensagens a cima
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("\n[DO...WHILE(FA�A...ENQUANTO)]\n\n");
                                        printf("Esta estrutura tem um comportamento muito semelhante ao while, com uma diferen�a crucial: a condi��o � verificada ap�s\n");
                                        printf("executar o bloco de instru��es correspondente. ");
                                        printf("\n\n\tSINTAXE: \n\t\tdo\n\t\t{\n\t\t   **Instru��es**;\n\t\t}\n\t\twhile(_condi��o_);\n\n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        break;
                                    case 3:
                                        system("cls"); // limpando mensagens a cima
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("\n[FOR(PARA)]\n\n");
                                        printf("O For � a estrutura de repeti��o que utilizamos quando sabemos a quantidade de repeti��es que um bloco de c�digo deve \n");
                                        printf("ser executado. A sintaxe � composta por tr�s express�es separadas por ponto e v�rgula. Elas controlam o in�cio do loop \n");
                                        printf("e as condi��es de como cada itera��o ir� executar.\n");
                                        printf("\n\n\tSINTAXE: \n\t\tfor(valor_inicial; condi��o_final; valor_incremento)\n\t\t{\n\t\t **Instru��es**;\n\t\t}\n\n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        break;
                                    default:
                                        system("cls"); // limpando mensagens a cima
                                        printf("\n                                                Estrutura n�o encontrada\n\n\n");
                                        break;
                                    }
                                }
                                if (t6 == 'p' || t6 == 'P') // op��o p
                                {
                                    system("cls"); // limpando mensagens a cima
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\t\t\t\t\t[Estruturas de repeti��o em PSEUDOC�DIGO]\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n(Enquanto)                               (1)\n");
                                    printf("\n(fa�a...Enquanto)                        (2)\n");
                                    printf("\n(Para)                                   (3)\n");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                    printf("qual voc� deseja acessar?: ");
                                    scanf("%d", &nsc);
                                    system("cls"); // limpando mensagens a cima
                                    switch (nsc)   // switch case para escolha das op��es
                                    {
                                    case 1:
                                        printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                        printf("\n[ENQUANTO]\n\n");
                                        printf("O Enquanto � a estrutura de repeti��o mais simples. Ele repete a execu��o de um bloco de senten�as enquanto uma condi��o \n");
                                        printf("permanecer verdadeira. Na primeira vez que a condi��o se tornar falsa, o while n�o repetir� a execu��o do bloco, \n");
                                        printf("e a execu��o continuar� com a senten�a ou comando que vem logo ap�s o bloco do while, na seq��ncia do programa. \n");
                                        printf("\n\tSINTAXE: \n\t\tenquanto (_condi��o_) faca\n\t\t***Instru��es***\n\t\tfimenquanto\n");
                                        printf("\t\tO \"fimenquanto\" � uma instru��o que dara fim a estrutura de repeti��o ENQUANTO.");
                                        printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                        break;
                                    case 2:
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("\n[FA�A...ENQUANTO]\n\n");
                                        printf("Esta estrutura tem um comportamento muito semelhante ao ENQUANTO, com uma diferen�a crucial: a condi��o � verificada ap�s\n");
                                        printf("executar o bloco de instru��es correspondente. ");
                                        printf("\n\tSINTAXE: \n\t\trepita \n\t\t***Instru��es***\n\t\tate(_condi��o_de_parada_)\n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        break;
                                    case 3:
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        printf("\n[PARA]\n\n");
                                        printf("O PARA � a estrutura de repeti��o que utilizamos quando sabemos a quantidade de repeti��es que um bloco de c�digo deve \n");
                                        printf("ser executado. A sintaxe � composta por tr�s express�es separadas por ponto e v�rgula. Elas controlam o in�cio do loop \n");
                                        printf("e as condi��es de como cada itera��o ir� executar.\n");
                                        printf("\n\tSINTAXE: \n\t\tPARA **vari�vel** DE **valor_inicial** ATE **valor_final** PASSO **incremento** FACA");
                                        printf("\n\t\t***Instru��es***\n\t\tfimpara\n");
                                        printf("\nO [PASSO **incremento**] � opcional, esse recurso serve pera definir qual o valor do incremento da [**vari�vel**], \n");
                                        printf("por exemplo de 1 em 1 (padr�o), de 2 em 2, de 3 em 3, etc. \n");
                                        printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                        break;
                                    default:
                                        system("cls"); // limpando mensagens a cima
                                        printf("\n                                                Estrutura n�o encontrada\n\n\n");
                                        break;
                                    }
                                }
                                if (pontos == 5) // sistema de pontua��o de modulos
                                {
                                    pontos++;
                                    mliberados[6] = 1; // aumentado numeros no menu para mostrar modulos liberados atrav�s de vetor
                                }
                                // mensagem para escolher se continua no modulo sim ou n�o.
                                printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
                                co2 = getch();
                                system("cls"); // limpando mensagens a cima
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem de erro para o usuario que n�o acessou o modulo anterior mensionado
                            printf("\n\n\n\n\t\t\t\t     Voc� precisa concluir o m�dulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
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
                            printf("\n\nUm vetor � uma vari�vel que possui v�rias ocorr�ncias de um mesmo tipo. Cada ocorr�ncia � acessada atrav�s de um �ndice;");
                            printf("\nOs vetores tamb�m s�o chamados de arrays ou matrizes unidimensionais por possu�rem somente um �ndice;");
                            printf("\nPara definir um vetor em C deve-se indicar a quantidade de ocorr�ncia que este ter�,");
                            printf("\ncolocando na sua defini��o o valor entre [ ];");
                            printf("\nOs �ndices de um vetor em C, sempre come�ar�o em zero. Portanto,");
                            printf("\npara se acessar a primeira ocorr�ncia de um vetor deve-se indicar o �ndice zero");
                            printf("\nOcupam posi��es cont�guas na mem�ria;");
                            printf("\nO �ndice varia obrigatoriamente de 0 a N-1, onde N � o tamanho do vetor;");
                            printf("\nOs elementos podem ser de qualquer tipo, mas s�o sempre do mesmo tipo;                                                            ");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                            printf("\n\n        Exemplo: int notas[4];                                                                                          ");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                            printf("\n\n      O vetor tem 4 elementos do tipo inteiro;                                                                                ");
                            printf("\n      Os elementos est�o nas posi��es 0, 1, 2 e 3;                                                                            ");
                            printf("\n      Os elementos s�o referenciados como notas[0], notas[1], notas[2] e notas[3];                                            ");
                            printf("\n\nCada posi��o deve ser tratada exatamente como uma vari�vel do tipo do vetor Atribui��o de Valores ao Vetor              ");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                            printf("\n\n        Exemplo: int notas[4];                                                                                          ");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                            printf("\n\n      O vetor tem 4 elementos;                                                                                                ");
                            printf("\n      Os elementos est�o nas posi��es 0, 1, 2 e 3;                                                                            ");
                            printf("\n      Os elementos s�o referenciados como: notas[0],                                                                          ");
                            printf("\n      notas[1], notas[2] e notas[3];                                                                                          ");
                            printf("\n      Atribui��o de valores aos elementos do vetor:                                                                           ");
                            printf("\n      notas[0] = 5;                                                                                                           ");
                            printf("\n      notas[1] = 2;                                                                                                           ");
                            printf("\n      notas[2] = 6;                                                                                                           ");
                            printf("\n      notas[3] = 10;                                                                                                          ");
                            printf("\n\nINICIALIZA��O DE VETORES\n");
                            printf("\nint a[4]={1,2,3};");
                            printf("\nCria um vetor de quatro inteiros e inicializa a[0]=1, a[1]=2, e a[2]= 3; a[3] fica valendo zero;");
                            printf("\nint a[]={1,2,3};");
                            printf("\nCria um vetor de apenas tr�s elementos, com inicializa��o equivalente ao anterior;");
                            printf("\nchar a[3]={'b','k','n'};");
                            printf("\nCria um vetor de tr�s caracteres e inicializa a[0]='b',");
                            printf("\na[1]='k', e a[2]='n';");
                            printf("\nint v[10];");
                            printf("\nCria um vetor de dez posi��es inteiras, n�o inicializado.");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                            printf("\n\n\n\n\t\tSintaxe:");
                            printf("\n\n\t\t\ttipo_vari�vel nome_vetor[tamanho];\n\n\n\n");
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                            printf("\n-----------------------------------------------------------------------------------------------------------------------\n");

                            if (pontos == 5) // sistema de pontua��o de modulos
                            {
                                pontos++;
                                mliberados[6] = 1; // aumentado numeros no menu para mostrar modulos liberados atrav�s de vetor
                            }
                        }
                        else
                        {
                            system("cls"); // limpando mensagens a cima e mensagem para concluir o modulo x primeiro
                            printf("\n\n\n\n\t\t\t\t     Voc� precisa concluir o m�dulo%2.f primeiro!\n\n\n\n\n\n\n\n", pontos + 1);
                        }
                    }
                    if (a == 56) // modulo 8 / ajuda
                    {
                        for (b7 = 's'; b7 != 'n' && b7 != 'N'; b7) // la�o for para repeti��o at� o usuario digitar 'n'
                        {
                            do // do while para tratamento de erro
                            {
                                system("cls");      // limpando mensagens a cima
                                system("color 08"); // colorir fundos e letras
                                printf("\n\n-------------------------------------------------------MAIS OP��ES------------------------------------------------------");
                                printf("\n\n\n                                     Instru��es/ajuda                      ( 1 )");
                                printf("\n\n                                         Cr�ditos                          ( 2 )");
                                printf("\n\n\n\n------------------------------------------------------------------------------------------------------------------------");
                                if (ajuda < 1 || ajuda > 2)
                                {
                                    printf("\n                                         Op��o n�o encontrada, Digite novamente.");
                                }
                                printf("\n\n\n\n\n                                                digite o n�mero da op��o: ");
                                scanf("%d", &ajuda);
                            } while (ajuda < 1 || ajuda > 2);
                            switch (ajuda)
                            {
                            case 1:
                                system("cls");      // limpando mensagens a cima
                                system("color 08"); // colorir fundos e letras
                                printf("\n\n                                                     INSTRU��ES/AJUDA\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n     COMO ULTILIZAR O PROGRAMA?:\n\n");
                                printf("\n  -voc� consegue ter acesso ao programa atrav�s das teclas pr� determinas depedendo da ocasi�o, sendo elas:\n   1,2,3,4,5,6,7,8,9,s,n,c,p,[Enter].\n");
                                printf("\n  -Lembre-se toda vez que voc� precisar escolher alguma op��o por meio de n�meros, escreva o n�mero e pressione [ENTER].\n");
                                printf("\n  -para fechar o programa, espere a mensagem aparecer assim que voc� fizer qualquer intera��o.\n");
                                printf("\n  -se voc� escolher seguir o cronograma, ser� preciso entrar em um m�dulo para conseguir liberar o outro. \n");
                                printf("   isso n�o ir� ocorrer caso escolha n�o seguir o cronograma.");
                                printf("\n\n------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n    QUAL O OBJETIVO DO PROGRAMA?:\n\n");
                                printf("\n  ajudar e instruir calouros dos cursos de exatas que possuem a materia de Algoritimo e Programa��o 1 (AP1) e, auxiliar");
                                printf("\n  aprendizagem basica sobre linguagens de programa��o(C e Portugol) e fluxogramas\n\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n    ASSUNTO DOS M�DULOS RESUMIDO:\n\n");
                                printf("\n  M�dulo 1: introdu��o dos 3 formas de demonstra programa��o e suas origens sendo elas\n  Pseudoc�digo(portugol), Fluxograma e Linguaguem C");
                                printf("\n\n  M�dulo 2: conceitos iniciais sobre algoritmos, tipos de dados da linguagem C, tipos de dados em pseudoc�dico(portugol)\n");
                                printf("\n\n  M�dulo 3: conceitos sobre estrutura sequencial atrav�s de fluxograma\n");
                                printf("\n\n  M�dulo 4: conceitos e exemplos sobre estrutura condicional em linguagem c e pseudocodigo(portugol)\n");
                                printf("\n\n  M�dulo 5: conceitos e exemplos sobre estrutura condicional Composta em linguagem c e pseudocodigo(portugol)\n");
                                printf("\n\n  M�dulo 6: conceito e exemplos sobre Estruturas de repeti��o/la�os de repeti��o em linguagem C e Pseudocodigo(portugol)\n");
                                printf("\n\n  M�dulo 7: conceitos e exemplos sobre Vetores (uma forma diferente de manipular variaveis)\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                break;
                            case 2:
                                system("cls"); // limpando mensagens a cima
                                printf("\n\n                                                        CR�DITOS:\n");
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
                                printf("\n\n\n\n\n                               Trabalho final da diciplina Algoritimo e Programa��o 1.");
                                printf("\n\n                                    Universidade federal de Jatai - GO  (UFJ) 2022");
                                printf("\n\n------------------------------------------------------------------------------------------------------------------------\n\n");
                                break;
                            }
                            // mensagem se deseja continuar no modulo
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
                            b7 = getch();
                            system("cls"); // limpando mensagens a cima
                        }
                    }
                    if (a > 56 || a < 49) // tratamento de erro caso o modulo descrito n�o exista.
                    {
                        system("cls"); // limpando mensagens a cima
                        printf("\n\n\n\n                                                M�dulo n�o encontrado!!!\n\n\n\n\n");
                    }
                    printf("\a");
                    // mensagem para fechar o programa ou escolher outro modulo.
                    printf("\n\t\t\t\t         Para fechar o programa digite ( 0 ) \n\n\t\t\t\t para escolher outro m�dulo aperte ( QUALQUER TECLA )\n");
                    b = getch();
                    system("cls");      // limpando mensagens a cima
                    system("color 70"); // colorir fundos e letras
                }
            }
            if (b == 48)
            {
                pontosfinais = pow(7, pontos); // pontua��ozinha para o final, eu pego 5 e elevo a quantidade de modulos liberados.
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("                                                   PONTUA��O %f", pontosfinais);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                system("pause");
            }
            if (b6 == 'n' || b6 == 'N') // caso a pessoa n�o queira seguir o plano de ensino, tudo � liberado em bloqueio de modulo
            {
                while (b != 48) // la�o de repeti��o while para a sele��o do menu continuar voltando at� o usuario digitar 0
                {
                    system("cls");                                               // limpando mensagens a cima
                    system("color 70");                                          // colorir fundos e letras
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // colorir letras
                    printf("=======================================================================================================================\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 96); // colorir letras
                    printf("\n\t\t\t\t\t\t   * * * * * * * *   \n");
                    printf("\t\t\t\t\t\t   *  CONTE�DOS  *   \n");
                    printf("\t\t\t\t\t\t   * * * * * * * *   \n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 94); // colorir letras
                    printf("\t\t\t\t\t     M�DULOS LIBERADOS: TODOS!!!     \n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // colorir letras
                    printf("\n=======================================================================================================================\n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 112); // colorir letras
                    // menu principal
                    printf("                                                   ***************\n");
                    printf("\nintrodu��o a programa��o                           |  M�dulo  1  |\n");
                    printf("Conceitos iniciais                                 |  M�dulo  2  |\n");
                    printf("Estrutura Sequencial                               |  M�dulo  3  |\n");
                    printf("Estrutura condicional                              |  M�dulo  4  |\n");
                    printf("Estrutura condicional composta e switch-case       |  M�dulo  5  |\n");
                    printf("Estrutura de Repeti��o                             |  M�dulo  6  |\n");
                    printf("Vetores                                            |  M�dulo  7  |\n");
                    printf("\n                                                   ***************\n\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 124); // colorir letras
                    printf("Mais Op��es/ajuda:                                 |  Digite  8  |                                                      \n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 112); // colorir letras

                    printf("\n\nInforme o n�mero m�dulo que voc� deseja acessar :  ");
                    a = getch();
                    if (a == 49) // modulo 1
                    {

                        co = 's';
                        system("color 09"); // colorir fundos e letras
                        do                  // la�o de repeti��o do while para repetir as op��es do modulo at� o usuario digitar n na op��o sair
                        {
                            do // la�o de repeti��o do while para tratamento de erro caso o usuario digite um numero errado
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-----------------------------------------------INTRODU��O A PROGRAMA��O-------------------------------------------------\n\n");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf(" digite ( 1 ) para introdu��o do fluxograma\n\n");
                                printf(" digite ( 2 ) para a introdu��o do Pseudoc�digo(portugol)\n\n");
                                printf(" digite ( 3 ) para introdu��o da linguagem c\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                if (n < 1 || n > 3) // tratamento de erro caso o numero seja incorreto.
                                {
                                    printf("\n\n                                          Op��o n�o encontrada, digite novamente.\n");
                                }
                                printf("\n\n em qual voc� deseja entrar:  ");
                                scanf("%d", &n);

                            } while (n < 1 || n > 3);
                            switch (n) // switch case para mostrar as op��es escolhidas.
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
                                printf("\nFluxograma: � um tipo de diagrama, e pode ser entendido como uma representa��o esquem�tica de um processo ou algoritmo,\n");
                                printf("\nmuitas vezes feito atrav�s de gr�ficos que ilustram de forma descomplicada a transi��o de informa��es entre os elementos\n");
                                printf("\nque o comp�em, ou seja, � a sequ�ncia operacional do desenvolvimento de um processo, o qual caracteriza: o trabalho que\n");
                                printf("\nest� sendo realizado, o tempo necess�rio para sua realiza��o, a dist�ncia percorrida pelos documentos, quem est�\n");
                                printf("\nrealizando o trabalho e como ele flui entre os participantes deste processo. Os fluxogramas s�o muito utilizados em\n");
                                printf("\nprojetos de software para representar a l�gica interna dos programas, mas podem tamb�m ser usados para desenhar\n");
                                printf("\nprocessos de neg�cio e o workflow que envolve diversos atores corporativos no exerc�cio de suas atribui��es.[1]\n");
                                printf("\nO diagrama de fluxo de dados (DFD) utiliza do fluxograma para modelagem e documenta��o de sistemas computacionais.\n");
                                printf("\nO termo fluxograma designa uma representa��o gr�fica de um determinado processo ou fluxo de trabalho,\n");
                                printf("\nefetuado geralmente com recurso a figuras geom�tricas normalizadas e as setas unindo essas figuras geom�tricas.\n");
                                printf("\nAtrav�s desta representa��ogr�fica � poss�vel compreender de forma r�pida e f�cil a transi��o de informa��es\n");
                                printf("\nou documentos entre os elementos que participam no processo em causa. O fluxograma pode ser definido tamb�m como\n");
                                printf("\no gr�fico em que se representa o percurso ou caminho percorrido por certo elemento\n");
                                printf("\n(por exemplo, um determinado documento), atrav�s dos v�rios departamentos da organiza��o, bem como o tratamento\n");
                                printf("\nque cada um vai lhe dando. A exist�ncia de fluxogramas para cada um dos processos � fundamental para a\n");
                                printf("\nsimplifica��o e racionaliza��o do trabalho, permitindo a compreens�o e posterior otimiza��o dos processos desenvolvidos\n");
                                printf("\nem cada departamento ou �rea da organiza��o.\n\n");
                                printf("=======================================================================================================================\n");
                                break;
                            case 2:
                                system("cls"); // limpando mensagens a cima
                                printf("\n=======================================================================================================================\n");
                                printf("\t\t\t\t\t       * * * * * * * * *\n");
                                printf("\t\t\t\t\t       *  Pseudoc�digo *\n");
                                printf("\t\t\t\t\t       * * * * * * * * *\n");
                                printf("\n=======================================================================================================================\n");
                                printf("\n[Pseudoc�digo]\n");
                                printf("\n=======================================================================================================================\n");
                                printf("\nPseudoc�digo � uma forma gen�rica de escrever um algoritmo, utilizando uma linguagem simples\n");
                                printf("\n(nativa a quem o escreve, de forma a ser entendida por qualquer pessoa) sem necessidade de\n");
                                printf("\nconhecer a sintaxe de nenhuma linguagem de programa��o. Um exemplo de pseudoc�digo � o Portugol,\n");
                                printf("\nque utiliza o compilador Visualg ou Portugol Viana que pode ser baixado do portal de software livre SourceForge.\n");
                                printf("\nOs livros sobre a ci�ncia de computa��o utilizam frequentemente o pseudoc�digo para ilustrar os seus exemplos,\n");
                                printf("\nde forma que todos os programadores possam entend�-los (independentemente da linguagem que utilizem).\n");
                                printf("\nNo caso da l�ngua portuguesa existem alguns interpretadores de pseudoc�digo, nenhum tem a projec��o das\n");
                                printf("\nlinguagens Pascal ou BASIC, que no caso da l�ngua inglesa se assemelham bastante a um pseudo-c�digo.\n");
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
                                printf("\noperacionais e compiladores.Sua estrutura e seu nome prov�m de uma linguagem anterior B.\n");
                                printf("\nFoi usada na constru��o de uma nova vers�o do \n");
                                printf("\nsistema operacional Unix.Quase todos os grandes sistemas operacionais \n");
                                printf("\ns�o constru�dos em C/C++.No ano de 1978 foi publicado o livro: The C Programming \n");
                                printf("\nLanguage por Kernigham & Ritchie,tornando a linguagem conhecida.No in�cio dos anos 80,passou a ser reconhecida \n");
                                printf("\ncomo uma linguagem de prop�sito geral.A padroniza��o da linguagem era uma necessidade real. \n");
                                printf("\nA padroniza��o foi iniciada pela ANSI ? American National Standard Institute ? em 1983 e \n");
                                printf("\nfinalizada em 1989.Esta linguagem precisava prover acesso de baixo n�vel ao hardware \n");
                                printf("\n(PCU, I/Os e perif�ricos) e se entender bem com o Assembly.\n");
                                printf("\nEla � linguagem procedural, modular,estruturada e multiplataforma,onde \n");
                                printf("\ngeralmente � compilada para o c�digo de m�quina.\n");
                                printf("\nA linguagem C inspirou a cria��o de muitas outras linguagens \n");
                                printf("\nde programa��o mais recentes, como C++, Java, C#, JavaScript, Perl, PHP. \n");
                                printf("=======================================================================================================================\n");
                                break;
                            default:
                                break;
                            }

                            // mensagem perguntando se deseja continuar no modulo
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
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
                            do // la�o do while tratamento de erro caso um numero incorreto seja inserido.
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-------------------------------------------------CONCEITOS INICIAIS----------------------------------------------------\n\n");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------");
                                printf("\n\nAlgoritmo                                1\n");
                                printf("\nTipos de dados em C                      2\n");
                                printf("\nTipos de dados em pseudoc�dio            3\n");
                                printf("\nOperadores                               4\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                if (t1 < 1 || t1 > 4) // tratamento de erro caso um numero incorreto seja inserido.
                                {
                                    printf("\n\n                                          Op��o n�o encontrada, digite novamente.\n");
                                }
                                printf("\n\nInforme o n�mero do conceito a ser visto ?:  ");
                                scanf("%d", &t1);
                            } while (t1 < 1 || t1 > 4);
                            system("cls"); // limpando mensagens a cima

                            if (t1 == 1) // op��o 1
                            {

                                printf("\n=======================================================================================================================\n");
                                printf("\t\t\t\t\t\t   * * * * * * * *\n");
                                printf("\t\t\t\t\t\t   *  Algoritmo  *\n");
                                printf("\t\t\t\t\t\t   * * * * * * * *\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("� um conjunto de instru��es para realizar determinada tarefa.");
                                printf("Um exemplo claro de algoritmo � uma receita,onde h� passos \nexplicados de maneira ");
                                printf("especifica,seguindo um conjundo de regras relacionadas a linguagem escolhida.");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t1 == 2) // op��o 2
                            {
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Tipos de dados na Linguagem C]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                printf("\nDados do tipo 'int' : \n");
                                printf("\nS�o dados que n�o possuem casas decimais(1,2,3...),");
                                printf("podendo ser positivo,negativo e nulo.\n");
                                printf("\nDados do tipo 'float' :\n");
                                printf("\nS�o dados que possuem casas decimais(1.1,.1.2,...)");
                                printf("\n\nDados do tipo 'char':\n");
                                printf("\nS�o cadeias de caracteres.");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t1 == 3) // op��o 3
                            {
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Tipos de dados no pseudoc�digo]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                printf("\nDados do tipo inteiro: \n");
                                printf("\nS�o dados que n�o possuem casas decimais(1,2,3...),");
                                printf("podendo ser positivo,negativo e nulo.\n");
                                printf("\nDados do tipo real:\n");
                                printf("\nS�o dados que possuem casas decimais(1.1,.1.2,...)");
                                printf("\n\nDados do tipo caracter:\n");
                                printf("\nS�o cadeias de caracteres.");
                                printf("\n\nDados do tipo l�gico:\n");
                                printf("\nBooleano,com valores relacionados a verdadeiro ou falso.");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                            }

                            if (t1 == 4) // op��o 4
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("[Operadores Ar�tmeticos]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nMultiplica��o                (*)\n");
                                printf("\nDivis�o                      (/)\n");
                                printf("\nDivis�o inteira              (Barra invertida)\n");
                                printf("\nExponecia��o                 (^)\n");
                                printf("\nSoma                         (+)\n");
                                printf("\nSubtra��o                    (-)\n");
                                printf("\nincremento em 1 unidade      (++)\n");
                                printf("\ndecremento em 1 unidade      (+=)\n");
                                printf("\nincremento gen�rico          (++)\n");
                                printf("\ndecremento gen�rico          (-=)\n");
                                printf("\natribui��o com multiplica��o (*=)\n");
                                printf("\natribui��o por divis�o       (/=)\n");
                                printf("\n=======================================================================================================================\n");
                            }
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
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
                        printf("\nComo o pr�prio nome sugere, estrutura sequencial � um conjunto de intru��es no qual cada instru��o ser� \nexecutada em sequencia.\n");
                        printf("\n� uma estrutura de controle b�sica, em que os comandos em um programa (fun��o) \n");
                        printf("\ns�o executados um ap�s o outro (na ordem em que s�o especificados).\n");
                        printf("Primeiramente, � feita a declara��o das vari�veis, posteriormente, s�o executados os comandos de entrada\n e/ou atribui��o. \n");
                        printf("Na sequ�ncia � realizado o processamento dos dados e, no final, realiza-se a sa�da de dados.\n");
                        printf("-----------------------------------------------------------------------------------------------------------------------\n\n");
                        printf("\t\t\t\t\t\t          * * * * *       \n");
                        printf("\t\t\t\t\t\t        *           *     \n");
                        printf("\t\t\t\t\t\t       *   In�cio    *    \n");
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
                        printf("\t\t\t\t\t\t       *  Sa�da de   *    \n");
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
                        printf("\nDe um modo geral a estrutura sequencial mais b�sica consiste de:\n");
                        printf("\n-Entrada de dados\n");
                        printf("\n-Processamento\n");
                        printf("\n-Sa�da de dados\n");
                        printf("\n=======================================================================================================================\n");
                        printf("=======================================================================================================================\n");
                    }

                    if (a == 52) // modulo 4
                    {

                        b4 = 's';
                        system("color 06"); // colorir fundos e letras
                        system("cls");      // limpando mensagens a cima

                        while (b4 != 'n' && b4 != 'N') // la�o while at� o usuario colocar 'n' para n�o continuar no modulo
                        {
                            do // la�o do while para tratamento de erro caso algum numero seja incorreto.
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-------------------------------------------------ESTRUTURA CONDICIONAL--------------------------------------------------\n\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nEstrutura condicional                     1\n");
                                printf("\nOperadores l�gicos                        2\n");
                                printf("\nInstru��o if                              3\n");
                                printf("\nEstrutura do if                           4\n");
                                printf("\nConectores na linguagem  C                5\n");
                                printf("\nInstru��o se                              6\n");
                                printf("\nEstrutura do se                           7\n");
                                printf("\nConectores em pseudoc�digo                8\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                if (t2 < 1 || t2 > 8) // mensagem para escolhas n�o existentes.
                                {
                                    printf("\n\n                                          Op��o n�o encontrada, digite novamente.\n\n");
                                }
                                printf("\nInforme o n�mero do conceito a ser visto ?   ");
                                scanf("%d", &t2);
                            } while (t2 < 1 || t2 > 8);
                            system("cls"); // limpando mensagens a cima
                            if (t2 == 1)   // op��o 1
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Estrutura condicional]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                printf("\nUma instru��o � uma express�o seguida de ponto e v�rgula.\n");
                                printf("\nBlocos s�o o agrupamento de v�rias intru��es. \n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                            }
                            if (t2 == 2) // op��o 2
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Operadores l�gicos]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nMaior do que                  (>)\n");
                                printf("\nMenor do que                  (<)\n");
                                printf("\nMaior ou igual                (>=)\n");
                                printf("\nMenor ou igual                (<=)\n");
                                printf("\nDiferente                     (!=)\n");
                                printf("\nIgual                         (==)\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                            }
                            if (t2 == 3) // op��o 3
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Instru��o if]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n� uma estrutura de teste b�sica encontrada em todas as linguagens.\n");
                                printf("\nRealiza um conjunto de instru��es caso a condi��o seja verdadeira.\n");
                                printf("\nA condi��o deve ficar entre par�nteses.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                            }

                            if (t2 == 4) // op��o 4
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Estrutura do if]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------");
                                printf("\nif(condi��o){\n");
                                printf("\n<Bloco de instru��es>\n");
                                printf("\n}\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }

                            if (t2 == 5) // op��o 5
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Conector \"e\"(&&)]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[&&]  --> (e)\n");
                                printf("\nExemplo:\n");
                                printf("\nif(a==b && b==c){\n");
                                printf("\n<Bloco de instru��es>\n");
                                printf("\n}\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Conector \"ou\"(||)]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[||]  --> (ou)\n");
                                printf("\nExemplo:\n");
                                printf("\nif(a==b || b==c)\n{");
                                printf("\n<Bloco de condi��es>\n");
                                printf("\n}\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }

                            if (t2 == 6) // op��o 6
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Instru��o se ]\n");
                                printf("\nSemelhante a instru��o if na Linguagem C,ela executa\n");
                                printf("\num conjunto de instru��es caso a condi��o seja verdadeira.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }

                            if (t2 == 7) // op��o 7
                            {

                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Estrutura do se ]\n");
                                printf("\nse(a>=x) entao\n");
                                printf("\n<Bloco de instru��es>\n");
                                printf("\nfimse\n");
                                printf("\n\n Caso a condi��o entre par�nteses seja verdadeira\n");
                                printf("\nas instru��es ser�o executadas.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t2 == 8) // op��o 8
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
                                printf("\n<Bloco de instru��es>\n");
                                printf("\nfimse\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }

                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
                            b4 = getch();
                            system("cls"); // limpando mensagens a cima
                        }
                    }

                    if (a == 53) // modulo 5
                    {
                        b5 = 's';

                        system("color 0b");            // colorir fundos e letras
                        system("cls");                 // limpando mensagens a cima
                        while (b5 != 'n' && b5 != 'N') // la�o while para repetir caso o usuario queira continuar no modulo
                        {
                            do // tratamento de erro caso um numero seja incorreto
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("---------------------------------------Estrutura condicional composta e switch-case------------------------------------");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n\nInstru��o if-else            \t\t1\n");
                                printf("\nEstrutura do if-else         \t\t2\n");
                                printf("\nInstru��o 'se-senao'         \t\t3\n");
                                printf("\nEstrutura do se-senao        \t\t4\n");
                                printf("\nSwitch-case                  \t\t5\n");
                                printf("\nEstrutura do Switch-case     \t\t6\n");
                                printf("\nEstrutura do escolha-caso    \t\t7\n");
                                if (t3 < 1 || t3 > 7) // mensagem de numero incorreto
                                {
                                    printf("\n\n                                          Op��o n�o encontrada, digite novamente.\n");
                                }
                                printf("\n\n\nInforme o n�mero do  conceito a ser visto :   ");
                                scanf("%d", &t3);
                            } while (t3 < 1 || t3 > 7);
                            system("cls"); // limpando mensagens a cima
                            if (t3 == 1)   // op��o 1
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Instru��o if-else]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nA instru��o if-else permite a execu��o de outro bloco\n");
                                printf("\nde instru��es,caso o resultado da condicional seja falso\n");
                                printf("\nDe modo geral a condicional composta executa um bloco de \n");
                                printf("\ncomandos quando a condicional da instru��o if for falsa.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t3 == 2) // op��o 2
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Estrutura do if-else]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nif(condi��o){\n");
                                printf("\n<Bloco de instru��es>\n");
                                printf("\n}else{\n");
                                printf("\n<Bloco de instru��es>\n");
                                printf("\n}\n");
                                printf("\nAo verificar a condicional ,o bloco de comando entre \n");
                                printf("\nchaves  ser� executado,por�m,caso a condicional seja falsa,\n");
                                printf("\no bloco de comandos da instru��o else ser� executada.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t3 == 3) // op��o 3
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Instru��o 'se-senao']\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nPermite a execu��o de outro bloco de istru��es caso\n");
                                printf("\na condi��o do 'se' seja falsa. \n");
                                printf("\nDe modo geral a condicional composta � a execu��o de \n");
                                printf("\num bloco de instru��es caso o a consicional seja falsa.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t3 == 4) // op��o 4
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Estrutura do se-senao]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n\n\nse(condi��o)entao\n");
                                printf("\n<Bloco de instru��es>\n");
                                printf("\nsenao\n");
                                printf("\n<Bloco de instru��es>\n");
                                printf("\nfimse\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t3 == 5) // op��o 5
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n[Switch-case]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nBasicamente � uma maneira de evitar uma quantidade \n");
                                printf("\nexagerada de instru��es if.\n");
                                printf("\n� muito utilizado em estruturas de menu.\n");
                                printf("\nO valor da variavel escolhida para controle da instru��o\n");
                                printf("\n� comparada com o valor da constante,caso o resultado seja verdadeiro\n");
                                printf("\no bloco de c�digo relacionado ao case ser� executado.\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                            }
                            if (t3 == 6) // op��o 6
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
                            if (t3 == 7) // op��o 7
                            {
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("[Estrutura do Escolha-Caso]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nescolha(vari�vel)\n");
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
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
                            b5 = getch();
                            system("cls"); // limpando mensagens a cima
                        }
                    }
                    if (a == 54) // modulo 6
                    {
                        for (co2 = 's'; co2 != 'n' && co2 != 'N'; co2) // la�o for para repetir o modulo at� o usuario digitar n�o.
                        {
                            do // do while para tratamento de erro
                            {
                                system("color 03"); // colorir fundos e letras
                                system("cls");      // limpando mensagens a cima
                                printf("\t\t\t\t\t      * * * * * * * * * * * * * *\n");
                                printf("----------------------------------------------*  Estrutura de repeti��o *----------------------------------------------\n");
                                printf("\t\t\t\t\t      * * * * * * * * * * * * * *\n");
                                printf("\n\n[Estrutura de repeti��o]\n\n");
                                if (t6 != 'c' && t6 != 'p') // mensagem de erro caso a char seja incorreto.
                                {
                                    printf("\n\n                                          Op��o n�o encontrada, digite novamente.\n\n\n\n");
                                }
                                printf("digite (P) para Pseudoc�digo ou (C) para Linguagem C: ");
                                t6 = getch();
                            } while (t6 != 'c' && t6 != 'C' && t6 != 'p' && t6 != 'P');
                            if (t6 == 'c' || t6 == 'C') // op��o c
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\t\t\t\t\t  [Estruturas de repeti��o LINGUAGEM C]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\nWhile(Enquanto)                          (1)\n");
                                printf("\nDo...While(fa�a...Enquanto)              (2)\n");
                                printf("\nFor(Para)                                (3)\n");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                printf("qual voc� deseja acessar?: ");
                                scanf("%d", &nsc);
                                switch (nsc)
                                {
                                case 1:
                                    system("cls"); // limpando mensagens a cima
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[WHILE(ENQUANTO)]\n\n");
                                    printf("O while � a estrutura de repeti��o mais simples. Ele repete a execu��o de um bloco de senten�as enquanto uma condi��o \n");
                                    printf("permanecer verdadeira. Na primeira vez que a condi��o se tornar falsa, o while n�o repetir� a execu��o do bloco, \n");
                                    printf("e a execu��o continuar� com a senten�a ou comando que vem logo ap�s o bloco do while, na seq��ncia do programa. \n");
                                    printf("\n\tSINTAXE: \n\t\twhile(_condi��o_)\n\t\t{\n\t\t\t**Instru��es**;\n\t\t}\n\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    break;
                                case 2:
                                    system("cls"); // limpando mensagens a cima
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[DO...WHILE(FA�A...ENQUANTO)]\n\n");
                                    printf("Esta estrutura tem um comportamento muito semelhante ao while, com uma diferen�a crucial: a condi��o � verificada ap�s\n");
                                    printf("executar o bloco de instru��es correspondente. ");
                                    printf("\n\n\tSINTAXE: \n\t\tdo\n\t\t{\n\t\t   **Instru��es**;\n\t\t}\n\t\twhile(_condi��o_);\n\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    break;
                                case 3:
                                    system("cls"); // limpando mensagens a cima
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[FOR(PARA)]\n\n");
                                    printf("O For � a estrutura de repeti��o que utilizamos quando sabemos a quantidade de repeti��es que um bloco de c�digo deve \n");
                                    printf("ser executado. A sintaxe � composta por tr�s express�es separadas por ponto e v�rgula. Elas controlam o in�cio do loop \n");
                                    printf("e as condi��es de como cada itera��o ir� executar.\n");
                                    printf("\n\n\tSINTAXE: \n\t\tfor(valor_inicial; condi��o_final; valor_incremento)\n\t\t{\n\t\t **Instru��es**;\n\t\t}\n\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    break;
                                default:
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n                                                Estrutura n�o encontrada\n\n\n");
                                    break;
                                }
                            }
                            if (t6 == 'p' || t6 == 'P') // op��o p
                            {
                                system("cls"); // limpando mensagens a cima
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\t\t\t\t\t[Estruturas de repeti��o em PSEUDOC�DIGO]\n");
                                printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                printf("\n(Enquanto)                               (1)\n");
                                printf("\n(fa�a...Enquanto)                        (2)\n");
                                printf("\n(Para)                                   (3)\n");
                                printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                printf("qual voc� deseja acessar?: ");
                                scanf("%d", &nsc);
                                system("cls"); // limpando mensagens a cima
                                switch (nsc)   // switch case para escolha das op��es
                                {
                                case 1:
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                    printf("\n[ENQUANTO]\n\n");
                                    printf("O Enquanto � a estrutura de repeti��o mais simples. Ele repete a execu��o de um bloco de senten�as enquanto uma condi��o \n");
                                    printf("permanecer verdadeira. Na primeira vez que a condi��o se tornar falsa, o while n�o repetir� a execu��o do bloco, \n");
                                    printf("e a execu��o continuar� com a senten�a ou comando que vem logo ap�s o bloco do while, na seq��ncia do programa. \n");
                                    printf("\n\tSINTAXE: \n\t\tenquanto (_condi��o_) faca\n\t\t***Instru��es***\n\t\tfimenquanto\n");
                                    printf("\t\tO \"fimenquanto\" � uma instru��o que dara fim a estrutura de repeti��o ENQUANTO.");
                                    printf("\n-----------------------------------------------------------------------------------------------------------------------\n\n");
                                    break;
                                case 2:
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[FA�A...ENQUANTO]\n\n");
                                    printf("Esta estrutura tem um comportamento muito semelhante ao ENQUANTO, com uma diferen�a crucial: a condi��o � verificada ap�s\n");
                                    printf("executar o bloco de instru��es correspondente. ");
                                    printf("\n\tSINTAXE: \n\t\trepita \n\t\t***Instru��es***\n\t\tate(_condi��o_de_parada_)\n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    break;
                                case 3:
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    printf("\n[PARA]\n\n");
                                    printf("O PARA � a estrutura de repeti��o que utilizamos quando sabemos a quantidade de repeti��es que um bloco de c�digo deve \n");
                                    printf("ser executado. A sintaxe � composta por tr�s express�es separadas por ponto e v�rgula. Elas controlam o in�cio do loop \n");
                                    printf("e as condi��es de como cada itera��o ir� executar.\n");
                                    printf("\n\tSINTAXE: \n\t\tPARA **vari�vel** DE **valor_inicial** ATE **valor_final** PASSO **incremento** FACA");
                                    printf("\n\t\t***Instru��es***\n\t\tfimpara\n");
                                    printf("\nO [PASSO **incremento**] � opcional, esse recurso serve pera definir qual o valor do incremento da [**vari�vel**], \n");
                                    printf("por exemplo de 1 em 1 (padr�o), de 2 em 2, de 3 em 3, etc. \n");
                                    printf("-----------------------------------------------------------------------------------------------------------------------\n");
                                    break;
                                default:
                                    system("cls"); // limpando mensagens a cima
                                    printf("\n                                                Estrutura n�o encontrada\n\n\n");
                                    break;
                                }
                            }
                            // mensagem para escolher se continua no modulo sim ou n�o.
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
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
                        printf("\n\nUm vetor � uma vari�vel que possui v�rias ocorr�ncias de um mesmo tipo. Cada ocorr�ncia � acessada atrav�s de um �ndice;");
                        printf("\nOs vetores tamb�m s�o chamados de arrays ou matrizes unidimensionais por possu�rem somente um �ndice;");
                        printf("\nPara definir um vetor em C deve-se indicar a quantidade de ocorr�ncia que este ter�,");
                        printf("\ncolocando na sua defini��o o valor entre [ ];");
                        printf("\nOs �ndices de um vetor em C, sempre come�ar�o em zero. Portanto,");
                        printf("\npara se acessar a primeira ocorr�ncia de um vetor deve-se indicar o �ndice zero");
                        printf("\nOcupam posi��es cont�guas na mem�ria;");
                        printf("\nO �ndice varia obrigatoriamente de 0 a N-1, onde N � o tamanho do vetor;");
                        printf("\nOs elementos podem ser de qualquer tipo, mas s�o sempre do mesmo tipo;                                                            ");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                        printf("\n\n        Exemplo: int notas[4];                                                                                          ");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                        printf("\n\n      O vetor tem 4 elementos do tipo inteiro;                                                                                ");
                        printf("\n      Os elementos est�o nas posi��es 0, 1, 2 e 3;                                                                            ");
                        printf("\n      Os elementos s�o referenciados como notas[0], notas[1], notas[2] e notas[3];                                            ");
                        printf("\n\nCada posi��o deve ser tratada exatamente como uma vari�vel do tipo do vetor Atribui��o de Valores ao Vetor              ");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                        printf("\n\n        Exemplo: int notas[4];                                                                                          ");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                        printf("\n\n      O vetor tem 4 elementos;                                                                                                ");
                        printf("\n      Os elementos est�o nas posi��es 0, 1, 2 e 3;                                                                            ");
                        printf("\n      Os elementos s�o referenciados como: notas[0],                                                                          ");
                        printf("\n      notas[1], notas[2] e notas[3];                                                                                          ");
                        printf("\n      Atribui��o de valores aos elementos do vetor:                                                                           ");
                        printf("\n      notas[0] = 5;                                                                                                           ");
                        printf("\n      notas[1] = 2;                                                                                                           ");
                        printf("\n      notas[2] = 6;                                                                                                           ");
                        printf("\n      notas[3] = 10;                                                                                                          ");
                        printf("\n\nINICIALIZA��O DE VETORES\n");
                        printf("\nint a[4]={1,2,3};");
                        printf("\nCria um vetor de quatro inteiros e inicializa a[0]=1, a[1]=2, e a[2]= 3; a[3] fica valendo zero;");
                        printf("\nint a[]={1,2,3};");
                        printf("\nCria um vetor de apenas tr�s elementos, com inicializa��o equivalente ao anterior;");
                        printf("\nchar a[3]={'b','k','n'};");
                        printf("\nCria um vetor de tr�s caracteres e inicializa a[0]='b',");
                        printf("\na[1]='k', e a[2]='n';");
                        printf("\nint v[10];");
                        printf("\nCria um vetor de dez posi��es inteiras, n�o inicializado.");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                        printf("\n\n\n\n\t\tSintaxe:");
                        printf("\n\n\t\t\ttipo_vari�vel nome_vetor[tamanho];\n\n\n\n");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 71);
                        printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
                    }
                    if (a == 56) // modulo 8 / ajuda
                    {
                        for (b7 = 's'; b7 != 'n' && b7 != 'N'; b7) // la�o for para repeti��o at� o usuario digitar 'n'
                        {
                            do // do while para tratamento de erro
                            {
                                system("cls");      // limpando mensagens a cima
                                system("color 08"); // colorir fundos e letras
                                printf("\n\n-------------------------------------------------------MAIS OP��ES------------------------------------------------------");
                                printf("\n\n\n                                     Instru��es/ajuda                      ( 1 )");
                                printf("\n\n                                         Cr�ditos                          ( 2 )");
                                printf("\n\n\n\n------------------------------------------------------------------------------------------------------------------------");
                                if (ajuda < 1 || ajuda > 2)
                                {
                                    printf("\n                                         Op��o n�o encontrada, Digite novamente.");
                                }
                                printf("\n\n\n\n\n                                                digite o n�mero da op��o: ");
                                scanf("%d", &ajuda);
                            } while (ajuda < 1 || ajuda > 2);
                            switch (ajuda)
                            {
                            case 1:
                                system("cls");      // limpando mensagens a cima
                                system("color 08"); // colorir fundos e letras
                                printf("\n\n                                                     INSTRU��ES/AJUDA\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n     COMO ULTILIZAR O PROGRAMA?:\n\n");
                                printf("\n  -voc� consegue ter acesso ao programa atrav�s das teclas pr� determinas depedendo da ocasi�o, sendo elas:\n   1,2,3,4,5,6,7,8,9,s,n,c,p,[Enter].\n");
                                printf("\n  -Lembre-se toda vez que voc� precisar escolher alguma op��o por meio de n�meros, escreva o n�mero e pressione [ENTER].\n");
                                printf("\n  -para fechar o programa, espere a mensagem aparecer assim que voc� fizer qualquer intera��o.\n");
                                printf("\n  -se voc� escolher seguir o cronograma, ser� preciso entrar em um m�dulo para conseguir liberar o outro. \n");
                                printf("   isso n�o ir� ocorrer caso escolha n�o seguir o cronograma.");
                                printf("\n\n------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n    QUAL O OBJETIVO DO PROGRAMA?:\n\n");
                                printf("\n  ajudar e instruir calouros dos cursos de exatas que possuem a materia de Algoritimo e Programa��o 1 (AP1) e, auxiliar");
                                printf("\n  aprendizagem basica sobre linguagens de programa��o(C e Portugol) e fluxogramas\n\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                printf("\n\n    ASSUNTO DOS M�DULOS RESUMIDO:\n\n");
                                printf("\n  M�dulo 1: introdu��o dos 3 formas de demonstra programa��o e suas origens sendo elas\n  Pseudoc�digo(portugol), Fluxograma e Linguaguem C");
                                printf("\n\n  M�dulo 2: conceitos iniciais sobre algoritmos, tipos de dados da linguagem C, tipos de dados em pseudoc�dico(portugol)\n");
                                printf("\n\n  M�dulo 3: conceitos sobre estrutura sequencial atrav�s de fluxograma\n");
                                printf("\n\n  M�dulo 4: conceitos e exemplos sobre estrutura condicional em linguagem c e pseudocodigo(portugol)\n");
                                printf("\n\n  M�dulo 5: conceitos e exemplos sobre estrutura condicional Composta em linguagem c e pseudocodigo(portugol)\n");
                                printf("\n\n  M�dulo 6: conceito e exemplos sobre Estruturas de repeti��o/la�os de repeti��o em linguagem C e Pseudocodigo(portugol)\n");
                                printf("\n\n  M�dulo 7: conceitos e exemplo sobre introdu��o de Vetores (uma forma diferente de manipular variaveis)\n");
                                printf("------------------------------------------------------------------------------------------------------------------------");
                                break;
                            case 2:
                                system("cls"); // limpando mensagens a cima
                                printf("\n\n                                                        CR�DITOS:\n");
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
                                printf("\n\n\n\n\n                               Trabalho final da diciplina Algoritimo e Programa��o 1.");
                                printf("\n\n                                    Universidade federal de Jatai - GO  (UFJ) 2022");
                                printf("\n\n------------------------------------------------------------------------------------------------------------------------\n\n");
                                break;
                            }
                            // mensagem se deseja continuar no modulo
                            printf("\n\n\t\t\t\t\t     deseja continuar nesse modulo?\n\n\t\t            S para (sim)\t\t\t\t\t N para (n�o)  \n\n");
                            b7 = getch();
                            system("cls"); // limpando mensagens a cima
                        }
                    }
                    if (a > 56 || a < 49) // tratamento de erro caso o modulo descrito n�o exista.
                    {
                        system("cls"); // limpando mensagens a cima
                        printf("\n\n\n\n                                                M�dulo n�o encontrado!!!\n\n\n\n\n");
                    }
                    printf("\a");
                    // mensagem para fechar o programa ou escolher outro modulo.
                    printf("\n\t\t\t\t         Para fechar o programa digite ( 0 ) \n\n\t\t\t\t para escolher outro m�dulo aperte ( QUALQUER TECLA )\n");
                    b = getch();
                    system("cls");      // limpando mensagens a cima
                    system("color 70"); // colorir fundos e letras
                }
            }
            return 0;
        }
    }
}
// sistema caso a pessoa escolha n�o seguir o cronograma
