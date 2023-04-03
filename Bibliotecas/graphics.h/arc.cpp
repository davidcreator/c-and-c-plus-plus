#include <graphics.h>

int main() {

  int gd = DETECT;
  int gm;
  int in = 0;

  initgraph(&gd, &gm, NULL);


  arc(200, 200, 0, 130, 50);

  while (in == 0) {
      in = getchar();
  }
  closegraph();

  return 0;
}

/*

  - Os dois primeiros argumentos 200 e 200 são as posições iniciais do arco

  - O terceiro argumento é o inicio do angulo começando a 0° da direita para o centro do arco

  - O quarto argumento é o angulo que termina o arco, no caso 130

  - O quinto argumento é o raio do arco, no caso 50



*/
