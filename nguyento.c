#include <stdio.h>
#include <math.h>
int main(){

    int n;
    scanf("%d", &n);
    int nguyento = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)
        nguyento 0;
        break;
    }
    if(nguyento){
        printf("la so");
    }else{
        printf("khong la so");
    }
}