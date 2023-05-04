// /*
// 3. Faça um programa para uma loja de tintas. O algoritmo deverá pedir o tamanho em  metros
// quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 3
// metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.
// Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
// */

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//   /*
//     t = tamanho em metros quadrados
//     v = valor total
//     li = litros
//     la = lata
//   */
//   int t = 0;
//   int v = 0;
//   float li = 0;
//   float la = 0; 
  
//   printf("Digite em metros quadrados o tamanho da área a ser pintada: ");
//   scanf("%d", &t);

//   li = t/3;
//   la = li/18;
  
//   if (li <= 18)
//   {
//     printf("Será necessário 1 lata de tinta.\nPreço total R$ 80");
//   }
//   else
//   {
//     la = ceil(la);
//     v = la * 80;
//     printf("Será necessário %.f lata de tinta.\nPreço total R$ %d", la, v);
//   }
  
//   return 0;
// }

