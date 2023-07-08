// Brute Force Approach
// Time Complexity:- O(N)
// Space Complexity:- O(N)


void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int cnt=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
            }
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }
        }

        for(int i=0;i<cnt;i++){
            ans.push_back(0);
        }

        for(int i=0;i<ans.size();i++) {
            nums[i]=ans[i];
        }

    }


// Optimized Approach
// Time Complexity:- O(N)
// Space Complexity:- O(1)

 int n=nums.size();
        int i=0,j=0;

        while(i<n){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);

                j++;
            }
            i++;


        }
    }
