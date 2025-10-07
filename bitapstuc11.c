#include <stdio.h>
#include <string.h>
struct danhsach{
    char hovaten[100];
    char diachi[100];
    char sdt[10];
};

typedef struct danhsach ds;
void nhap(ds *s){
    getchar();
    printf("nhap ten ");
    fgets(s->hovaten,sizeof(s->hovaten),stdin);
    printf("nhap diachi ");
    fgets(s->diachi,sizeof(s->diachi),stdin);
    printf("nhap sdt ");
    fgets(s->sdt, sizeof(s->sdt),stdin);
}
void in(ds s){
    printf("ten %s diachi %s sdt %s", s.hovaten, s.diachi, s.sdt);
}
void seach(ds s[], int n, char *a){
    fgets(a,sizeof(a),stdin);
    for(int i = 0; i < n;i++){
        if(strcmp(a, s[i].sdt) == 0){
        in(s[i]);
    }
}
}
int main(){
    ds s[100];
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        nhap(&s[i]);
    }
    for(int i = 0; i< n; i++){
        in(s[i]);
    }
    printf("nhap so dien thoai ");
    char a[100];
    seach(s, n, a);
}