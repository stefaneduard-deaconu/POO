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