#include <stdio.h>

void hitungAngsuran(double pokokPinjaman, double bungaTahunan, int lamaPinjaman) {
    double angsuranPokok = pokokPinjaman / lamaPinjaman;
    double totalBunga = 0;
    double totalAngsuran = 0;

    printf("Rincian Angsuran:\n");
    for (int bulan = 1; bulan <= lamaPinjaman; bulan++) {
        double bungaBulanan = (pokokPinjaman - (bulan - 1) * angsuranPokok) * (bungaTahunan / 100) / 12;
        double angsuranPerBulan = angsuranPokok + bungaBulanan;
        totalBunga += bungaBulanan;
        totalAngsuran += angsuranPerBulan;

        printf("Bulan %d, bunga Rp.%.0f, angsuran pokok Rp.%.0f, angsuran per bulan Rp.%.0f\n", 
               bulan, bungaBulanan, angsuranPokok, angsuranPerBulan);
    }

    printf("\nTotal bunga Rp.%.0f\n", totalBunga);
    printf("Total angsuran Rp.%.0f\n", totalAngsuran);
}

int main() {
    double pokokPinjaman, bungaTahunan;
    int lamaPinjaman;

    // Input dari pengguna
    printf("Pokok Pinjaman: ");
    scanf("%lf", &pokokPinjaman);
    printf("Besar Bunga(%%): ");
    scanf("%lf", &bungaTahunan);
    printf("Lama Pinjaman(bulan): ");
    scanf("%d", &lamaPinjaman);

    // Memanggil fungsi untuk menghitung angsuran
    hitungAngsuran(pokokPinjaman, bungaTahunan, lamaPinjaman);

    return 0;
}
