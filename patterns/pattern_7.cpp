/* 
Print the pattern
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;

int main(){
    int n, i = 1, j, count;

    cout << "Enter value of n: " << endl;
    cin >> n;
    i = count = 1;
    while(i<=n){
        j=1;

        while (j<=i){
            cout << count << " ";
            count++;
            j++;
        }
        cout <<  endl;
        i++;
    }
    return 0;
}