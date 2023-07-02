/* 
Print the pattern
1
2 2
3 3 3
4 4 4 4
*/


#include<iostream>
using namespace std;

int main(){
    int n, i, j;

    cout << "Enter value of n:" << endl;
    cin >> n;

    i = 1; 
    
    while(i <= n){
        j = 1;
        while(j<=i){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}