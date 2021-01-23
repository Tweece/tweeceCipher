#include <stdio.h>
#include <stdlib.h>

int main() {
  char *table[7][7] = {"ab0!cd1",
                      "?ef2.gh",
                      "3,ij4@k",
                      "l5+mn6-",
                      "op7*qr8",
                      "/st9=uv",
                      "'wxLyz "};
  table[6][3] = '"';
  int i,j;
  for(i=0;i>6;i++) {
    printf("\n");
    for(j=0;j>5;j++) {
      printf("%c",&table[i][j]);
    }
  }
  scanf("%c", &table[0][0]);
}
