#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int x;
  float n1, n2, n3, fre, media;
  char *y = 0;
  scanf("%f %f %f %f", &n1, &n2, &n3, &fre);
  
  media = (((n1 + n2) * 2) + (n3 *3)) / 7;
  x = 100 * fre;

  if (x < 75){
    y = "Aluno reprovado por faltas";
  }else{
    if(media > 9){
      y = "Aluno aprovado com louvor";
    }
    if(media <= 9 && media >= 6){
      y = "Aluno aprovado";
    }
    if(media < 6 && media > 3.95){
      y = "Aluno de recuperação";
    }
    if(media < 3.95){
      y = "Aluno reprovado";
    }
  }
  
  printf("Frequencia: %d%%\n", x);
  printf("Media: %.1f\n", media);
  printf("%s!", y);

  return 0;
}
