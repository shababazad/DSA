#include <bits/stdc++.h>
using namespace std;

int countDigits(int num){
    // int count = 0;
    // while (num > 0){
    //     num = num/10;
    //     count++;
    // };

    //alternate way
    int count = (int)(log10(num)+1);
    cout << "Number of digits: " <<count << endl;
}

int reversenum( int num){
    int reversen = 0;
    bool isNegative = false;
    if(num<0){
        isNegative = true;
        num = -num;
    }
    while (num >0){
        int lastdigit = num%10;
        num = num/10;
        reversen = reversen*10 + lastdigit;
    };
    if (isNegative){
        reversen = -(reversen);
    }
    cout << "Reversed number is " << reversen << endl;
}

 bool isPalindrome(int num) {
    int dup =num;
        int reversen = 0;
        while (num !=0){
            int lastDigit = num%10;
            reversen = reversen*10 +lastDigit;
            num = num/10;
        }
        
        if(reversen == dup){
            if(reversen <0){
                cout << "Number is not a palindrome" << endl;
            }
            else {
                cout << "Number is a palindrome" << endl;
            }
        }
        else {
            cout << "Number is not palindrome" << endl;
            cout << "Reversed number is " << reversen << endl;
        
        }
        
    };

int armstrong(int num){
    int dup = num;
    int sum = 0;
    int n = 0;
    int temp = num;
    while (temp != 0 ){
        n +=1;
        temp = temp/10;
    }
    while(num != 0 ){
        // if (sum > INT_MAX/10 || sum< INT_MIN/10){
        //     return 0;
        // }
        int lastDigit = num%10;
        sum = sum +pow(lastDigit,n);
        num = num/10;
    }
    if (sum == dup){
        cout << "Number is an Armstrong number" << endl;
    }
    else{
        cout << "Number is not an Armstrong number" << endl;
    }
}




int main(){
    int tstcase;
    cout << "Enter the number of test cases: ";
    cin >> tstcase;
    for (int i=0 ; i<tstcase ; i++){
        cout << "Enter the number: ";
        int num;
        cin >> num;
        armstrong(num);
        
    }
}