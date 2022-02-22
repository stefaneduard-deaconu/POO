#include<iostream>
using namespace std;

int n;
struct Date{ // cand scrii cu litera mare tipurile create de noi, cu totii putem vedea in C++ ca sunt custom (adica create chiar de catre noi)
    int d,m,y;
};
struct Event{
    date start, end;
};

// Te rog sa incluzi    int n    tot ca parametru aici. 
// Nu vrem intr-un limbaj ordonat sa avem variabile globale
void funct_read (event* v){
    for (int i = 0; i < n; i++){
        cin>>v[i].start.d>>v[i].start.m>>v[i].start.y;
        cin>>v[i].end.d>>v[i].end.m>>v[i].end.y;
    }
}
void funct_write (event x){
    cout << x.start.d << '.' << x.start.m << '.' << x.start.y;
    cout << '-';
    cout << x.end.d << '.' << x.end.m << '.' << x.end.y;
    cout << endl;
}
// se poate sa folosesti o denumire mai specifica, precum greaterTran(Date a, Date b)
//  ca sa fie mult mai usor de citit.
bool compare_date (date a, date b){
    if (a.y > b.y){
        return true;
    }
    else{
        if (a.m > b.m){
            return true;
        }
        else{
            if (a.d > b.d){
                return true;
            }
            else{
                return false;
            }
        }
    }
}
void sort (event* v){
    event aux;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (compare_date(v[i].start, v[j].start) == true){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            else{
                if (v[i].start.d == v[j].start.d && v[i].start.m == v[j].start.m && v[i].start.y == v[j].start.y){
                    if (compare_date(v[i].end, v[j].end) == true) {
                        aux = v[i];
                        v[i] = v[j];
                        v[j] = aux;
                    }
                }
            }
        }
    }
}

int main (){
    cin>>n;
    int m = 0;
    event ev[n];
    funct_read(ev);
    sort(ev);
    event afisare[n];
    afisare[0] = ev[0];
    m++;
    for (int i=1; i<n; i++){
        if (compare_date(ev[i].start, afisare[m-1].end) == true){
            afisare[m] = ev[i];
            m++;
        }
    }
    for (int i = 0; i < n; i++){
        funct_write(afisare[i]);
    }
    return 0;
}
