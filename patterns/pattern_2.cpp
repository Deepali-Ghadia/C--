/* Pattern is
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

#include<iostream>
using namespace std;

int main(){

    int n=4, i, j;

    // take number of lines as input from user
    cout << "Enter value of n: \n";
    cin >> n;

    // using for loop
    for (i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << j << " "; 
        }
        cout << endl;
    }

    return 0;
}