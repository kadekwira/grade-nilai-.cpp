#include <iostream>

using namespace std;

int main()
{
    float nilai;
    cout<<"MASUKAN NILAI ANDA :";
    cin>>nilai;

    if(nilai>=85&&nilai<=100){
    cout<<"NILAI= A";}

    else if(nilai>=75&&nilai<=84){
    cout<<"NILAI = B+"<<endl;}

    else if(nilai>=65&&nilai<=74){
    cout<<"NILAI = B"<<endl;}

    else if(nilai>=50&&nilai<=64){
    cout<<"NILAI = C+"<<endl;}

    else if(nilai>=45&&nilai<=54){
    cout<<"NILAI = C"<<endl;}

    else if(nilai>=30&&nilai<=44){
    cout<<"NILAI = D+"<<endl;}

    else if(nilai>=20&&nilai<=29){
    cout<<"NILAI = D"<<endl;}

    else if(nilai>=0&&nilai<=19){
    cout<<"NILAI = E"<<endl;}

    else{
    cout<<"TIDAK MENDAPAT NILAI"<<endl;}





    return 0;
}
