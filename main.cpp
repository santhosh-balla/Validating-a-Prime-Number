#include <iostream>
using namespace std;
#include <vector>
#include <cmath> 

bool check_prime(int n, vector <int> check){
  int sqrt_n = sqrt(n);
  for(int i = 0; i < check.size(); i++){
    if(check[i] > sqrt_n){
      break; 
    }else if(n % check[i] == 0){
      return false;
    }
  }
  return true; 
}


int main() {

  vector <int> primes  =  {}; 

  for(int i = 2; i < 101; i++){
    bool add = check_prime(i, primes);
    if(add == true){
      primes.push_back(i); 
    }
  }


  for(int i = 0; i < primes.size(); i++){
    cout << primes[i];
    cout << " ";
  }

}
