#include<iostream>

using namespace std;

int main()
{
	int i = 0, P[5000], k, result;
	while(i < 5000){
		P[i] = 2*i+1;
		i++;
	}
	cout << "Please input k: " ;
	cin >> k;
	if (k>0)
	{
		i=0 ; 
		result = 0 ;
		while (i<5000)
		{
			if (P[i]%k == 0)
			{
				result = result - P[i];
			}else{
				result = result + P[i];
			}
			i++;
		}
		cout << "Result = "<< result;	
	}else{
		cout << "Invalid input!!!";
	}
	return 0;
}
//Kong >w<