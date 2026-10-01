#include<bits/stdc++.h>
using namespace std;

void prt1(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << "*";
        }
    cout << endl;
    }
}

void prt2(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
    cout << endl;
    }
}

void prt3(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
    cout << endl;
    }
}

void prt4(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
    cout << endl;
    }
}

void prt5(int n){
     for(int i=n;i>=1;i=i-1){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
    cout << endl;
    }
}

void prt6(int n){
     for(int i=n;i>=1;i=i-1){
        for(int j=1;j<=i;j++){
            cout << j;
        }
    cout << endl;
    }
}

void prt7(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout << "*";
        }
       for(int m=1;m<=n-i;m++){
            cout << " ";
        }
        cout << endl;
    }
}

void prt8(int n){
    for(int i=n;i>=1;i=i-1){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout << "*";
        }
       for(int m=1;m<=n-i;m++){
            cout << " ";
        }
        cout << endl;
    }
}

void prt9(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout << "*";
        }
       for(int m=1;m<=n-i;m++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i=n;i>=1;i=i-1){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout << "*";
        }
       for(int m=1;m<=n-i;m++){
            cout << " ";
        }
        cout << endl;
    }
}

void prt10(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
    cout << endl;
    }
    for(int m=n-1;m>=1;m=m-1){
        for(int k=1;k<=m;k++){
            cout << "*";
        }
    cout << endl;
    }
}

void prt11(int n){
    for(int i=1;i<=n;i++){
        int num1=i;
        for(int j=1;j<=i;j++){
            cout << num1%2 ;
            num1=num1-1;
        }
    cout << endl;
    }
}

void prt12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int k=2*(n-i);k>=1;k=k-1){
            cout << " ";
        }
        for(int m=i;m>=1;m=m-1){
            cout << m;
        }
    cout << endl;
    }
}

void prt13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num=num+1;
        }
    cout << endl;
    }
}

void prt14(int n){
    for(int i =1;i<=n;i=i+1){
        for(char ch='A';ch<='A'+i-1;ch++){
            cout << ch << " ";
        }
    cout << endl;
    }
}


void prt15(int n){
    for(int i =n;i>=1;i=i-1){
        for(char ch='A';ch<='A'+i-1;ch++){
            cout << ch << " ";
        }
    cout << endl;
    }
}

void prt16(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+i-1;
            cout << ch << " ";
        }
    cout << endl;
    }
}

void prt17(int n){
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j=j-1){
            cout << " ";
        }
        for(char ch='A';ch<='A'+i-1;ch++){
            cout << ch;
        }
        for(char c='A'+i-2;c>='A';c=c-1){
            cout << c;
        }
    cout << endl;
    }
}

void prt18(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A'+n-i;ch<='A'+n-1;ch++){
            cout << ch;
        }
    cout << endl;
    }
}

void prt19(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j=j-1){
            cout << "*";
        }
        for(int m=1;m<=2*i-2;m++){
            cout << " ";
        }
        for(int k=n;k>=i;k=k-1){
            cout << "*";
        }
    cout << endl;
    }
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        for(int m=2*(n-i);m>=1;m=m-1){
            cout << " ";
        }
        for(int k=1;k<=i;k++){
            cout << "*";
        }
    cout << endl;
    }
}

void prt20(int n){
    for(int i=1;i<=n;i++){
        cout << "*";
    }
    cout << endl;
    for(int i=1;i<=n-2;i++){
        cout << "*";
        for(int j =1;j<=n-2;j++){
            cout << " ";
        }
        cout << "*" << endl;
    }
    for(int k=1;k<=n;k++){
        cout << "*";
    }
    cout << endl;
}

void prt21(int n){
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            for(int k=1;k<=n;k++){
                if(i==k||j==k||j==2*n-k||i==2*n-k){
                    cout << n-k+1;
                    break;
                }
            }
        }
        cout << endl;
    }
}


void prt22(int n){
    for(int i=0;i<=2*n-2;i++){
        for(int j=0;j<=2*n-2;j++){
            int left = j;
            int right=2*n-2-j;
            int top = i;
            int bottom = 2*n-2-i;
            cout << (n - min(min(top,bottom),min(right,left)));
        }
    cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
   for(int i=1;i<=n;i++){
        int n1;
        cin >> n1;
        prt21(n1);
   }
    return(0);
}