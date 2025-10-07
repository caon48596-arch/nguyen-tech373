#include <stdio.h>
#include <string.h>
struct ball{
    char name[100];
    int thang;
    int hoa;
    int thua;
};
typedef struct ball ba;
void nhap(ba *a){
    printf("nhap ten doi ");
    getchar();
    fgets(a->name,sizeof(a->name),stdin);
    printf("nhap tran thang ");
    scanf("%d", &a->thang);
    getchar();
    printf("nhap tran hoa ");
    scanf("%d", &a->hoa);
    getchar();
    printf("nhap tran thua ");
    scanf("%d", &a->thua);
}
void in(ba a){
    printf("ten %s thang %d hoa %d thua %d", a.name, a.thang, a.hoa, a.thua);
}
void point(ba a[],int n,int max){
    int sum ;
    max = a[0].thang*3 + a[0].hoa*1 + a[0].thua*0;
    int x;
    for(int i = 1; i < n;i++){
        sum = a[i].thang*3 + a[i].hoa*1 + a[i].thua*0; 
        if(sum > max){
        max = sum;
        x = i;
            in(a[x]);
    }
}
}
int main(){
    ba a[100];
    int n;scanf("%d", &n);
    for(int i = 0; i < n; i++){
        nhap(&a[i]);
    }
    for(int i = 0; i< n; i++){
        in(a[i]);
    }
    int max;
    int i;
    point(a, n, max);
}