#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	dest << "-------------------- BOOM ---------------------" << endl;
	string boboputang;
	while(getline(source, boboputang)){
		dest << boboputang << endl;
	}
	dest << "-------------------- HA!! ---------------------" << endl;
    source.close();
    dest.close();
	return 0;
}
