if(EXISTS "/Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build/test_utils[1]_tests.cmake")
  include("/Users/danpassy/Desktop/C++/Project02/rock_paper_scissors/build/test_utils[1]_tests.cmake")
else()
  add_test(test_utils_NOT_BUILT test_utils_NOT_BUILT)
endif()
