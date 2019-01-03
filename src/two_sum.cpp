#include "leetcode_base.h"

enum class TwoSum {
    BRUTE_FORCE_ITERATOR,
    HASH_MAP
};

class Solution {
public:
    std::vector<int> twoSum(TwoSum approach, std::vector<int>& nums, int target) {
        switch(approach){
            case TwoSum::BRUTE_FORCE_ITERATOR:
                return twoSum_bfi(nums,target);
                break;
            case TwoSum::BRUTE_FORCE:
                return twoSum_bf(nums,target);
                break;
            case TwoSum::HASH_MAP:
                return twoSum_hm(nums,target);
                break;
        }
    }

    std::vector<int> twoSum_bfi(std::vector<int>& nums, int target) {
        const auto begin = std::begin(nums);
        const auto end   = std::end(nums);
        auto first_it    = std::begin(nums);
        auto second_it   = std::end(nums);

        while(second_it == std::end(nums)) {

        second_it = std::find_if(begin,end,
                                      [target,&first_it,&second_it](int i)
                                      {return i == target - *first_it;});

            if(second_it == end || (first_it == second_it)) {
                ++first_it;
                second_it = std::end(nums);
            }
        }
            int first_idx  = std::distance(begin, first_it);
            int second_idx = std::distance(begin, second_it);
            return std::vector<int> {first_idx, second_idx};
        }

    std::vector<int> twoSum_hm(std::vector<int>& nums, int target) {
        std::unordered_map<int,int> umap;
        for(auto i = 0u; i < nums.size(); ++i) {
            umap.insert(std::make_pair(nums[i],i));
        }

        const auto end   = std::end(umap);

        for(auto i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            auto second_it = umap.find(complement);
            if(second_it != end && second_it->second != i) {
                return std::vector<int> {i, second_it->second};
            }
        }
    }

};