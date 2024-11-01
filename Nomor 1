#include <stdio.h>

// Fungsi rahasia yang menghitung total sesuai prosedur yang diberikan
int rahasia(int arr[], int length) {
    int total = 0;
    
    // Loop untuk menjumlahkan/mengurangi elemen array
    for (int i = 0; i < length; i++) {
        if (arr[i] % 2 == 0) {
            total += arr[i];  // Tambah jika elemen genap
        } else {
            total -= arr[i];  // Kurangi jika elemen ganjil
        }
    }
    
    return total;
}

int main() {
    // Array yang sudah diketahui (240, 555, 1156)
    int arr[] = {2,4,0,5,5,5,1,1,5,6};  
    int length = sizeof(arr) / sizeof(arr[0]);  // Panjang array

    // Panggil fungsi rahasia dan cetak hasilnya
    int hasil = rahasia(arr, length);
    printf("Hasil: %d\n", hasil);

    return 0;
}