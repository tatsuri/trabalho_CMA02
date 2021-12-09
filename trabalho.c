#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

  int main(){
  setlocale(LC_ALL, "Portuguese");



    int codigo [2];                          /|
    char descricao_do_produto [50][2];       /|
    float preco_de_custo [2];                /|
    float preco_de_venda [2];                /|
    int quantidade [2];                      /|
    char fornecedor [50][2];                 /|
    float lucro [2];                         /|      VARIAVEIS PRINCIPAIS.
    int codigo_da_nf [2];                    /|
    char marca [50][2];                      /|
    char origem [50][2];                     /|
    char data_de_compra[50][2];              /|
    char data_de_venda [50][2];              /|



    int cont;
    int validar;
    float validar_real;
    int op;
    int op2=1;
    int vetor = 0;
    char pesquisa;
    int achou;
    int i;


    do{
    printf("\n\n\n\n\t\t ============================================= ");
    printf("\n\n\n\t\t\t\t  Bem Vindo ");
    printf("\n\n\n\n\t\t ============================================= ");
    printf("\n\n\n\n selecione uma opção: \n\n\n\n");
    printf("\n\n 1 - cadastrar produto. \n\n\n");
    printf("\n\n\n 2 - ver produtos cadastrados. \n\n\n\n\n ");
    printf("\n\n\n 3 - finalizar. \n\n\n\n\n ");
    scanf ("%d", & op);


    if (op==1){
    while (op2 == 1){

         system("cls");

      printf ("\n\n descrição do produto: ");
      fflush(stdin);
      gets(descricao_do_produto[vetor]);
      printf ("%s\n",  descricao_do_produto[vetor]);
      printf ("\n\n informe a marca do produto: ");
      fflush(stdin);
      gets(marca[vetor]);
      printf ("%s\n",  marca[vetor]);
      printf ("\n\n informe a origem do produto: ");
      fflush(stdin);
      gets(origem[vetor]);
      printf ("%s\n",  origem[vetor]);
      printf ("\n\n informe o fornecedor do produto: ");
      fflush(stdin);
      gets(fornecedor[vetor]);
      printf ("%s\n",  fornecedor[vetor]);
      printf ("\n\n informe a data de compra: ");
      fflush(stdin);
      gets(data_de_compra[vetor]);
      printf ("%s\n",  data_de_compra[vetor]);
      printf ("\n\n informe o codigo da nota fiscal: ");
      scanf ("%d", & codigo_da_nf[vetor]);
      printf ("%d\n",  codigo_da_nf[vetor]);
      printf ("\n\n informe a quantidade de produtos:");
      scanf ("%d", & quantidade[vetor]);
      printf ("%d\n",  quantidade[vetor]);
      printf ("\n\n informe o preço de custo do produto:");
      scanf ("%f",  & preco_de_custo[vetor]);
      printf ("%f\n",  preco_de_custo[vetor]);
      printf ("\n\n informe o preço de venda do produto:");
      scanf ("%f", & preco_de_venda[vetor]);
      printf ("%f\n",  preco_de_venda[vetor]);
      if (vetor == 0){
        codigo[vetor]=1;
      }else{
        codigo[vetor]=codigo[vetor]+1;
      }

      printf ("o seguinte produto foi cadastrado: %s\n", descricao_do_produto[vetor]);

      if (vetor<2){
      printf ("\n\n deseja cadastrar outro produto?");
      printf ("\n\n 1 - sim.");
      printf ("\t\t 2 - nao.");
      scanf ("%d", & op2);
      vetor=vetor+1;
      }else{
      op2=2;
      printf ( "\n\n limite de produtos cadastrados atingido.");
      }
    }

    }else if(op==2){
        if (codigo[vetor]==0){
            printf("não há nenhum produto cadastrado.");
        }else{
        for (i=0;i <= vetor; i++){ system("cls");
                                printf ("\n\n codigo: %d\n", & codigo[i]);
                                printf ("\n\n descrição: %s\n", & descricao_do_produto[i]);
                                printf ("\n\n marca: %s\n", &  marca[i]);
                                printf ("\n\n fornecedor: %s\n", & fornecedor[i]);
                                printf ("\n\n origem: %s\n", & origem[i]);
                                printf ("\n\n codigo da nota fiscal: %d\n", & codigo_da_nf[i]);
                                printf ("\n\n data de compra: %s\n", & data_de_compra[i]);
                                printf ("\n\n preço de custo: %f\n", & preco_de_custo[i]);
                                printf ("\n\n preço de venda: %f\n", & preco_de_venda[i]);
                                printf ("\n\n");
                                system ("pause");

                                }}

    }
    }while(op!=3);
  }
