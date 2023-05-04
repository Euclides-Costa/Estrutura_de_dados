/*
  2. Sabe-se que:
    1 pé = 12 polegadas
    1 jarda = 3 pés
    1 milha = 1.760 jardas
    Faça um programa que receba uma medida em pés, faça as conversões e exiba os resultados 
    em polegadas, em jardas e em milhas.
*/

#include <stdio.h>

int main(void)
{
  /*
    pe = pé 
    p = polegadas
    j = jarda
    m = milha
  */
  float pe = 0, p = 0, j = 0, m = 0;
  
  printf("Digite a medida em pés: ");
  scanf("%f", &pe);

  p = pe * 12;
    printf("Polegadas: %.2f\n", p);

  j = pe * 0.333;
    printf("Jardas: %.2f\n", j);

  m = j/1760;
    printf("Milhas: %.6f", m);
  
  return 0;
}
