#include<bits/stdc++.h>
using namespace std;

void printDigits(int n){
    while(n){
        int digit = n%10;
        cout<<digit<<" ";
        n /=10;
    }
}
void checkPalindrome(int n){
    int dup = n;
    int rev = 0;

    //reversing a number
    while(n){
        int digit = n%10;
        rev = rev*10 + digit;
        n/=10;
    }
    if(dup == rev){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not a Palindrome"<<endl;
    }
}
void printAllDivisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}
void printAllDivisorVersion2(int n){

    vector<int> divisor;
    for(int i=1;i*i<=n;i++){ //running sqrt(n)
        if(n%i == 0){
            divisor.push_back(i);
            if(n/i != i){
                divisor.push_back(n/i);
            }
        }
    }

    sort(divisor.begin(),divisor.end());
    for(auto val:divisor){
        cout<<val<<endl;
    }
}
bool isPrime(int n){

    int cnt = 0;
    for(int i=2;i*i<n;i++){
        if(n%i == 0){
            cnt++;
            if((n/i) != i) cnt++;
        }  
    }
    if(cnt == 2) return true;
    return false;
}
int gcd(int a,int b){
    //using euclid GCD
    if(b==0){
        return a;
    }
    return gcd(b,b%a);
}

int main(){
    int n = 36;
    // printDigits(n);
    // checkPalindrome(n);
    // printAllDivisor(n);
    // printAllDivisorVersion2(n);
    //cout<<isPrime(4)<<endl;
    //cout<<gcd(10,15);

}

