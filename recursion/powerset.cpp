#include<iostream>
#include<vector>
using namespace std;
void solve(int nums[],int output[],int i,int ans[])
{
    if(i>=nums.size())
    {
        ans[i]=output;
        return;
    }
    solve(nums,output,i+1,ans);
    int y=nums[i];
    output[i]=y;
    solve(nums,output,i+1,ans);
}
    
    
int main()
{
    int nums[20];
    int ans[20];
    int output[20];
    int i=0;
    cout<<"enter array of elements:";
    for(int j=0;j<3;j++)
        cin>>nums[j];
    solve(nums,output,i,ans);
    for(int j=0;j<nums.size();j++)
        cout<<ans[j];
}