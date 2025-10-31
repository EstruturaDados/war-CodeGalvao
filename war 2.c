#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --------- Definição da Estrutura (Struct) -------

struct Territorio{
  char nome [30];
  char cor [10];
  int tropas;
};

// -------- Limpar Buffer de entrada ---------
void limparBufferEntrada(){
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

// --------- Codigo Principal -----

int main (){
  struct Territorio Exercito[5];
  int totalTerritorios = 0;

printf ("------ Cadastre 5 Territorios ------ \n");
printf ("\n");
  while (totalTerritorios <= 4 ){
  printf ("Nome do Territorio: ");
  fgets (Exercito[totalTerritorios].nome, 30, stdin);

  printf ("Cor do Exercito (ex: Amarelo, Azul): ");
  fgets (Exercito [totalTerritorios].cor, 10, stdin);

  printf ("Número de Tropas: ");
  scanf ("%d", &Exercito[totalTerritorios].tropas);

  limparBufferEntrada();

  totalTerritorios++;

  printf ("\n");
}
  for (int i = 0; i < totalTerritorios; i++){
  printf ("Nome do Territorio: %s", Exercito[i].nome);
  printf ("Cor do Exercito: %s", Exercito[i].cor);
  printf ("Numero de Tropas %d \n", Exercito[i].tropas);
  printf ("\n");
  }

return 0;
}
