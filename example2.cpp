#include <iostream>
using namespace std;


double p,l,luas;

void input(){
    cout<<"masukkan panjang = ";
    cin>>p;
    cout<<"masukkan lebar = ";
    cin>>l;
}
void proses(){
    luas=p*l;
}

void output(){
    cout<<"luas persegi panjang adalah "<<luas;
}

int main(){
    input();
    proses();
    output();

}