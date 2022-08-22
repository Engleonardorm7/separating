#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	string characters;//[100];
	string numeros="";
	string letras="";
	cout<<"type"<<endl;
	getline(cin, characters);
	cin.ignore();
	int espacio=0;


	for(int i=0; i<sizeof(characters);i++){
	if(characters[i]==32){
		espacio=espacio+1;
	}
	
	//	cout<<characters[i];
	if(isdigit(characters[i])){
		numeros=numeros+characters[i];
		
	}
}
cout<<"espacios "<<espacio<<endl;
	cout<<"numeros: "<<numeros<<endl;
//	cout<<"letras: "<<letras<<endl;
	
	return 0;
}
