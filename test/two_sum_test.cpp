#define BOOST_TEST_MODULE LEETCODE_TEST
#include <boost/test/unit_test.hpp>

#include "../src/two_sum.cpp"

Solution solution;

BOOST_AUTO_TEST_SUITE(TwoSum_BruteForceIterator)
    BOOST_AUTO_TEST_CASE(PositiveSequence) {
        std::vector<int> input = {1,2,3,4,5};
        int target = 9;
        std::vector<int> expected = {3,4};

        std::vector<int> output = solution.twoSum(TwoSum::BRUTE_FORCE_ITERATOR,input,target);
        std::sort(std::begin(output),std::end(output));
        BOOST_CHECK_EQUAL_COLLECTIONS(std::begin(output),   std::end(output),
                                      std::begin(expected), std::end(expected));
    }

    BOOST_AUTO_TEST_CASE(NegativeSequence) {
        std::vector<int> input = {-1,-2,-3,-4,-5};
        int target = -8;
        std::vector<int> expected = {2,4};

        std::vector<int> output = solution.twoSum(TwoSum::BRUTE_FORCE_ITERATOR,input,target);
        std::sort(std::begin(output),std::end(output));
        BOOST_CHECK_EQUAL_COLLECTIONS(std::begin(output),   std::end(output),
                                      std::begin(expected), std::end(expected));
    }

    BOOST_AUTO_TEST_CASE(SequenceWithTwoIdentical) {
        std::vector<int> input = {3,3};
        int target = 6;
        std::vector<int> expected = {0,1};

        std::vector<int> output = solution.twoSum(TwoSum::BRUTE_FORCE_ITERATOR,input,target);
        std::sort(std::begin(output),std::end(output));
        BOOST_CHECK_EQUAL_COLLECTIONS(std::begin(output),   std::end(output),
                                      std::begin(expected), std::end(expected));
    }
BOOST_AUTO_TEST_SUITE_END()