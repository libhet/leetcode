#include "leetcode_base.h"

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
//        const auto begin = std::begin(nums);
//        const auto end   = std::end(nums);
//        auto first_it    = std::begin(nums);
//        auto second_it   = std::end(nums);
//
//        while(second_it == std::end(nums)) {
//
//        second_it = std::find_if(begin,end,
//                                      [target,&first_it,&second_it](int i)
//                                      {return i == target - *first_it;});
//
//            if(second_it == end || (first_it == second_it)) {
//                ++first_it;
//                second_it = std::end(nums);
//            }
//        }
//            int first_idx  = std::distance(begin, first_it);
//            int second_idx = std::distance(begin, second_it);
//            return std::vector<int> {first_idx, second_idx};

        std::unordered_map<int,int> umap;
        for(auto i = 0u; i < nums.size(); ++i) {
            umap.insert(std::make_pair(nums[i],i));
        }

        const auto end   = std::end(umap);
        const auto begin = std::begin(umap);

        for(auto first_it = begin; first_it != end; ++first_it) {
            auto second_it = umap.find(target-first_it->first);
            if(second_it != end && second_it != first_it) {
                return std::vector<int> {first_it->second, second_it->second};
            }
        }


    }
};