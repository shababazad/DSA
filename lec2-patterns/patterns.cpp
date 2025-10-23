#include <bits/stdc++.h>
using namespace std;
void pattern(int num){
    for(int i=0 ; i<num; i++){
        for (int j=0 ; j<num ; j++){
            cout << "*";
        }
        cout <<endl;
    }
    
}

void pattern2(int num){
    for (int i=0 ; i<num ; i++){
        for (int j=0 ; j<=i ;j++){
            cout << "^";
        }
        cout <<endl;
    }
}

void pattern3(int num){
    for (int i=1 ; i<=num ; i++){
        for (int j=1 ; j<=i ;j++){
            cout << j;
        }
        cout <<endl;
    }
}

void pattern4(int num){
    for (int i=1 ; i<=num ; i++){
        for (int j=0 ; j<i ;j++){
            cout << i;
        }
        cout <<endl;
    }
}

void pattern5(int num){
    for (int i=0 ; i<num ; i++){
        for (int j=0 ; j<(num-i) ;j++){
            cout << "*" << " ";
        }
        cout <<endl;
    }
}

void pattern6(int num){
    for (int i=1 ; i<=num ; i++){
        for (int j=1 ; j<=(num-i+1) ;j++){
            cout << j << " ";
        }
        cout <<endl;
    }
}

void pattern7(int num){
    for (int i=0 ; i<num ; i++){
        for (int j=0 ; j<(num-i-1) ; j++){
            cout << "-";
        };

        for (int k=0 ; k<(2*i+1) ; k++){
            cout << "*";
        };

        for (int l=0 ; l< (num-i-1) ; l++){
            cout << "-";
        };

        cout << endl;

    }
};

void pattern8(int num){
    for (int i=0 ; i<num ; i++){
        for (int j=0 ; j<i ; j++){
            cout << " ";
        };

        for (int k=0 ; k< 2*num-(2*i+1) ; k++){
            cout << "*";
        };

        for (int l=0 ; l< i ; l++){
            cout << " ";
        };

        cout << endl;

    }
};

void pattern9(int num) {
    for (int i=0 ; i<num ; i++){
        for (int j=0 ; j<(num-i-1) ; j++){
            cout << " ";
        };

        for (int k=0 ; k<(2*i+1) ; k++){
            cout << "*";
        };

        for (int l=0 ; l< (num-i-1) ; l++){
            cout << " ";
        };

        cout << endl;

    }

    for (int a=0 ; a<num ; a++){
        for (int b=0 ; b<a ; b++){
            cout << " ";
        };

        for (int c=0 ; c< 2*num-(2*a+1) ; c++){
            cout << "*";
        };

        for (int d=0 ; d< a ; d++){
            cout << " ";
        };

        cout << endl;

    }

}

void pattern10(int num){
    for (int i=1 ;i<=2*num-1 ; i++){
        int stars = i;
        if (i >5) stars = 2*num -i;
        for (int j=0 ; j<stars ; j++){
            cout << "*";

        }
        cout << endl;
    }
}

void pattern11(int num){
    for(int i=1 ; i<=num ; i++){
        for (int j=1 ; j<=i ; j++){
            if(i%2 ==0 ){
                if (j%2 == 0) cout << "1 ";
                else cout << "0 ";

            }
            else{
                if (j%2 == 0) cout << "0 ";
                else cout << "1 ";

            }
            
        }
        cout << endl;
    }
}

void pattern12(int num){
    for (int i=1 ; i<=num ;i++){
        int space = 2*num+2-(2*i+2);
        if(i>num-1) space =0;
        for (int j=1 ; j<=i ; j++){
            cout << j;
        };
        for (int k=1 ; k<=space ; k++ ){
            cout << " ";
        }
        for (int j=i ; j>=1 ;j-- ){
            cout << j;
        };
        cout << endl;
    }
}

void pattern13(int num){
    int inc = 1;
    for (int i=1 ; i<=num ; i++){
        for (int j=1 ; j<=i ; j++){
            cout <<inc << " ";
            inc +=1;
        }
        cout << endl;


    }
}

void pattern14(int num){
    for (int i=0 ; i<num ; i++){
        for (char c='A' ; c<= 'A' +i ; c++){
            cout <<c << " ";
            
        }
        cout << endl;


    }
}

void pattern15(int num){
    for (int i=0 ; i<num ; i++){
        for (char c ='A' ; c<'A'+num-i ; c++){
            cout <<c << " ";
        
            
        }
        cout << endl;


    }
}

void pattern16(int num){
    for (int i=0 ; i<num ; i++){
        char alp = 'A' + i ;
        
        for (int j =0 ; j<=i ; j++){
            cout <<alp << " ";
            
        }
        cout << endl;


    }
}

