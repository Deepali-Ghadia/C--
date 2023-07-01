/*
Pattern is
1 2 3
4 5 6
7 8 9
*/

#include<iostream>
using namespace std;

int main(){
    int n, i, j, count;

    cout << "Enter number of rows:" << endl;
    cin >> n;

    i = 1;
    count = 1;

    while (i <=n ){
        j = 1;
        while (j <= n){
            cout << count << " ";
            count++;
            j++;
        }

        cout << endl;
        i++;

    }
}