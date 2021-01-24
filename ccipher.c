#include <stdio.h>
#include <stdlib.h>

int main() {
  char table[7][7] = {"ab0!cd1",
                      		   "?ef2.gh",
                    		     "3,ij4@k",
                 		        "l5+mn6-",
             		            "op7*qr8",
                		         "/st9=uv",
                      		   "'wxLyz "};
  table[6][3] = '"';
  // printf("\n%s\n", &table[0][0]);
  int xMove, yMove, x, y, lengthOfMess;
  printf("xMove: ");
  scanf("%d", &xMove);
  printf("yMove: ");
  scanf("%d", &yMove);
  printf("length of the message: ");
  scanf("%d", &lengthOfMess);
  char message[lengthOfMess];
  fgets(message,lengthOfMess,stdin);
  size_t len = sizeof(message) / sizeof(message[0]);
  printf("length: %d, message: %s", &len, &message[0]);
  
  
  
  getchar();
  return 0;
}