void pattern17(int num){
    for (int i=0 ; i<num ; i++){
        //space
        for (int j=0 ; j<num-i-1 ; j++){
            cout << " ";
        }

        //num
        char ch = 'A';
        int Breakpoint = (2*i+1)/2;
        for (int j=0 ; j<2*i+1 ; j++){
            cout << ch;
            if(j<Breakpoint) ch++;
            else ch--;
        
        };

        //space
        for (int j=0 ; j<num-i-1 ; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int num) {
    for (int i=0 ; i<num ;i++){
        for (char c='E'-i ; c<='E' ; c++){
            cout << c << " ";
            
        }
        cout << endl;
    }
}

void pattern19(int num){
    for (int i=0 ; i<num ; i++){
        //star
        for (int j=0 ; j<num-i ; j++){
            cout << "*";
        }

        //space
        for (int j=0 ; j<2*i ; j++){
            cout << " ";
        }
        //star
        for (int j=0 ; j<num-i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    //down-side
    for (int i=0 ; i<num ; i++){
        //star
        for (int j=0 ; j<=i ; j++){
            cout << "*";
        }

        //space
        for (int j=0 ; j<2*num-(2*i)-2 ; j++){
            cout << " ";
        }
        //star
        for (int j=0 ; j<=i ; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern20(int num){
    for (int i=0 ; i<num ; i++){
        //star
        for (int j=0 ; j<=i ; j++){
            cout << "*";
        }

        //space
        for (int j=0 ; j<2*num-(2*i)-2 ; j++){
            cout << " ";
        }
        //star
        for (int j=0 ; j<=i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    //down side
    for (int i=0 ; i<num-1 ; i++){
        //star
        for (int j=0 ; j<(num-i)-1 ; j++){
            cout << "*";
        }

        //space
        for (int j=0 ; j<(2*i)+2 ; j++){
            cout << " ";
        }
        //star
        for (int j=0 ; j<(num-i)-1 ; j++){
            cout << "*";
        }
        cout << endl;
    }

    
}

void pattern21(int num){
    for (int i=0 ; i<num ; i++){
        for (int j=0 ; j<num ; j++){
            if ( i==0 || j ==0 || i==num-1 || j==num-1){
                cout << "*";}
                else cout << " ";
            
        }
        cout << endl ;
    }
}
//very iportant re-watch the video for this one
void pattern22(int num){ 
    for(int i=0 ; i<2*num-1 ; i++){
        
        for(int j=0 ; j<2*num-1 ; j++){
        int top = i;
        int bottom = (2*num-2)-i;
        int left = j;
        int right = (2*num-2)-j;
        cout << (num-min(min(top,bottom),min(left,right)));

        }
        cout << endl;
    }
}

void practice1(int num){
    for (int i=0 ; i <num ; i ++){
        for (int j=1 ; j<=num-i ; j++){
            cout << num-i ;
        }
        cout << endl;
    }
}

void practice2(int num){

    for (int i=0 ; i<num ; i++){
        for(int j=0 ; j<=i ; j++){
            cout << "*";
        }
    cout << endl;
    }
    for (int k=0 ; k<num-1 ; k++){
        for (int l=0 ; l<(num-1)-k ; l++)
        {cout << "*";};
        cout << endl;

    }
}

void pattern11a(int num){
    int start = 1;
    for(int i=1 ; i<=num ; i++){
        if (i%2 == 0)start = 0;
        else
            start = 1;
        for (int j=1 ; j<=i ; j++){
            cout << start;
            start = 1-start; //to toggle the value between 1 and 0
        }
        cout << endl;
        

    }
}

void pattern12a(int num){
    int space = (2*num)-2;
    for (int i=1 ; i<=num ;i++){
        for(int j=1 ;j<=i ; j++){
            cout << j;
        }
        for(int k=0 ; k<space ; k++){
            cout << " ";
        }
        for(int j=i ;j>=1 ; j--){
            cout << j;
        }
        space=space-2;
        cout << endl;
    }
}

void pattern15a(int num){
    for (int i=0 ; i<num ; i++){
        char ch = 'A';
        for (int j =0 ; j<=i ; j++){
            cout <<ch << " ";
            ch++;
            
        }
        cout << endl;


    }
}

void practice20a(int num){
    int spaces = 2*num-2;
    for (int i=1 ; i<=2*num-1 ; i++){
        int stars = i;
        if (i>num) stars=2*num-i;
        //stars
        for (int j=1 ; j<=stars ; j++){
            cout << "*";
        }
        //space
        for (int j=1 ; j<=spaces ; j++){
            cout << " ";
        }
        //stars
        for (int j=1 ; j<=stars ; j++){
            cout << "*";
        }
        cout << endl;
        if(i<num) spaces -=2;
        else spaces +=2;
    }
}

int main(){
//    int num;
//    cout<< "Kindly enter the number:" <<endl;
//    cin >>num;
//    pattern(num);
int t;
cout << "define the number of your testCases:\n";
cin >>t;
for (int i=0 ; i<t ; i++){
    cout << "Kindly give your input:\n";
    int num;
    cin >>num;
    pattern22(num);
}

    return 0;
}