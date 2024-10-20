/*
    This is just one case to do the explanation of the problem.
*/

#include <iostream>
#include <vector>
using namespace std;

void rotLeft(vector<int> &a, int d); // This is the definition of the function

int main() {
    vector<int> a{1, 2, 3, 4, 5};
    int d = 6;
    rotLeft(a, d);

    //This shows the final output
    cout << "Final array: "; 
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

// Here is how to solve the problem
void rotLeft(vector<int> &a, int d) { 
    int n = a.size();   
    d = d % n; // We need to know the residue so we can avoid unnecesary rotations
    for (int r = 0; r < d; r++) {
        int aux = a.front(); // Aux keeps the value of index 0 because i'll be overwritten
        for (int i = 0; i < n - 1; i++) {  
            a[i] = a[i + 1]; //This displaces the value of each index one position to the left
        }
        a.back() = aux; //This overwrite the last index with the value of what used to be the fisrt one.
    }
    //------Here you should return a, so it can be evaluated
    //return a;
    
}
