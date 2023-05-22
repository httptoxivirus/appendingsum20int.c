#include<stdio.h>
int main() {
    FILE *fp;
    fp = fopen("file1.txt","w");
    int arr[50] , sum = 0;
     if(fp == NULL) {
      printf("ERROR OPENING \n");
      return(1);
    }
    for(int i=0; i<20; i++) {
      scanf("%d",&arr[i]);
      fprintf(fp,"%d ",arr[i]);
    }
    
    for(int j=0; j<20; j++) {
        sum = sum + arr[j];
    }
    fclose(fp);
    
    fp = fopen("file1.txt","a");
     if(fp == NULL) {
      printf("ERROR OPENING \n");
      return(1);
    }
    fprintf(fp,"sum = %d\n",sum);
    fclose(fp);
    return 0;
}  
