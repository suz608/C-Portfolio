// 4.Median of Two Sorted Arrays (hard)
// Zican Hao
// CS5008 Spring 2023
// Problem link: https://leetcode.com/problems/median-of-two-sorted-arrays/


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int newArray[nums1Size+nums2Size];
    int x=0,i=0,j=0;

    while(i<nums1Size && j<nums2Size){
        if(nums1[i]<nums2[j]){
            newArray[x]=nums1[i];
            i++;
        }else{
            newArray[x]=nums2[j];
            j++;
        }
        x++;
    }

    while(i<nums1Size){
        newArray[x]=nums1[i];
        i++;
        x++;
    }

    while(j<nums2Size){
        newArray[x]=nums2[j];
        j++;
        x++;
    }

    int l=(nums1Size+ nums2Size)/2;
    if((nums1Size+nums2Size)%2==0){
        return (newArray[l]+newArray[l-1])/2.00;
    }else{
        return newArray[l];
    }
}
