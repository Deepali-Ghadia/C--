/*
Print the pattern
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int n, i, j;

    cout << "Enter value of n" << endl;
    cin >> n;

    i = 1;

    while (i <= n){
        j = n;
        while (j > 0){
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}