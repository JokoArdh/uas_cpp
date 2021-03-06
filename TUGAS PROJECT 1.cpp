#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    cout<<"\n\n=================================================\n";
    cout<<"\t\tPROJECT 1\n";
    cout<<"=================================================\n";

    int rute;
    int kode, harga, jml, tot, byr, dis, kbl, akhir;
    char mad;

    cout<<""<<endl;
    cout<<"__________________________________________________"<<endl;
    cout<<"|    Kode Tiket  |\tTujuan   |\tHarga    |"<<endl;
    cout<<"|________________|_______________|_______________|"<<endl;
            cout<<"|    \t1\t |     \tAmpel    |Rp. 10.000     |"<<endl;
            cout<<"|    \t2\t |     \tBoyolali |Rp. 15.000     |"<<endl;
            cout<<"|    \t3\t |     \tSolo     |Rp. 25.000     |"<<endl;
            cout<<"|    \t4\t |     \tSalatiga |Rp. 20.000     |"<<endl;
            cout<<"|________________|_______________|_______________|"<<endl;
            cout<<""<<endl;
            cout<<"Masukan Tiket : ";cin>>kode;

            switch(kode)
            {
            case 1:
                cout<<"\n"<<" Tujuan : Ampel"<<endl;
                harga=10000;
                cout<<"Masukan Jumlah Tiket : ";cin>>jml;
                dis=harga*jml*0.15;
                tot=harga*jml-dis;
                cout<<"Harga    : Rp. "<< harga <<endl;
                cout<<"\nAnda Mendapat Diskon 15% : Rp. "<<dis<<endl;
                cout<<" Total Harganya          : Rp. "<<tot<<endl;
                cout<<" Jumlah Uang             : Rp. ";cin>>byr;
                kbl = byr-tot;
                cout<<"**********************************\n";
                cout<<" Kembalian                 : Rp. "<<kbl<<endl;
                cout<<" "<<endl;
                break;

            case 2:
                cout<<"\n"<<" Tujuan : Boyolali"<<endl;
                harga=15000;
                cout<<"Masukan Jumlah Tiket : ";cin>>jml;
                dis=harga*jml*0.15;
                tot=harga*jml-dis;
                cout<<"Harga    : Rp. "<< harga <<endl;
                cout<<"\nAnda Mendapat Diskon 15% : Rp. "<<dis<<endl;
                cout<<" Total Harganya          : Rp. "<<tot<<endl;
                cout<<" Jumlah Uang             : Rp. ";cin>>byr;
                kbl = byr-tot;
                cout<<"**********************************\n";
                cout<<" Kembalian                 : Rp. "<<kbl<<endl;
                cout<<" "<<endl;
                break;

            case 3:
                cout<<"\n"<<" Tujuan : Solo"<<endl;
                harga=25000;
                cout<<"Masukan Jumlah Tiket : ";cin>>jml;
                dis=harga*jml*0.15;
                tot=harga*jml-dis;
                cout<<"Harga    : Rp. "<< harga <<endl;
                cout<<"\nAnda Mendapat Diskon 15% : Rp. "<<dis<<endl;
                cout<<" Total Harganya          : Rp. "<<tot<<endl;
                cout<<" Jumlah Uang             : Rp. ";cin>>byr;
                kbl = byr-tot;
                cout<<"**********************************\n";
                cout<<" Kembalian                 : Rp. "<<kbl<<endl;
                cout<<" "<<endl;
                break;

            case 4:
                cout<<"\n"<<" Tujuan : Salatiga"<<endl;
                harga=20000;
                cout<<"Masukan Jumlah Tiket : ";cin>>jml;
                dis=harga*jml*0.15;
                tot=harga*jml-dis;
                cout<<"Harga    : Rp. "<< harga <<endl;
                cout<<"\nAnda Mendapat Diskon 15% : Rp. "<<dis<<endl;
                cout<<" Total Harganya          : Rp. "<<tot<<endl;
                cout<<" Jumlah Uang             : Rp. ";cin>>byr;
                kbl = byr-tot;
                cout<<"**********************************\n";
                cout<<" Kembalian                 : Rp. "<<kbl<<endl;
                cout<<" "<<endl;
                break;

            default:
                cout<<""<<endl;
                cout<<"--------------------------------------------------"<<endl;
                cout<<" MAAF KODE YANG ANDA MASSUKAN TIDAK SESUAI !!! "<<endl;
            }
}
