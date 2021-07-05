// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends
/*you are required to complete this method*/

int convertFive(int n) {
    
    string ss;
    ss = to_string(n);
    
    for(int i = 0; ss[i] != '\0'; i++){
        if(ss[i] == '0'){
           ss[i] = '5';
        }
    }
   
    stringstream x(ss);
    int res = 0;
    
    x >> res;
    
    return res;
}
