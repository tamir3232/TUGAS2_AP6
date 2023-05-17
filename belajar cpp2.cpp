#include<iostream>
using namespace std;
int main(){
	int nilai [3],*petunjuk;
	nilai[0]=123;
	nilai[1]=345;
	nilai[2]=750;
	
	petunjuk=&nilai[0];
	cout<<"nilai ada di alamat "<<*petunjuk<<"ada di alamat memori "<<petunjuk<<endl;
	cout<<"nilai ada di alamat "<<*(petunjuk+1)<<"ada di almat memori"<<petunjuk+1<<endl;
	cout<<"nilai ada di almaat "<<*(petunjuk+2)<<"ada di alamt memori "<<petunjuk+2<<endl;
	
}