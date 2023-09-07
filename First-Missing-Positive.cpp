class Solution {
    public int firstMissingPositive(int[] nums) {
        HashSet<Integer> set=new HashSet<>();
        Arrays.sort(nums);
        if(nums.length==1)
        {
            if(nums[0]<=0 || nums[0] > 1)
            {
                return 1;
            }
            else if(nums[0]==1){
                return 2;
            }

        }
        int num=0;
        for(int i=0;i<nums.length;i++){
            set.add(nums[i]);
        }
        for(int i=0;i<nums.length;i++)
        {
            if(!set.contains(i+1))
            {
                num=i+1;
                return num;
            }
        }
        return nums[nums.length-1]+1;
    }   
}