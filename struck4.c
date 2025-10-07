#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
struct phanso{
    int tuso;
    int mauso;
};
typedef struct phanso ps;
void nhap(ps *s){
    printf("\nnhap tu so va mauso\n");
    scanf("%d", &s->tuso);
    getchar();
    scanf("%d", &s->mauso);
    }
void in(ps s){
    printf("%d/%d", s.tuso, s.mauso);
    }
void kiemtra(int a, int b, int *ket_qua_ucln){
        a = abs(a);
        b = abs(b);
        while(b != 0){
            int temp = b;
            b = a%b;
            a = temp;
        }
            *ket_qua_ucln = a;

    }
 void kiem_tra_va_toi_gian(ps *p) {
    if (p->tuso == 0) {
        p->mauso = 1;
        printf("Phan so da toi gian (0/1).\n");
        return;
    }
    if (p->mauso < 0) {
        p->tuso = -p->tuso;
        p->mauso = -p->mauso;
    }

    int ucln;
    kiemtra(p->tuso, p->mauso, &ucln); 

    if (ucln == 1) {
        printf("Phan so ");
        in(*p);
        printf(" da toi gian.\n");
    } else {
        printf("Phan so ");
        in(*p);
        printf(" chua toi gian. Rut gon thanh ");
        p->tuso /= ucln;
        p->mauso /= ucln;
        in(*p);
        printf(".\n");
    }
}
void congtru(ps ps1, ps ps2, ps *tong, ps *hieu, ps *tich,ps *thuong ) { 
    tong->tuso = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
    tong->mauso = ps1.mauso * ps2.mauso;
    hieu->tuso = ps1.tuso * ps2.mauso - ps2.tuso * ps1.mauso;
    hieu->mauso = ps1.mauso * ps2.mauso;
    tich->tuso = ps1.tuso * ps2.tuso;
    tich->mauso = ps1.mauso * ps2.mauso;
    thuong->tuso = ps1.tuso * ps2.mauso;
    thuong->mauso = ps1.mauso * ps2.tuso;
}
int main(){
    ps ps1;
    ps ps2;
    ps tong;
    ps hieu;
    ps tich;
    ps thuong;
    nhap(&ps1);
    in(ps1);
    nhap(&ps2);
    in(ps2);
    congtru(ps1, ps2, &tong, &hieu, &tich, &thuong); 
    printf("\ntong bang ");
    in(tong);
    kiem_tra_va_toi_gian(&tong);
    printf("\nhieu bang ");
    in(hieu);
    kiem_tra_va_toi_gian(&hieu);
    printf("\ntich bang ");
    in(tich);
    kiem_tra_va_toi_gian(&tich);
    printf("\nthuong bang ");
    in(thuong);
    kiem_tra_va_toi_gian(&thuong);
}   
