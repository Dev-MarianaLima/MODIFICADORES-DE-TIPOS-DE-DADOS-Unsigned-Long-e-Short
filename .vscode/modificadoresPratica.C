#include <cstdio>
#include <cstring>

int main (){

// Declarar variaveis Produto, U I estoque , double valor unitario , double valor total , e U I quantidade .

    char produtoA[30] = " Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA ;
    double valorTotalB ;

    int resultadoA, resultadoB;
    
// Exibir as informações dos Produtos

printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f \n",produtoA, estoqueA,valorA);
printf("\nProduto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

// Comparações com o valor minimo de estoque

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("\nO produto %s tem estoque minimo %d \n", produtoA,resultadoA);
    printf("\nO produto %s tem estoque minimo %d \n", produtoB,resultadoB);

//calcular o valor total do estoque de cada produto

    valorTotalA = estoqueA * valorA;
    valorTotalB = estoqueB * valorB;

    printf("\nO valor total de A ( R$ %2f) é maior que o valor total de B: (R$ %2f) ? \n",
                 estoqueA * valorTotalA,
                 estoqueB * valorB,
            (estoqueA * valorTotalA > estoqueB * valorTotalB));
 
return 0;

}

