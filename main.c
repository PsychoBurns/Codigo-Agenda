#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

/* STRUCT PARA INFORMAÇOES DOS CONTATOS DA AGENDA
IRA POSSUIR 10 ESPAÇOS PARA CONTATO*/
struct Agenda
{
    int id;
    char nome[100];
    char telefone[20];
    char email[100];
    char dataNascimento[10];
    char obs[200];
} agenda[10];

/* DECLARAÇÃO DE VAIRAVEIS GLOBAIS*/
int i = 0;
/*FIM DA DECLARAÇÃO DE VARIAVEIS*/

/* INICIO DA FUNÇÃO MENU
IRA POSSUIR TODOS AS OUTRAS FUNÇOES DO CODIGO*/
void menu()
{
    int opcMenu;
    do
    {
        printf("____________________________\n");
        printf("|         AGENDA           |\n");
        printf("|__________________________|\n");
        printf("| [1] -[CADASTRAR]         |\n");
        printf("| [2] -[LISTAR]            |\n");
        printf("| [3] -[BUSCAR]            |\n");
        printf("| [4]- [ALTERAR]           |\n");
        printf("| [5]- [EXCLUIR]           |\n");
        printf("| [0]- [SAIR]              |\n");
        printf("|__________________________|\n");
        scanf("%d", &opcMenu);

        switch (opcMenu)
        {
        case 1:
            /* Cadastro */
            cadastro();
            break;

        case 2:
            /* Listar */
            
            break;

        case 3:
            /* Buscar */
            break;

        case 4:
            /* Alterar */
            break;
        case 5:
            /* Excluir */
            break;
        case 0:
            /* Sair */
            break;

        default:
            printf("Opção invalida!");
            printf("Digite um opção valida!");
            break;
        }

    } while (opcMenu != 0);
}
/* FIM DA FUNÇÃO MENU*/

/* INICIO DA FUNÇÃO CADASTRAR CONTATO*/
void cadastro()
{
    int opcCadastro;
    int id = 0;

    for (i = 0; i < 10; i++)
    {
        if (i < 10)
        {
            printf("____________________________\n");
            printf("|  CADASTRO DE CONTATO     |\n");
            printf("|__________________________|\n");
            agenda[i].id = id++;
            printf("Nome Completo: \n");
            fflush(stdin);
            scanf("%s", agenda[i].nome);
            printf("Telefone | Ex: (00) 0000-0000 \n");
            fflush(stdin);
            scanf("%s", agenda[i].telefone);
            printf("Email: \n");
            fflush(stdin);
            scanf("%s", agenda[i].email);
            printf("Data de Nascimento | Ex: dd/mm/aaaa \n");
            fflush(stdin);
            scanf("%s", agenda[i].dataNascimento);
            printf("Observação sobre o contato: \n");
            fflush(stdin);
            scanf("%s", agenda[i].obs);
            printf("____________________________________\n");
            printf("| Cadastro realizado com sucesso ! |\n");
            printf("|__________________________________|\n");

            i = i++;
        }
        else
            printf("Agenda Cheia");

        printf("Deseja realizar outro cadastro?\n ");
        printf("________________\n");
        printf("| [1] -[SIM]   |\n");
        printf("| [2] -[NAO]   |\n");
        printf("|______________|\n");
        scanf("%d", &opcCadastro);
        if (opcCadastro == 2)
        {
            break;
        }
    }
    return (0);
}
/* FIM DA FUNÇÃO CADASTRAR CONTATO*/

/* INICIO DA FUNÇÃO LISTAR CONTATO
IRA LISTAR TODOS OS CONTATOS DA AGENDA*/
void listar()
{

    int opcListar;
    printf("____________________________\n");
    printf("|   LISTAR CONTATOS        |\n");
    printf("|__________________________|\n");
}
/* FIM DA FUNÇÃO LISTAR*/

/* INICIO DA FUNÇÃO BUSCAR CONTATO*/
void buscar()
{

    int opcBusca;
    printf("____________________________\n");
    printf("|      BUSCAR CONTATO      |\n");
    printf("|__________________________|\n");

    do
    {

        printf("Deseja realizar uma nova busca?\n ");
        printf("________________\n");
        printf("| [1] -[SIM]   |\n");
        printf("| [2] -[NAO]   |\n");
        printf("|______________|\n");
        scanf("%d", &opcBusca);
    } while (opcBusca == 1);
}
/* FIM DA FUNÇÃO BUSCAR CONTATO*/

/* INICIO DA FUNÇÃO ALTERAR CONTATO*/
void alterar()
{

    int opcAlterar;
    printf("____________________________\n");
    printf("|    ALTERAR CONTATO       |\n");
    printf("|__________________________|\n");

    do
    {

        printf("Deseja realizar outra alteração?\n ");
        printf("________________\n");
        printf("| [1] -[SIM]   |\n");
        printf("| [2] -[NAO]   |\n");
        printf("|______________|\n");
        scanf("%d", &opcAlterar);
    } while (opcAlterar == 1);
}
/* FIM DA FUNÇÃO ALTERAR CONTATO*/

/* INICIO DA FUNÇÃO EXCLUIR CONTATO*/
void excluir()
{

    int opcExcluir;
    printf("____________________________\n");
    printf("|    EXCLUIR CONTATO       |\n");
    printf("|__________________________|\n");

    do
    {

        printf("Deseja realizar outro contato?\n ");
        printf("________________\n");
        printf("| [1] -[SIM]   |\n");
        printf("| [2] -[NAO]   |\n");
        printf("|______________|\n");
        scanf("%d", &opcExcluir);
    } while (opcExcluir == 1);
}
/* FIM DA FUNÇÃO EXCLUIR CONTATO*/
int main(void)
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    menu();
    return 0;
}