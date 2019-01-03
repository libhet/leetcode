cmake_minimum_required(VERSION 3.9)
project(leetcode_test)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

add_executable(leetcode_test
        two_sum_test.cpp)

set_target_properties(leetcode_test PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
        INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIRS}
        )

target_link_libraries(leetcode_test ${Boost_LIBRARIES})

add_test(NAME LEETCODE_TEST COMMAND leetcode_test --list_content)