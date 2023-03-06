#include <iostream>
using namespace std;

double p,l;

void input(){
    cout<<"masukkan panjang = ";
    cin>>p;
    cout<<"masukkan lebar = ";
    cin>>l;
}
double proses(){
    return p*l;
}
double prosesDua(double a, double b){
    return a*b;
}
void output(){
    cout<<"luas persegi panjang adalah "<<proses() <<endl;
    cout<<"luas persegi panjang ke dua adalah "<<prosesDua(2,6)<<endl;
}

int main(){
    input(); 
    output();

}