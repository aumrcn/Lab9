#include<iostream>
using namespace std;

int main(){
	char grade;
	int times = 1;
	int acount = 0, bcount = 0, ccount = 0, dcount = 0, fcount = 0;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << times << "]: ";
		cin >> grade;
		if(grade == 'A'){
			acount++;
			times++;
		}else if(grade == 'B'){
			bcount++;
			times++;	
		}else if(grade == 'C'){
			ccount++;
			times++;
		}else if(grade == 'D'){
			dcount++;
			times++;
		}else if(grade == 'F'){
			fcount++;
			times++;
		}else if(grade != '0'){
			cout << "Wrong input. Please input again." << endl;
		} 
	}while(grade != '0');
	cout << "In total " << times-1 << " students." << endl;
	cout << "A = " << acount <<", ";
	cout << "B = " << bcount <<", ";
	cout << "C = " << ccount <<", ";
	cout << "D = " << dcount <<", ";
	cout << "F = " << fcount;		
	return 0;
}
