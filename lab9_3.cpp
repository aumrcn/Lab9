#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;

int main (){
	ifstream score;
	score.open("score.txt");
    string boboputang;
    int num = 0;
    double sum = 0 , sumsq = 0 , sumsq2 = 0;
    while(getline(score, boboputang)){
       sum = sum + stod(boboputang);
       sumsq = sumsq + pow(stod(boboputang),2);
       num++; 
    }
    cout << "Number of data = " << num << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/num << endl;

    sumsq2 = pow((sumsq/num) - pow((sum/num),2),0.5);
    cout << "Standard deviation = " << sumsq2;

}