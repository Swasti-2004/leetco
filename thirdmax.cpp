#include<iostream>
#include<vector>
#include<set>
using namespace std;
class solution{
    public:int thirdMax(vector<int>& nums)
    {
    set<int>uniquenums(nums.begin(),nums.end());
            if (uniquenums.size()<3)
            return *uniquenums.rbegin();
            else {
                auto it=uniquenums.rbegin();
                advance(it,2);
                return*it;
            }
    }
};
int main()
{
    vector<int>nums={2,1};
    int k;
    solution sol;
    k=sol.thirdMax(nums);
    cout<<k;
    cout<<endl;
    return 0;
}
