#include<iostream>
using namespace std;

int n;
struct date{
    int d,m,y;
};
struct event{
    date start, end;
};

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
void Greedy(event* v){
    funct_read(v);
    sort(v);

}
int main (){
    cin>>n;
    event ev[n];
    Greedy(ev);
    for (int i = 0; i < n; i++){
        funct_write(ev[i]);
    }
    return 0;
}
