#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Buku {
public:
    Buku(string judul) : judul(judul) {}
    string getJudul() const { return judul; }

private:
    string judul;
};


class Pengarang {
public:
    Pengarang(string nama) : nama(nama) {}
    string getNama() const { return nama; }
    void tambahkanBuku(const Buku& buku) { buku.push_back(buku); }
    vector<Buku> getBuku() const { return buku; }

private:
    string nama;
    vector<Buku> buku;
};

class Penerbit {
public:
    Penerbit(string nama) : nama(nama) {}
    string getNama() const { return nama; }
    void tambahkanPengarang(const Pengarang& pengarang) { pengarang.push_back(pengarang); }
    vector <Pengarang> getPengarang() const { return pengarang; }

private:
    string nama;
    vector<Pengarang> pengarang;
};

int main() {

    Penerbit gamaPress("Gama Press");
    Penerbit intanPariwara("Intan Pariwara");


    Pengarang joko("Joko");
    Pengarang lia("Lia");
    Pengarang giga("Giga");
    Pengarang asroni("Asroni");


    Buku fisika("Fisika");
    joko.tambahkanBuku(fisika);
    Buku algoritma("Algoritma");
    joko.tambahkanBuku(algoritma);
    Buku basisdata("Basisdata");
    lia.tambahkanBuku(basisdata);
    Buku dasarPemrograman("Dasar Pemrograman");
    asroni.tambahkanBuku(dasarPemrograman);
    Buku matematika("Matematika");
    giga.tambahkanBuku(matematika);
    Buku multimedia1("Multimedia 1");
    giga.tambahkanBuku(multimedia1);


    gamaPress.tambahkanPengarang(joko);
    gamaPress.tambahkanPengarang(lia);
    gamaPress.tambahkanPengarang(giga);
    intanPariwara.tambahkanPengarang(asroni);
    intanPariwara.tambahkanPengarang(giga);


    cout << "Daftar pengarang pada penerbit \"Gama Press\":" << endl;
    for (const Pengarang& pengarang : gamaPress.getPengarang()) {
        cout << pengarang.getNama() << endl;
    }


    cout << "Daftar pengarang pada penerbit \"Intan Pariwara\":" << endl;
    for (const Pengarang& pengarang : intanPariwara.getPengarang()) {
        cout << pengarang.getNama() << endl;
    }

};

