#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <unistd.h>
using namespace std;
int main()
{
    string siap, ulangi, pil, lagi;
    cout << "\n\n\n\n" << endl;
    cout << "============================================================================" << endl;
    cout << "                 Created By CLOSED_CLASS DEVELOPMENT" << endl;
    cout << "                            Kamu Siap?" << endl;
    sleep(1);
    cout << "                 Untuk Bermain Gunting Batu Kertas(GBK)? " << endl;
    cout << "============================================================================" << endl;
    cout << "                             [y/t] ? ";
    cin >> siap;
    system("cls");
    if(siap=="y"){
        pertama:
        int com = rand() % 10;
        cout << "___________________________________" << endl << endl;
        cout << " ================================" << endl;
        cout << "  \tSelamat Datang " << endl;
        cout << "  Di Game Batu, Kertas, Gunting " << endl;
        cout << " ================================" << endl;
        cout << "  Pilihlah dari keempat ini : " << endl;
        cout << "    1. Batu\n    2. Gunting\n    3. Kertas\n    4. Keluar" << endl;
        cout << "  Tulis Pilihanmu : ";
        cin >> pil;
        if (pil=="1")
        {
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "  Kamu pilih = BATU  " << endl;
 
            if(com<=3 && com>=1){
                cout << "  COM pilih = BATU  " << endl;
                cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << "   ==> SERI ! <==   " << endl;
            }
            else if(com<=6 && com>=4){
                cout << "  COM pilih = KERTAS  " << endl;
                cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << " ==> KAMU KALAH ! <==" << endl;
            }
            else{
                cout << "  COM pilih = GUNTING  " << endl;
                cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << "  ==> KAMU MENANG ! <==  " << endl;
            }
        }
        else if(pil=="2")
        {
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "  Kamu pilih = KERTAS  " << endl;
 
            if(com<=3 && com>=1){
                cout << "  COM pilih = KERTAS  " << endl;
                cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << "    ==> SERI ! <==   " << endl;
            }
            else if(com<=6 && com>=4){
                cout << "  COM pilih = GUNTING  " << endl;
                cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << " ==> KAMU KALAH ! <==  " << endl;
            }
            else{
                cout << "  COM pilih = BATU  " << endl;
                cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << " ==> KAMU MENANG ! <== " << endl;
            }
        }
        else if(pil=="3")
        {
            cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "  Kamu pilih = GUNTING  " << endl;
 
            if(com<=3 && com>=1){
                cout << "  COM pilih = GUNTING  " << endl;
                cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << "    ==> SERI ! <==   " << endl;
            }
            else if(com<=6 && com>=4){
                cout << "  COM pilih = BATU  " << endl;
                cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << " ==> KAMU KALAH ! <==  " << endl;
            }
            else{
                cout << "  COM pilih = KERTAS  " << endl;
                cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << " ==> KAMU MENANG ! <== " << endl;
            }
        }
        else if(pil=="keluar")
        {
            exit:
            system("cls");
            cout << "\n Terimakasih, Sudah Bermain :) " << endl;
            cout << "      Bermain Lagi Yah        " << endl;
            getch();
            return 0;
        }
        else
        {
            cout << "___________________________________" << endl << endl;
            cout << " Inputan Salah ! Silahkan Ulangi Kembali " << endl;
            cout << "        ==> Tekan ENTER <==" << endl;
            getch();
            system("cls");
            goto pertama;
        }
        cout << "___________________________________" << endl << endl;
        cout << " Tekan ENTER ";
        getch();
        system("cls");
 
        cout << "___________________________________" << endl;
        cout << " ================================" << endl;
        cout << " Main Lagi [y/t] ? ";
        cin >> lagi;
        if (lagi=="y"){
            system("cls");
            goto pertama;
        }
        else if (lagi=="t"){
            system("cls");
            goto exit;
            getch();
        }
    }
    else if(siap=="t"){
        keluar:
        system("cls");
        cout << "\n\n\n\n" << endl;
        cout << "============================================================================" << endl;
        cout << "                  Kamu Telah Keluar Dari Permainan" << endl;
        cout << "============================================================================" << endl;
        cout << "                             Tekan ENTER ";
        getch();
        return 0;
    }
    else {
        cout << "\n\n\n\n" << endl;
        cout << "============================================================================" << endl;
        cout << "                      **** Inputan Salah ! ****" << endl;
        cout << "                              Ulangi ?" << endl;
        cout << "============================================================================" << endl;
        cout << "                                 y ? ";
        cin >> ulangi;
        if(ulangi=="y"){
            system("cls");
            goto pertama;
        }
        else {
            goto keluar;
        }
    }
}
//closed_class using CopyRight!!!
//date created
//08/04/2020/23.38
