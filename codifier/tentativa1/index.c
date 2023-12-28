#include <stdio.h>
#include <string.h>

#define max_ADM 1
#define max_Users 10
#define max_Tam_Login 17
#define max_Tam_Senha 17

int opcao = 0;

int loginEfetuado = 0; // 0 = false / 1 = true

char loginADM[max_ADM] = "admin";
char senhaADM[max_ADM] = "admin";
//por enquanto esses dados serão a "chave mestre" do sistema

char login[max_Tam_Login + 1];
char senha[max_Tam_Senha + 1];
// +1 por causa do caractere nulo \0

char dadosUsuarios[max_Users][max_Tam_Login + max_Tam_Senha];


void telaLoginADM() {

    printf("\n\n!!!!*****SISTEMA VITINHO.LTDA ONLINE CARALHO*****!!!!\n\n");

    while(!loginEfetuado) {
        printf("Digite o Login: ");
        scanf("%16s", dadosUsuarios[0]);
        
        printf("Agora digite a Senha: ");
        scanf("%16s", dadosUsuarios[0] + max_Tam_Login);
        
        if (strcmp(loginADM, dadosUsuarios[1]) == 0 && strcmp(senhaADM, dadosUsuarios[1]) == 0) {
            
            loginEfetuado = 1;
            printf("\n\nLogin Efetuado!!\n\n");

        } else {
            printf("\n\nLogin nao efetuado ou nao encontrado no sistema. Tente novamente\n\n");
        }
        
    }
        //aqui recebemos os dados do usuario e guardamos na array, mais pra frente dá pra colocar numa matriz, que imagino ser o mais basico para reter informações em formmatos de listas e dados de um monte de usuarios.
        //coloquei uma matriz, sim, é básico do básico, agora tenho que meter a cara pra achar um jeito de continuar voltando pro inicio do programa(cadastrando clientes) sem que o programa se encerre.
}

void telaLoginPrincipal() {
    int escala;
    for(escala = 0; escala < max_Users; escala++) {
        
    }
    while(!loginEfetuado) {
        printf("Digite o Login: ");
        scanf("%16s", dadosUsuarios[1]);
        
        printf("Agora digite a Senha: ");
        scanf("%16s", dadosUsuarios[1] + max_Tam_Login);
        printf("\n");
        
        if (strcmp(, dadosUsuarios[1]) == 0 && strcmp(senhaADM, dadosUsuarios[1]) == 0) {
            printf("\n\nLogin Efetuado!!\n\n");
            loginEfetuado = 1;
        } else {
            printf("Login nao Efetuado ou nao encontrado no sistema. Tente novamente\n\n");
        }
        
    }
}

void Menu() {
    printf("**************************************\n\n");
    printf("!!!!  SISTEMA LOGADO COM SUCESSO  !!!!\n\n");
    printf("**************************************\n\n");

    printf("1) - CADASTRAR NOVO CLIENTE\n");
    printf("2) - CADASTRAR NOVO ADMINISTRADOR\n");
    printf("3) - IMPRIMIR DADOS DOS USUARIOS\n");
    printf("4) - VOLTAR PARA A TELA DE LOGIN\n");
    printf("5) - SAIR DO SISTEMA\n");
    printf("ESCOLHA UMA OPCAO: ");    
    scanf("%d", &opcao);
    printf("\n");
}

int main() {

    telaLoginPrincipal();
    Menu();

    switch (opcao) {
        case 1:
            cadastroClientes();
            break;
        
        case 2: 
            cadastroAdministrador();
            break;

        case 3:
            imprimirDadosUsuarios();
            break;

        case 4:
            telaLoginPrincipal();
            break;

        case 5:
            printf("Saindo...\n");
            break;
        
        default:
            printf("Opcao Invalida!\n");
            Menu();
            break;

        }

    return 0;
}



void cadastroClientes() {
    int indiceUsuario = 1;

    printf("Adicione os dados do Novo Cliente\n");
    printf("Login: ");
    scanf("%16s", dadosUsuarios[indiceUsuario]);

    while (indiceUsuario < max_Users && strcmp(dadosUsuarios[indiceUsuario], dadosUsuarios) == 0) {
        printf("Login ja existente. Tente novamente\n");
        printf("Login: ");
        scanf("%16s", dadosUsuarios[indiceUsuario]);
    }

    printf("Senha: ");
    scanf("%16s", dadosUsuarios[indiceUsuario] + max_Tam_Login);
    
    printf("\n");
    
    printf("NOVO CLIENTE CADASTRADO COM SUCESSO!!\n\n");

    Menu();
}

void cadastroAdministrador() {
    int indiceUsuario = 3;
    
    printf("Adicione os dados do Novo Administrador\n");
    printf("Login: ");
    scanf("%16s", dadosUsuarios[indiceUsuario]);
    
    while (indiceUsuario < max_Users && strcmp(dadosUsuarios[indiceUsuario], dadosUsuarios[0]) == 0) {
        printf("Login ja existente. Tente Novamente.\n");
        printf("Login: ");
        scanf("%s", dadosUsuarios[indiceUsuario]);
    }

    printf("Senha: ");
    scanf("%16s", dadosUsuarios[indiceUsuario] + max_Tam_Login);

    printf("\n");
    printf("NOVO ADMINISTRADOR CADASTRADO COM SUCESSO!!\n\n");
    
    Menu();

}

void imprimirDadosUsuarios() {
    printf("DADOS DOS USUARIOS CADASTRADOS: \n");
    for(int i = 0; i < max_Users; i++) {
        printf("%d:\n", i + 1);
        printf("Login: %s\n", dadosUsuarios[i]);
        printf("Senha: %s\n", dadosUsuarios[i] + max_Tam_Login);
    }
    printf("\n");
}