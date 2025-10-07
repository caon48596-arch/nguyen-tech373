#include <stdio.h>
#include <string.h>
struct canbo{
    char hovaten[100];
    double luong;
    int tuoi;
    char diachi[50];
};
typedef struct canbo cb;
void nhap(cb *s){
    getchar();
    printf("nhap ho va ten ");
    fgets(s->hovaten,sizeof(s->hovaten),stdin);
    printf("nhap luong ");
    scanf("%lf", &s->luong);
    getchar();
    printf("nhap tuoi ");
    scanf("%d", &s->tuoi);
    getchar();
    printf("nhap dia chi ");
    fgets(s->diachi,sizeof(s->diachi),stdin);
}
void in(cb s){
    printf("ten %s luong %.1lf tuoi %d dia chi %s ", s.hovaten, s.luong, s.tuoi, s.diachi);
}
int seach(cb s1, cb s2){
    int j1 = 0, j2 = 0;
    int viTri1, viTri2;
    char ten1[100], ten2[100];
    int length1 = 0, length2 = 0;
    
    while(s1.hovaten[j1] != '\0'){
        if(s1.hovaten[j1] == 32){
            viTri1 = j1;
        }
        j1++;
    }
    viTri1++;

    while(s2.hovaten[j2] != '\0'){
        if(s2.hovaten[j2] == 32){
            viTri2 = j2;
        }
        j2++;
    }
    viTri2++;
    
    while(s1.hovaten[viTri1] != '\0') {
        ten1[length1] = s1.hovaten[viTri1];
        length1++; 
        viTri1++;
    }
    ten1[++viTri1] = '\0';

    while(s2.hovaten[viTri2] != '\0') {
        ten2[length2] = s2.hovaten[viTri2];
        length2++; 
        viTri2++;
    }
    ten2[++viTri2] = '\0';

    return strcmp(ten1, ten2);
}

void swap(cb cbS[],int x, int y){
    cb temp = cbS[x];
    cbS[x]  = cbS[y];
    cbS[y]  = temp;
}
int main(){
    cb s[100];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        nhap(&s[i]);
    }
    for(int i = 0; i < n; i++){
        in(s[i]);
    }
    for (int i = 0; i < n; i++) {
        int max = i;
        for (int j = i; j < n; j++) {
            if (seach(s[max], s[j]) > 0) {
                swap(s, max, j);
            }
        }
    }
    printf("\nDanh sach sau khi sap xep theo ten\n");
    for (int i = 0; i < n; i++) {
        in(s[i]);
    }
}