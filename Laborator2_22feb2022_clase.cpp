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

