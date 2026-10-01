#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {10, 20, 30};
    vector<int>::iterator it=v.begin();

    cout << v[0];


    // for(auto it=v.begin(); it < v.end();it++){
    //     cout << *(it) << endl;
    // }


    // while(it != v.end()){
    //     cout << *(it) << endl;
    //             it++;
    // }
        return 0;
}






















// int maxx(int num1,int num2,int num3){
//     if(num1 >= num2 && num1>=num3) return num1;
//     else if(num2>=num3) return num2;
//     else return num3;
// }
// int main() {
//     int n1,n2,n3;
//     cin >> n1 >> n2 >> n3;
//     cout << maxx(n1,n2,n3);
//     return(0);
// }