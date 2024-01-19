#include <iostream>
#include <string>

using namespace std;

int main() {
    int k;
    cin >>k;
    for (int j =0; j<k; j++){
        int n, s = 0;
        cin >> n;
        for (int i = 1; i<n/2+1; i++){
            if (n%i==0) s+=i;
        }
        string output = (s == n)? "a perfect": (n>s)? "a deficient" : "an abundant";
        cout << n << " is " << output << " number." << endl;
    }
}
