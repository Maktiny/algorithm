#include<stdio.h>

int main(){
  int n ;
  scanf("%d",&n);
  int ret[5][5]={0};
  //int n = 5;
 int x = 0, y = 0;
        int loop = n / 2;
        int i = 0, j = 0;
        int count = 1;
        int offset = 1;
        while(loop--){
            i = x;
            j = y;
            //left --> right
            for(j = y; j <  n - offset  ; j++){
                ret[i][j] = count++;
            }

            //up --> down
            for(i = x; i <  n -offset; i++){
                ret[i][j] = count++;
            }

            //right --> left
            for(; j > y; j--){
                ret[i][j] = count++;
            }

            //down --> up
            for(;i > x  ; i--){
                ret[i][j] = count++;
            }
            x++;
            y++;
            offset += 1;
        }
        int mid = n / 2;
        if(n % 2){
            ret[mid][mid] = count;
        }
      for(int m = 0; m < n;m++ ){
        for(int k = 0; k < n;k++){
          printf("%d ",ret[m][k]);
        }
        printf("\n");
      }
    return 0;
}
