#include <iostream>
#include <conio.h>
#define max 3
using namespace std;

struct{
    int F = 0;
    int R = -1;
    int counter = 0;
    int data[max];

}Q;


void insert(){
    int nomor;
    if(Q.counter < max){
        cout<<"Masukkan Nomor Antrian :";
        cin>>nomor;
        cout<<"Nomor Antrian "<<nomor<<" Sudah Masuk";
        Q.R = (Q.R+1) % max;
        Q.data [Q.R] = nomor;
        Q.counter++;
    }else{
        cout<<"Antrian Penuh";
    }
}

void hapus(){
    if(Q.counter>0){
        cout<<"Nomor antrean yang dipanggil :"<<Q.data[Q.F]<<"";
        Q.F = (Q.F + 1) % max;
        Q.counter--;
    }else{
        cout<<"Data Sudah Kosong";
        Q.R = -1;
    }
}

void tampil(){
    if(Q.counter>=max){
        for(int a = Q.F; a<Q.counter; a++){
            cout<<Q.data[a]<<" ";
        }
        for(int b = 0; b<Q.F; b++){
            cout<<Q.data[b]<<" ";
        }
    }else{
        for(int c = Q.F; c <= Q.R; c++){
            cout<<Q.data[c]<<" ";
        }
    }
}
int main(){
    int pilih;
    menu:
    // system("cls");
    cout<<" Ruang Tunggu \n";
    cout<<"1. Berikan nomor antrian\n";
    cout<<"2. Panggil pasien \n";
    cout<<"3. Tampilkan semua nomor antrean \n";
    cout<<"Silahkan Pilih Menu di Atas :";
    cin>>pilih;
    switch(pilih){
        case 1:
            insert();
            getch();
            goto menu;
            break;
        case 2:
            hapus();
            getch();
            goto menu;
            break;
        case 3:
        cout<<"Daftar nomor antrean :";
            tampil();
            getch();
            goto menu;
            break;
        default :
            cout<<"Harap Masukkan Pilihan yang Benar";
            getch();
            goto menu;
            break;
        

    }

    
}
