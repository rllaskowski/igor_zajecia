#include <iostream>
#include <string>

using namespace std;

int T[255]; // tu bez wcięcia

void dekl() { // tu bez wcięcia
	T['1']=1;
    T['2']=1;
    T['3']=1;
    T['4']=1;
    T['5']=1;
    T['6']=1;
    T['7']=1;
    T['8']=1;
    T['9']=1;
    T['0']=1;
    T['-']=1;
    T['=']=1;
    T['`']=1;
    
    T['Q']=2;
    T['W']=2;
	T['E']=2;
	T['R']=2;
	T['T']=2;
	T['Y']=2;
	T['U']=2;
	T['I']=2;
	T['O']=2;
	T['P']=2;
	T['[']=2;
	T[']']=2;
	T['\\']=2; 
	T[9]=2;
	
	T['A']=3;
	T['S']=3;
	T['D']=3;
	T['F']=3;
	T['G']=3;
	T['H']=3;
	T['J']=3;
	T['K']=3;
	T['L']=3;
	T[';']=3;
	T[39]=3;
	
	T['Z']=4;
	T['X']=4;
	T['C']=4;
	T['V']=4;
	T['B']=4;
	T['N']=4;
	T['M']=4;
	T[',']=4;
	T['.']=4;
	T['/']=4;
	
	T[32]=5;
}

int main() {
    dekl();
    
    string s;
    getline(cin,s);
    
    for(int i=0;i<s.size();i++){
		cout << s[i] << endl;
    	/*
    	 Podobny błąd jak na zajęciach:
    	 pomiędzy pojedyńczym cudzysłowem może znajdować się pojedyńczy znak
    	 Przykład 'a', '1', 'E'
    	  
		 cout<<T['s[i]'];
		 's[i]' oznaczałoby raczej napis "s[i]", ale nawet zgodnie z tym
		  co napisałem powyżej nie możemy tak zrobić
    	*/
    	
    	/* wypisz wartosc z tablicy T, pod indeksem równym kodowi ASCII 
    	 i-tej literki ze stringa s */
    	cout << T[s[i]]; 
    	
		// lub naokoło :)
    	char znak = s[i];
    	cout << T[znak];
	}
    	    
    return 0;
    
}

/*
Pamiętaj, że char jest po prostu małą liczbą całkowitą:
jedyne co go różni od int'a to zakres liczb, które trzyma
oraz sposób wypisywania go za pomocą cout 
- wypisywanie inta to wypisanie liczby całkowitej
- wypisanie chara to wypisanie znaku przypisanego do tej liczby
*/
