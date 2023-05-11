// #include <stdio.h>

// int main(void) {
//   int a;

//   char s_n;
//   int teste = 1;
//   int quant_car = 0;
//   int ano;
//   int cont_ano = 0;
//   float cont_velo = 0;
//   float soma_velo = 0;
//   float velo;
//   float media_velo;

//   while (teste == 1) {
//     printf("Digite s ou n: ");
//     scanf("%c", &s_n);

//     if (s_n == 's') {
//       printf("Digite o ano: ");
//       scanf("%i", &ano);
//       printf("Digite a velocidade: ");
//       scanf("%f", &velo);
//       quant_car += 1;
//       soma_velo += velo;
//       if (ano > cont_ano) {
//         cont_ano = ano;
//       }
//       if (velo > cont_velo) {
//         cont_velo = velo;
//       }
//     }

//     else {
//       media_velo = soma_velo / quant_car;
//       printf("%.2f\n", cont_velo);
//       printf("%i\n", ano);
//       printf("%.2f\n", media_velo);
//       teste = 0;
//     }
//   }
//   return 0;
// }