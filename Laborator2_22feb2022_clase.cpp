/*
#include<iostream>
#include<cstring>
using namespace std;

class Bilet{
    string nume;
    bool clasa1;
public:
    void citeste(){
        getline(cin, nume);
        cin.get();
        cin>>clasa1;
    }
    Bilet(){
        cout<<"Constructor gol"<<endl;
        nume = " ";
        clasa1 = false;
    }
    Bilet(string _nume, bool _clasa1){
        nume = _nume;
        clasa1 = _clasa1;
    }
    string getName(){
        return nume;
    }
    void setName(string  nume){
        Bilet::nume = nume;
    }
    int getClasa1(){
        return clasa1;
    }
    void setClasa1(bool clasa1){
        Bilet::clasa1 = clasa1;
    }

};
void statisticaZboruri(int n, Bilet bilete[]){
    int alte_clase = 0, bilete1;
    for (int i=0; i<n; i++){
        if (bilete[i].getClasa1() == false){
            alte_clase++;
        }
    }
    bilete1 = n-alte_clase;

    cout<<"Sunt "<<bilete1<<" bilete la clasa I si "<<alte_clase<<" la alte clase";
}
int main (){
    Bilet bilete[] = {
            Bilet("Popescu Leuras", true),
            Bilet("Manolescu Alexandra", true),
            Bilet("Popescu Manalina", false)
    };

    statisticaZboruri(3, bilete);

}
*/
/*
#include<iostream>
#include <cstring>
using namespace std;

class Film {
    string titlu;
    long nr_like;

public:
    void citire() {
        getline(cin, titlu);
        cin.get();
        cin>>nr_like;
    }
    Film() {
        //generator
        titlu = " ";
        nr_like = 0;
    }
    Film(string word, long number) {
        titlu = word;
        nr_like = number;
    }
    string getTitle() {
        return titlu;
    }
    long getLikeNr() {
        return nr_like;
    }
    string setTitle(string word) {
        Film::titlu = word;
    }
    long setLikeNr(long number) {
        Film::nr_like = number;
    }
};

void afisarePopulare (int n, Film filme[], int k) {
    int a[n];
    for (int i=0; i<n; i++) {
        a[i] = filme[i].getLikeNr();
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i] < a[j]) {
                swap(a[i],a[j]);
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i] == filme[j].getLikeNr() && k!=0) {
                cout<<filme[j].getTitle()<<" ";
                k--;
            }
        }
    }
}

int main () {
    Film filme[] = {
            Film("A", 1736),
            Film("B", 871313),
            Film("C", 319236),
            Film("D", 52413),
            Film("E",16328)
    };
    afisarePopulare(5 ,filme, 3);
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
class Tablou {
    string mesaj;
    int inaltime, latime, pret;
public:
    void citeste () {
        cout<<"Mesaj Motivational";
        getline(cin,mesaj);
        cin>>inaltime>>latime>>pret;
    }
    Tablou() {
        mesaj = " ";
        inaltime = 0;
        latime = 0;
        pret = 0;
    }
    Tablou(string word, int num1, int num2, int num3){
        mesaj = word;
        inaltime = num1;
        latime = num2;
        pret = num3;
    }
    string getMessage () {
        return mesaj;
    }
    string setMessage (string word) {
        Tablou::mesaj = word;
    }

};

int main () {
    Tablou tablouri[] = {
            Tablou("Buna dimineata", 12, 32, 30),
            Tablou("S-a trezit dulceata", 533, 132, 887),
            Tablou("Bla bla bla bla bla", 423, 31, 438),
            Tablou("wjnfkjedwjfkefqwejfbnjenbfejewfef", 232, 211, 54)
    };
    char * sep;
    int n = 4;
    int Size = 0;
    int Max = 0;
    string mesajMax;
    for (int i = 0; i < n; i++) {
        Size = tablouri[i].getMessage().length();
        char ch[Size+1];
        int C = 0;
        strcpy(ch, tablouri[i].getMessage().c_str());
        for (int j = 0; j < Size; j++) {
            if (ch[j] == ' '){
                C++;
            }
        }
        if (Max < C) {
            Max = C;
            mesajMax = tablouri[i].getMessage();
        }
    }
    cout<<"Tabloul cu mesajul: "<<mesajMax<<" \nAre numarul maxim de "<<(Max+2)<<" cuvinte.";
}
*/
/*
#include<iostream>
using namespace std;
class Carte {
    string title;
    int currentPage;
    int pageNr;

public:
    void citeste() {
        getline(cin, title);
        cin>>currentPage;
        cin>>pageNr;
    }
    void afiseaza() {
        cout<<"Cartea cu titlul ";
        cout<<title;
        cout<<" sta deschisa la pagina ";
        cout<<currentPage;
        cout<<" din ";
        cout<<pageNr;
        cout<<"\n";
    }
    Carte() {
        title = " ";
        currentPage = 0;
        pageNr = 0;
    }
    Carte(string word, int num1, int num2) {
        title = word;
        currentPage = num1;
        pageNr = num2;
    }
    string getTitle() {
        return title;
    }
    int getCurrentPage() {
        return currentPage;
    }
    int getPageNr() {
        return pageNr;
    }
    int setCurrentPage(int num) {
        if (num <= pageNr) {
            currentPage = num;
        }
        else{
            cout<<"Nu poti sari la pagina ";
            cout<<num;
            cout<<" din ";
            cout<<pageNr;
            cout<<" deoarece nu exista!\n";
        }
    }

};

int main () {
    Carte c;
    c.citeste();
    c.afiseaza();
    c.setCurrentPage(30);
    c.afiseaza();
    c.setCurrentPage(c.getPageNr()+1);
}
*/

