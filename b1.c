#include <stdio.h>
#include <string.h> // Cần thiết cho strcspn để xử lý fgets

struct hoso {
    char hovaten[100];
    double diem; // Sử dụng double như trong hình
};
typedef struct hoso hs;

void nhap(hs *a) {
    printf("Nhap ho va ten: ");
    getchar();
    fgets(a->hovaten, sizeof(a->hovaten), stdin);
    printf("Nhap diem: ");
    scanf("%lf", &a->diem); 
}

void in(hs a) {
    printf("HovaTen: %s, Diem: %.2lf ", a.hovaten, a.diem);
}
void rank(hs s){
    if (s.diem >= 9.0 && s.diem <= 10.0) { // So sánh với double nên dùng .
        printf("gioi\n");
    } else if (s.diem >= 7.0 && s.diem < 9.0) {
        printf("kha\n");
    } else if (s.diem >= 5.0 && s.diem <= 6.0) {
        printf("trung binh\n");
    } else {
        printf("khong dat\n");
    }
}
int main() {
    hs a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        nhap(&a[i]);
    }
    for (int i = 0; i < n; i++) {
        in(a[i]); 
        rank(a[i]);
    }
}