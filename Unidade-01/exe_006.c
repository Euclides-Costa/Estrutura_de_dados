// #include <stdio.h>
// #include <math.h>

// int main(void){

//   float a, b, c;
//   float delta;
//   float x1, x2;
  
//   printf("Digite o coeficiente A: ");
//   scanf("%f", &a);
//   printf("Digite o coeficiente B: ");
//   scanf("%f", &b);
//   printf("Digite o coeficiente C: ");
//   scanf("%f", &c);

//   delta = (b*b) - 4*(a*c);
//   if (delta < 0){
//     printf("Raizes imaginároas!");
//   }
//   else{
//     if (delta == 0){
//     x1 = - b/(2*a);
//     x2 = x1;  
//     printf("X1 = %f\nX2 = %f", x1, x2);
//     }
//     else{
//       x1 = (-b + sqrt(delta))/(2*a); 
//       x2 = (-b - sqrt(delta))/(2*a);
//       printf("X1 = %f\nX2 = %f", x1, x2);
//     }
//   }
//   return 0;
// }