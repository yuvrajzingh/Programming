#include<bits/stdc++.h>
using namespace std;


void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<" x ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<" X ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" X ";
        }
        cout<<endl;
    }   
}

void pattern6(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<j+1;
        }  
        cout<<endl;
    }   
}

void pattern7(int n){
    for(int i=0; i<n; i++){
        for(int l=0; l<n-i-1; l++){
            cout<<" ";
        }
        for(int j=0; j<(2*i+1); j++){
            cout<<"X";
        }
        for(int r=0; r<n-i-1; r++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0; i<n; i++){
        for(int l=0; l<i; l++){
            cout<<" ";
        }
        for(int j=0; j<((2*n)-(2*i)-1); j++){
            cout<<"X";
        }
        for(int r=0; r<i; r++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern9(int n){
    for(int i=0; i<n; i++){
        for(int l=0; l<n-i-1; l++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"X";
        }
        for(int l=0; l<n-i-1; l++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int l=0; l<i; l++){
            cout<<" ";
        }
        for(int j=0; j<(2*n)-(2*i+1); j++){
            cout<<"X";
        }
        for(int l=0; l<i; l++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<" X ";
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" X ";
        }
        cout<<endl;
    }
}

void pattern11(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        // for(int j=0; j<i+1; j++){
            // if(i%2==0){
            //     if(j%2 == 0){
            //     cout<<"1";
            //     }
            //     else{
            //         cout<<"0";
            //     }
            // }
            // else{
            //         if(j%2 == 0){
            //         cout<<"0";
            //     }
            //     else{
            //         cout<<"1";
            //     }
            // }
        // }
        // cout<<endl;

            //The above works fine (done by me)

            //The below is much shorter code (done by striver)
            
            if(i%2 == 0) start = 1;
            
            else start = 0;
            for(int j=0; j<i+1; j++){
                cout<< start;
                start = 1 - start; //flip from 1 to 0
            }
            cout<<endl;
    }
}

void pattern12(int n){
    for(int i=0; i<n; i++){
        for(int l=0; l<i+1; l++){
            cout<<l+1;
        }
        for(int j=0; j<n-(2*i)+2; j++){
            cout<<" ";
        }
        for(int r=i+1; r>0; r--){
            cout<<r;
        }
        cout<<endl;
    }
}

void pattern13(int n){
    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<'A'+i+1; ch++){
            cout<< ch << " ";
        }
        cout<<endl; 
    }
}

void pattern15(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<'A'+n-i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern16(int n){
    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=0;j<i+1; j++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i=0; i<n; i++){
        for(int r=0; r<n-i-1; r++){
            cout<<" ";
        }
        char ch = 'A';
        int breakpoint = (2*i-1)/2;
        for(int j=0; j<2*i+1; j++){
            cout<<ch;
            if(j<=breakpoint)
                ch++;
            else 
                ch--;
        }

        for(int l=0; l<n-i-1; l++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n){
    for(int i=0; i<n; i++){
        
        for(char ch='E'-i; ch<'E'+1; ch++ ){
            cout<<ch;
        }
        cout<<endl;
        
    }
}

void pattern19(int n){
    int initSpace=0;
    for(int i=0; i<n; i++){
        for(int r=0; r<n-i; r++){
            cout<<"*";
        }

        
        for(int j=0; j<initSpace; j++){
            cout<<" ";
        }
        

        for(int l=0; l<n-i; l++){
            cout<<"*";
        }
        initSpace+=2;
        cout<<endl;
    }
    initSpace=8;
    for(int i=1; i<=n; i++){
        for(int r=0; r<i; r++){
            cout<<"*";
        }
        
        for(int j=0; j<initSpace; j++){
            cout<<" ";
        }
        

        for(int l=0; l<i; l++){
            cout<<"*";
        }
        initSpace-=2;
        cout<<endl;
    }
}

void pattern20(int n){
    int initSpaces=2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n - i;

        for(int j=1; j<=stars; j++){
            cout<<"*";
        }

        for(int j=1; j<=initSpaces; j++){
            cout<<" ";
        }

        for(int j=1; j<=stars; j++){
            cout<<"*";
        }

        cout<<endl;
        if(i<n) initSpaces-=2;
        else initSpaces+=2;
    }
}

void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==n-1 || j == n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}

void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int down = (2*n-2) - i;
            cout<<(n - min(min(top, down), min(left, right)));
        }
        cout<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter any number: ";
    cin>>n;

    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);

    return 0;
}