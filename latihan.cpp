#include<iostream>
using namespace std;
    int main(){
        int nilai[3], *petunjuk;
        nilai[0] = 125;
        nilai[1] = 345;
        nilai[2] = 750;
        petunjuk = &nilai[0];
        cout<<"Nilai "<<*petunjuk <<"\n"<<"petunjuk ada dialamat memori\n "<< petunjuk << endl;
        cout<<"Nilai "<<*petunjuk+1<<"\n" << "petunjuk ada dialamat memori\n "<< petunjuk+1 << endl;
        cout<<"Nilai "<<*petunjuk+2 <<"\n"<< "petunjuk ada dialamat memori\n "<< petunjuk+2 << endl;
        return 0;


    }