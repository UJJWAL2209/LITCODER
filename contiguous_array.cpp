    #include <iostream>
    #include <cstdio>
    #include<unordered_map> 
    #include<bits/stdc++.h> 
    using namespace std;

    int findmaxlen(int nums [50])

    {

    
        int a = sizeof(nums); 
        unordered_map<int,int> mp;

        for(int i=0;i<a;i++)

        {

            if(nums[i]==0)

                {

                   nums[i]=-1;

                }
        }
        int sum = 0,res = 0;

        for(int i=0;i<a;i++)

           
        {
                sum+=nums[i];

           if(sum==0)
            {
                res=max(res,i+1);
            }
           if(mp.find(sum)!=mp.end()) //if sum is in map 
            {
                res = max(res, i-mp[sum]);
            }

            else

            {

                 mp[sum]= i;

            }
        }
        return res;
    }



int main()

{
    int arr[50];
    int n;
    cin>>n;
    // int a = sizeof(arr)/sizeof(arr[0]);
    for(int i;i<n;i++)
    {
        cin>>arr[i];
    }
    int res = findmaxlen(arr);
    cout<<res;
    return 0;
}
    
    