# praktikum3

# Latihan 1 (Menampilkan bilangan terbesar dari sejumlah bilangan acak yang diinputkan)
-Mendeklarasikan variable int i=0; int max=0; int a,x; sebagai variable input
-Memasukkan jumlah bilangan
-Menentukan bilangan yang terbesar dengan rumus for (i;i<a;i++)
-Menampilkan hasil kelayar dengan kode:
for (i;i<a;i++)
    {
        cout << "Masukkan bilangan ke-" << i+1 << ": ";
        cin >> x;

        if (x > max)
        max=x;
    }
-Berikut ScreenShotnya: https://github.com/etrianmartianto/praktikum3/blob/master/mengambil%20bilangan%20terbesar/ss%20mengambil%20bilangan%20terbesar%20dari%20sejumlah%20bilangan.jpg


# Latihan 2 (Menampilkan urutan bilangan dari yang terkecil sampai yang terbesar)
-Mendeklarasikan variable int a, b, c, sebagai variable input
-Memasukkan nilai A, B, C,
-Menentuka bilangan yang terbesar dengan rumus if (a<c and a<c)
-Menampilkan hasil kelayar dengan kode:
if(a<c and a<c){
        if(b<c){
            cout << a << ' ' << b << ' ' << c << endl;
        }else{
            cout << a << ' ' << c << ' ' << b << endl;
        }
    }else if(b<a and b<c){
        if(a<c){
            cout << b << ' ' << a << ' ' << c << endl;
    }else{
            cout << b << ' ' << c << ' ' << a << endl;
    }
    }else{
        if (b<a){
            cout << c << ' ' << b << ' ' << a << endl;
        }else{
            cout << c << ' ' << a << ' ' << b << endl;
        }
        }
    return 0;
}

-Berikut ScreenShotnya: https://github.com/etrianmartianto/praktikum3/blob/master/lat%202%20mengurutkan%20bilangan%20dari%203%20blangan%20acak/zz.jpg


# Latihan 3 (Menginput 3 buah bilangan yang masing-masing menyatakan panjang sisi segitiga)
-Mendeklarasikan variable int A,B,C; sebagai variable input
-Memasukkan nilai A,B,C;
-Menentukan bilangan yang terbesar dengan rumus if(A==B)
-Menampilkan hasil kelayar dengan kode:
if(A==B)
    {
        if(A==C)
            cout << "SAMA SISI" << endl;
        else
            cout << "SAMA KAKI" << endl;
    }
    else
    {
        if(A==C)
            cout << "SAMA KAKI" << endl;
        else
        {
            if(B==C)
                cout << "SAMA KAKI" << endl;
            else
                cout << "SEMBARANG" << endl;
        }
    }
    return 0;
}

-Berikut ScreenShotnya: https://github.com/etrianmartianto/praktikum3/blob/master/ss%20input%203%20bilangan%20yg%20menyatakan%20panjang%20sisi%20segitiga.jpg





