#include <iostream>

using namespace std;

int main()
{
   cout <<"Fakultas Komputer" <<endl;

   cout <<"1.Teknik Informatika" <<endl;
   cout <<"2.Sistem Informatika" <<endl;
   cout <<"3.DKV" <<endl;


   int a =1;
   int b =2;
   int c =3;


    cout << "Masukkan Jurusan: " <<endl;

    cin >> a;
    if(a < 2 & a > 0) {
        cout << "Teknik Informatika" <<endl;
    } else {
        cout << "Tidak ada jurusan" <<endl;
        }
    cin >> b;
    if(b < 3 & b >> 1) {
        cout << "Sistem Infomasi" <<endl;
    } else {
        cout << "Tidak ada jurusan" <<endl;
        }
    cin >> c;
    if(c < 4 & c > 2) {
        cout << "DKV" <<endl;
    } else {
        cout << "Tidak ada jurusan" <<endl;
        }
    return 0;
}
