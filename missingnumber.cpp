#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    public: int missingnumber(vector<int>&nums){
        sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
            if( i!=nums[i])
               {return i;
               }
       }
       return nums.size();
    } 
};
int main()
{
    vector<int>nums={0,2,3,1};
    int k;
    solution sol;
    k=sol.missingnumber(nums);
    cout<<k;
    cout<<endl;
    return 0;
}