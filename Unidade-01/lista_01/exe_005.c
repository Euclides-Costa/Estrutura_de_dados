/*
5. Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em
uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada: A entrada contém um valor inteiro N.
Saída: Imprima o tempo lido no arquivo de entrada (segundos), convertido para
horas:minutos:segundos, conforme exemplo fornecido.
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
  /*
    s  = segundo
    h = hora
    m = minuto
  */
  
  int s = 0;
  int h = 0;
  int m = 0;
  float num = 0;
  float cont = 0;
  float soma = 0;

  printf("Digite um número real: ");
  scanf("%f", &num);

  h = num/3600;
  cont = num/3600;
  soma = cont - h;

  m = soma * 60;
  cont = soma * 60;
  soma = cont - m;

  s = ceil(soma * 60);

  printf("%d:%d:%d", h, m, s);

  return 0;
}
