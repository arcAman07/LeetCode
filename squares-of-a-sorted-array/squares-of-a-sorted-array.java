class Solution {
    public int[] sortedSquares(int[] nums) {
        int a = nums.length;
        int[] arr;
        arr = new int[a];
        for (int i=0;i<nums.length;i++) {
            arr[i] = nums[i]*nums[i];
        }
        for (int i=0;i<nums.length;i++) {
            for (int j=i+1;j<nums.length;j++) {
                int temp=0;
                if (arr[i]>arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
       
    }
}