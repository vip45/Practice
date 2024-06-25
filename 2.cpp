
#include <iostream>
#include<vector>
using namespace std;

    int minimumOperations(vector<int>& nums) {
        int i=0;
        int count=0;
        while(i<nums.size()){
            if(nums[i]%3==0){
                i++;
            }
            
            if((nums[i]-1)%3==0){
                count++;
            }
            
            if((nums[i]+1)%3==0){
                count++;
            }
            
            i++;
        }
        
        return count;
        
    }
int main()
{
    std::cout<<"Hello World"<<endl;
    // vector<int>nums = {1,2,3,4};
    vector<int>nums = {3,6,9};
    int ans = minimumOperations(nums);
    cout<<ans<<endl;
    return 0;
}