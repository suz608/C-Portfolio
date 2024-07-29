// 75. Sort Colors (medium)
// Zican Hao
// CS5008 Spring 2023
// https://leetcode.com/problems/sort-colors/description/


void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


void sortColors(int* nums, int numsSize){
   int i,j;
   for( i=0; i < numsSize-1; i++){
        for( j=0; j < numsSize-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(&nums[j],&nums[j+1]);
            }
        }
    }
}
