#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	string characters;
	string numeros="";
	string letras="";
	cout<<"Type"<<endl;
	getline(cin, characters);
	int espacio=0;


	for(int i=0; i<=(sizeof(characters));i++){
	if(characters[i]==32){
		espacio=espacio+1;
	}
			
	if(isdigit(characters[i])){
		numeros=numeros+characters[i];
		
	}else{
		letras=letras+characters[i];
	}
	cout<<characters[i]<<endl;
	}

	cout<<"espacios "<<espacio<<endl;
	cout<<"numeros: "<<numeros<<endl;
	cout<<"letras: "<<letras<<endl;
	
	return 0;
}
