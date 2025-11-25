#include <stdio.h>

int main()
{
  int n,star=1;
  scanf("%d",&n);

  for(int i=0;i<n;i++){
          for(int k=1;k<n-i;k++){
    printf(" ");
  }

    for(int j=0;j<star;j++){
      printf("*");
    }
    star+=2;
    printf("\n");
  }
  return 0;
}