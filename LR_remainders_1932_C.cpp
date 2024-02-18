#include <bits/stdc++.h>
using namespace std;


void mod(vector<unsigned long long int> &arr,unsigned long long int rem){
 long long int  prod = 1;
for( long long int i:arr){

prod = (prod*i) % rem;
}
int store = prod % rem;
cout<<store<<" ";

}

int main() {
  
 unsigned long long int test_cases;
 cin>> test_cases;

 while (test_cases>0)       
 {
    
unsigned long long int lngth, rem;
cin>> lngth>> rem;

vector<unsigned long long int> arr;
for (unsigned long long int i = 0; i < lngth; i++)
{
    unsigned long long int input;
    cin>> input;
    arr.push_back(input);

}

string sequence;
cin>>sequence;

unsigned long long int store = lngth;
unsigned long long int left = 0, right = lngth;

for (unsigned long long int i = 0; i < lngth; i++)
{
    if (sequence[i] == 'L')
    {
        mod(arr, rem);
       arr.erase(arr.begin()); 
       
        
    }else if (sequence[i] == 'R')
    {
        mod(arr, rem);
        arr.pop_back();  
        
    }
}
cout<<endl;


    test_cases--;
 }
 
  
    return 0;
}