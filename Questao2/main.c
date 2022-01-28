#include <stdio.h>

int main(void) {
  char caracter[2];
  int x = 0;
  FILE *image;
  
  image = fopen("python.jpeg", "r");
  while(fgets(caracter, 2, image) != NULL && x <= 16){
      x++;
      printf("%s", caracter);
  }  
  fclose(image);

  return 0;
}