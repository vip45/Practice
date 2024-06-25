#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    int CountPairs(int N, int k, vector<int> &arr) {
        int count = 0;
        
        for(int i = 1; i <= N; i++) {
            for(int j = i + 1; j <= N; j++) {
                if(arr[i - 1] == arr[j - 1] && (i + j) % k == 0) {
                    count++;
                }
            }
        }
        
        return count;
    }
};

int main(){
    vector<int> arr={1,2,3,2,1};
    int ans = CountPairs(5,3,arr);
    cout<<ans<<endl;
}