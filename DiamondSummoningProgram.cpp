// this is an absolute mess, crying for optimization
#include <iostream>

using namespace std;

int funcDiamond(int k){
    // membuat variabel y dengan nilai k + (k-1)
    int y = k + (k-1);
    // memulai sebuah loop dengan menambah nilai i variabel i dengan 1
    // yang akan dijalankan selama nilai variabel i adalah 
    // kurang atau sama dengan variabel y
    for(int i = 1; i <= y; i++){
        // jika variabel i kurang dari variabel k maka fungsi dibawah ini akan dijalankan
        if (i > k){
                // mendeklarasikan variabel x dengan nilai k - (i - k)
                int x = k - (i - k);
                // memulai sebuah loop yang akan dijalankan selama variabel o adalah kurang dari 
                // atau sama dengan x + k - 1
                for (int o = 1; o <= x + k - 1; o++)
                    // jika variabel o kurang dari variabel i yang dikurangi dengan k - 1 
                    // maka akan menampilkan spasi kosong
                    if (o < i - (k - 1)){
                    cout << " ";
                    }
                    // jika tidak maka akan menampilkan sebuah simbol bintang
                    else{
                    cout << "*";
                    }
        }
        else
        {
            // memulai sebuah loop yang akan dijalankan selama variabel x (variabel yang berbeda) adalah kurang dari 
            // atau sama dengan i + k - 1
            for(int x = 1; x <= i + k - 1; x++){
                    // jika nilai x kurang dari k - (i - 1) maka akan menampilkan spasi kosong
                    if (x < k - (i - 1) ){
                    cout << " ";}
                    // jika tidak maka akan menampilkan simbol bintang
                    else{
                    cout << "*";
                    }
                }
        }
        // membuat baris baru
        cout << "\n";
    }
    return 0;
}

int main(){
    cout << "Halo, Masukkan sebuah angka untuk dijadikan D I A M O N D" << "\n";
    // mendeklarasikan variabel integer (berisi angka) bernama s
    int s;
    // meminta input untuk dijadikan nilai dari variabel s
    cin >> s;
    // memanggil sebuah fungsi bernama funcDiamond 
    // yang sudah dibuat pada awal script dengan variabel s sebagai input nya
    funcDiamond(s);
}
