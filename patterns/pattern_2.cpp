/* Pattern is
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

#include<iostream>
using namespace std;

int main(){

    int n, i, j;

    // take number of lines as input from user
    cout << "Enter value of n: \n";
    cin >> n;

    // using for loop
    cout << "Using Nested For Loops: " << endl;
    for (i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << j << " "; 
        }
        cout << endl;
    }
    cout << endl;

    // using while loop
    cout << "Using Nested While Loops: " << endl;
    i = 1;
    while (i <= n){
        j = 1;

        while (j <= n){
            cout << j << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}