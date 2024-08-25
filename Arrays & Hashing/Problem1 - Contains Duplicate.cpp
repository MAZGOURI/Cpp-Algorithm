            /** by Youssef Mazgouri **
++  ++  +---+  ++ ++  +----+  +----+  +---+  +---+
¦++++¦  ¦+-+¦  ¦¦ ¦¦  ¦+--+¦  ¦+--+¦  ¦+--+  ¦+--+
++++++  ¦¦ ¦¦  ¦¦ ¦¦  ¦¦  ++  ¦¦  ++  ¦+--+  ¦+--+
 ++++   ¦¦ ¦¦  ¦¦ ¦¦  ¦+---+  ¦+---+  ¦+--+  ¦+--+
  ¦¦    ¦¦ ¦¦  ¦¦ ¦¦  +---+¦  +---+¦  ¦¦     ¦¦ 
  ¦¦    ¦+-+¦  ¦+-+¦  +---+¦  +---+¦  ¦+--+  ¦¦
  ++    +---+  +---+  +----+  +----+  +---+  ++
****************************************************/

/** Problem of Duplicate Integer  ------------------------------------------------------------------------------------*
                                                                                                                      ¦
Question :                                                                                                            ¦                                          
----------                                                                                                            ¦
                                                                                                                      ¦
Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.    ¦
                                                                                                                      ¦
                                                                                                                      ¦
*---Example 1: -------------------*                                                                                   ¦
¦   ----------                    ¦                                                                                   ¦
¦   Input: nums = [1, 2, 3, 3]    ¦                                                                                   ¦
¦                                 ¦                                                                                   ¦
¦   Output: true                  ¦                                                                                   ¦
*---------------------------------*                                                                                   ¦
                                                                                                                      ¦
                                                                                                                      ¦
*---Example 2: -------------------*                                                                                   ¦
¦   ----------                    ¦                                                                                   ¦
¦   Input: nums = [1, 2, 3, 4]    ¦                                                                                   ¦
¦                                 ¦                                                                                   ¦
¦   Output: false                 ¦                                                                                   ¦
*---------------------------------*                                                                                   ¦
                                                                                                                      ¦
--------------------------------------------------------------------------------------------------------------------**/

/** Solution **/

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;


bool hasDuplicate(vector<int>& nums)
{
    unordered_set<int> s(nums.begin(), nums.end());
    return s.size() != nums.size();
}

/* Example of testing */
int main() 
{
    vector<int> nums1{1, 2, 3, 3};
    cout<<"nums1 liste "<<(hasDuplicate(nums1)?"has a duplicate number.":"has no duplicate numbers.")<<endl;
    
    vector<int> nums2{1, 2, 3, 4};
    cout<<"nums2 liste "<<(hasDuplicate(nums2)?"has a duplicate number.":"has no duplicate numbers.")<<endl;
    
    return 0;
}
