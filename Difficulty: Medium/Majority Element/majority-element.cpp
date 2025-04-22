//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int leader = arr[0];
        int maj = 1;
        for(int i=1;i<=n-1;i++){
            if(maj == 0){
                leader = arr[i];
                maj += 1;
            }
            else{
                if(leader == arr[i]){
                    maj += 1;
                }
                else{
                    maj -= 1;
                }
            }
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == leader){
                count += 1;
            }
        }
        if(count > n/2){
            return leader;
        }
        else{
            return -1;
        }
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends