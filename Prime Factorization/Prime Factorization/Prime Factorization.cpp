#include <iostream>
#include <vector>

std::vector <unsigned long long int> Factorize(unsigned long long int n){ // This function returns vectors (i.e. dynamic arrays)
	std::vector <unsigned long long int>w;
	unsigned long long int i = 2; // Our start point is 2 because division by 1 is useless
	while (n != 1){
		if (n % i == 0){   
			w.push_back(i); //if n is divisible by i, which will be prime, add it to the vector
			n = n/i;    //Then divide n by this i
			i = 2;
		}
		else i++;
		
	}
	
	return w;
}


int main(){
	unsigned long long int n;
	std::cout << "please enter the number you want to factorize" << std::endl;
	std::cin >> n;
	unsigned long long int x = Factorize(n).size(); //Take the number from the user
	
	std::cout << "The factors are " << std::endl;
	for (unsigned long long int i = 0; i < x; i++){
		std::cout << Factorize(n)[i] << std::endl; //Print the factors from the vector 
	}






	system("pause");
	return 0;
}