#include <stdio.h>
#include "stdlib.h"
struct NgaySinh{
    int ngay;
    int thang;
    int nam;
};
int main(){

    FILE *f;
    // Tao, mo file
    f = fopen("Bai_90.bĩn", "wb");
    if(f==NULL){
        printf("khong co");
        return 1;
    }
    // // Ghi du lieu
    struct NgaySinh n1;
    n1.ngay = 1;
    n1.thang = 12;
    n1.nam = 2025;

    fwrite(&n1, sizeof (struct NgaySinh), 1, f);

    // Dong file
    fclose(f);

    return 0;
}