// #include<iostream>
// using namespace std;
// class Client {
//     int ID;
//     int sumaBani;
// public:
//     void readClient() {
//         cin>>ID>>sumaBani;
//     }
//     Client() {
//         ID = 0;
//         sumaBani = 0;
//     }
//     Client(int num1, int num2) {
//         ID = num1;
//         sumaBani = num2;
//     }
//     int getID() {
//         return ID;
//     }
//     int setID(int num) {
//         ID = num;
//     }
//     int getSum() {
//         return sumaBani;
//     }
//     int setSum(int num) {
//         sumaBani = num;
//     }
// };
// class Banca {
//     int nrClienti;
//     Client clienti[];
// public:
//     void Read() {
//         cin>>nrClienti;
//         for (int i = 0; i < nrClienti; i++) {
//             clienti[i].readClient();
//         }
//     }
//     Banca() {
//         nrClienti = 0;
//         clienti[nrClienti] = {};
//     }
//     Banca(int num, Client c[]) {
//         nrClienti = num;
//         for (int i = 0; i < nrClienti; i++) {
//             clienti[i] = c[i];
//         }
//     }
//     int getNrClienti() {
//         return nrClienti;
//     }
//     int setNrClienti(int num) {
//         nrClienti = num;
//     }
//     void sumTotal() {
//         long suma = 0;
//         for (int i = 0; i < nrClienti; i++) {
//             suma = suma + clienti[i].getSum();
//         }
//         cout<<"Suma totala este de "<<suma<<" RON.\n";
//     }
//     void minValue() {
//         long count = 0;
//         for (int i = 0; i < nrClienti; i++) {
//             if(clienti[i].getSum() >= 1000) {
//                 count++;
//             }
//         }
//         cout<<count<<" clienti ai bancii au cel putin 1000 RON in cont\n";
//     }
//     void Percentage() {
//         float p;
//         long count = 0;
//         for (int i = 0; i < nrClienti; i++) {
//             if(clienti[i].getSum() > 100) {
//                 count++;
//             }
//         }
//         p = count*100/ nrClienti;
//         cout<<p<<"% clienti au peste 100 RON in cont\n";
//     }
// };
// int main() {
//     Banca b;
//     b.Read();
//     b.sumTotal();
//     b.minValue();
//     b.Percentage();

//     return 0;
// }



// #include<iostream>
// #include<cstring>
// using namespace std;

// class IntervalOrar {
//     int oraStart;
//     int minStart;
//     int oraFin;
//     int minFin;
// public:
//     void IntervalRead();
//     void IntervalOut();

//     IntervalOrar() {
//         oraStart = 0;
//         oraFin = 0;
//         minStart = 0;
//         minFin = 0;
//     }

//     IntervalOrar(int num1, int num2, int num3, int num4) {
//         oraStart = num1;
//         minStart = num2;
//         oraFin = num3;
//         minFin = num4;
//     }

//     int getOraStart() {
//         return oraStart;
//     }

//     int getOraFin() {
//         return oraFin;
//     }

//     int getMinStart() {
//         return minStart;
//     }

//     int getMinFin() {
//         return minFin;
//     }

//     void setOraStart(int num1) {
//         oraStart = num1;
//     }

//     void setMinStart(int num2) {
//         minStart = num2;
//     }

//     void setOraFin(int num3) {
//         oraFin = num3;
//     }

//     void setMinFin(int num4) {
//         minFin = num4;
//     }
// };

// class Camin {
//     string name;
//     int nrCamere;
//     int k;
//     IntervalOrar ore[];
// public:
//     Camin() {
//         name = " ";
//         nrCamere = 0;
//         ore[k] = {};
//     }
//     Camin(string word, int num1, int num2, IntervalOrar o[]) {
//         name = word;
//         nrCamere = num1;
//         k = num2;
//         for (int i = 0; i < k; i++) {
//             ore[i] = o[i];
//         }
//     }
//     void caminRead();
//     void caminOut();
//     string getName() {
//         return name;
//     }

//     int getNrCamere() {
//         return nrCamere;
//     }

//     void setName(string word) {
//         name = word;
//     }

//     void setNrCamere(int num1) {
//         nrCamere = num1;
//     }

//     int getK() {
//         return k;
//     }

//     void setK(int num1) {
//         k = num1;
//     }
// };

// void IntervalOrar::IntervalRead() {
//     cin>>IntervalOrar::oraStart;
//     cin>>IntervalOrar::minStart;
//     cin>>IntervalOrar::oraFin;
//     cin>>IntervalOrar::minFin;
// }
// void IntervalOrar::IntervalOut() {
//     cout<<IntervalOrar::oraStart<<" ";
//     cout<<IntervalOrar::minStart<< " ";
//     cout<<IntervalOrar::oraFin<<" ";
//     cout<<IntervalOrar::minFin<<" ";
//     cout<<endl;
// }

// void Camin::caminRead() {
//     getline(cin,Camin::name);
//     cin>>Camin::k;
//     for (int i = 0; i <Camin::k; i++) {
//         Camin::ore[i].IntervalRead();
//     }
// }

// void Camin::caminOut() {
//     cout<<Camin::name<<" ";
//     cout<<Camin::k<<endl;
//     for (int i = 0; i <Camin::k; i++) {
//         Camin::ore[i].IntervalOut();
//     }
// }


// int main() {
//     int nrCamine;
//     cin>>nrCamine;
//     cout<<nrCamine;
//     Camin camine[nrCamine];
//     for (int i = 0; i < nrCamine; i++) {
//         camine[i].caminRead();
//     }
//     for (int i = 0; i < nrCamine; i++) {
//         camine[i].caminOut();
//     }
//     return 0;
// }