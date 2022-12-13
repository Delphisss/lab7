#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text_Palindrome ;
    cout << "Input text: " ; 
	cin >> text_Palindrome  ;
    cout << "Reversed text: " << func1(text_Palindrome ) << "\n";
	if(func3(func1(text_Palindrome )) == func3(text_Palindrome )){
		cout << "Palindrome: " << "Yes";
	}else{
		cout << "Palindrome: " << "No";
	}
    return 0;
}

//Kong