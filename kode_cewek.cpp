/*
Bermaksud mempersulit hidup sang pacar, Putri mengirim pesan berupa kode rahasia yang harus dipecahkan Putra. Setelah Putra memohon meminta keringanan, putri memberikan petunjuk sebagai berikut :

Kata pertama merupakan sandi Atbash yaitu sandi yang menukar urutan huruf dari depan ke belakang dan dari belakang ke depan.
ABCDEFGHIJKLMNOPQRSTUVWXYZ menjadi ZYXWVUTSRQPONMLKJIHGFEDCBA

kata berikutnya merupakan sandi AN yaitu sandi yang mengelompokkan masing-masing huruf abjad menjadi pengganti huruf lain. Lebih tepatnya, huruf A – M digantikan secara berurutan dengan huruf N – Z.
ABCDEFGHIJKLMNOPQRSTUVWXYZ menjadi NOPQRSTUVWXYZABCDEFGHIJKLM

kata berikutnya kembali mengikuti petunjuk pertama
Bantu Putra menerjemahkan kode rahasia dari putri agar hubungan mereka tetap damai

Input Format

input berupa Kalimat (Bisa lebih dari satu kata)

Constraints

String hanya berisi Alphabet(Huruf kapitla) dan tanda spasi( ) untuk memisahkan kata

Output Format

Sebuah String hasil terjemahan yang berisi Alphabet(Huruf kapitla) dan tanda spasi( ) untuk memisahkan kata
*/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'penerjemah' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING message as parameter.
 */

string penerjemah(string message) {
    int count = 0;
    string ans = "";
    for(auto &x: message){
        if(x != ' '){
            if(count % 2 == 0){
                ans += (char)(90 - ((25 + (int)x)%90));
            }else{
                if((13 + (int)x) <= 90){
                    ans += (char)(13 + (int)x);
                }else{
                    ans += (char)((int)x - 13);
                }
            }
        }else {
            ans += x;
            count++;
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string message;
    getline(cin, message);

    string result = penerjemah(message);

    fout << result << "\n";

    fout.close();

    return 0;
}