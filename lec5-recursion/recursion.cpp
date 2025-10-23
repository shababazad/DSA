//when a function itself numerous time  inside its own function its known as recursion  
//but it that functoin does not have a break statement then it will call itself infinite time until all of the memory is occupied  which is known as segmentation/Stack-overflow
 
#include <bits/stdc++.h>
using namespace std;


void printName(int i,int num){
    if (i >num){
        return;
    }
    cout << "Shabab" << endl;
    printName(i+1,num);

};
void printNum(int i,int num){
    if (i >num){
        return;
    }
    cout << i << endl;
    printNum(i+1,num);

}
void printNum2(int i,int num){
    if (i < 1){
        return;
    }
    printNum2(i-1,num);
    cout << i << endl;

}
void printRevNum(int i,int num){
    if (i < 1){
        return;
    }
    cout << i << endl;
    printRevNum(i-1,num);

}

void printRevNum2(int i,int num){
    if (i >num){
        return;
    }
    printRevNum2(i+1,num);
    cout << i << endl;

}

void sumN(int i , int sum){   //parametric way
    if(i<1){
        cout << sum << endl;
        return ;
    };
    sumN(i-1 , sum+i);

}

int sumN2(int i){  //functional way
    if (i ==0){
        return 0;
    }
    return i+sumN2(i-1);
}

void fact1(int i , int sum){   //parametric way (void recursive function)
      if(i<1){
        cout << sum << endl;
        return ;
      };
      fact1(i-1,sum*i);


}
int fact(int i){  //functional way
    if (i ==0){
        return 1;
    }
    return i*fact(i-1);
}

void reverse_Array(int i , int arr[] , int n){
    if (i >= n/2){
        return;
    };

    swap(arr[i],arr[n-i-1]);
    reverse_Array(i+1,arr,n);
}

void reverse_Array1(int i,int j , int arr[] ){
    if (i >=j){
        return;
    };

    swap(arr[i],arr[j-1]);
    reverse_Array1(i+1,j-1,arr);
}


bool isPalindrome(int i , string &s){
    if(i >= s.size()/2) return true;
    if (s[i] != s[s.size()-i-1]) return false;
    return isPalindrome(i+1 , s);
}


bool isPalindrome1(string s){
    int start = 0;
    int end = s.size()-1;
    while (start <= end){
        if(!isalnum(s[start])){
            start++;
            continue;
        }
        if(!isalnum(s[end])){
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end])){
            return false;
        }
        start++;
        end--;

    }
    return true;
}


int fibonachi(int n){
    if(n<=1){
        return n;
    };
    int last = fibonachi(n-1);
    int second_last = fibonachi(n-2);
    return last + second_last;
}




int main(){
    // int test;
    // cout << "Enter the number of test cases:\n ";
    // cin >> test;
    // for (int i=0 ; i<test ; i++){
    //     // int n ;
    //     // cout << "Enter the number :\n ";
    //     // cin >> n ; 
    //     printName(1,5);


    // }
    // printName(1,5);
    // printNum(1,5);
    // printNum2(5,5);
    // printRevNum(5,5);
    // printRevNum2(1,5);
    // fact1(3,1);
    // cout << "the factorial of your number is :" << result << endl;

    // int i;
    // cin >> i;
    // int arr[i];
    // for (int j = 0 ; j < i ; j++){
    //     cin >> arr[j];  
    // };
    // for (int k= 0 ; k<i ;k++){
    //     cout << arr[k] << " ";
    // }
    // cout << endl;
    // reverse_Array1(0,i,arr);
    // for (int k= 0 ; k<i ;k++){
    //     cout << arr[k] << " ";
    // }
    // string s= "A man, a plan, a canal: Panama";
    // if(isPalindrome1(s)) cout << "true" << endl;
    // else cout << "false" << endl;
    int result = fibonachi(6);
    cout << "The value of fibonachi at n is : " << result << endl;


return 0;
}