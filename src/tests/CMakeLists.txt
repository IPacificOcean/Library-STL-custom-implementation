# 'Google_test' is the subproject name
cmake_minimum_required(VERSION 3.21.1)
project(Google_tests)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
#        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

#add_executable(Google_Tests_run test_sequence.cc)

add_executable(Google_Tests_run tests_vector.cc  )
#add_executable(Google_Tests_run tests_map.cc ../src/sorted_container/associative_container/s21_map.h)
#add_executable(Google_Tests_run tests_multiset.cc)
#add_executable(Google_Tests_run tests_set.cc)
#add_executable(Google_Tests_run tests_array.cc ../src/sequence/s21_array.cc ../src/sequence/s21_array.h)
#add_executable(Google_Tests_run tests_array.cc )
#add_executable(Google_Tests_run test_RBT.cc)


#target_link_libraries(Google_Tests_run for_testing pair)

target_link_libraries(Google_Tests_run gtest gtest_main)
