#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return (left * left) - (2 * left * right) + (right * right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    int* pointer_to_mask = &mask;
    int mask_to = *pointer_to_mask;
    int i = 0;
    bool flag = false;
    while (mask_to > 0) {
      int k = mask_to % 2;
      mask_to = mask_to / 2;
      i++;
      if (k == 1 and i == bit_pos + 1) {
        flag = true;
      }
    }
    if (mask < 0 or bit_pos < 0) {
      flag = false;
    }
    return flag;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    int max;
    if (left > middle) {
      max = left;
    } else {
      max = middle;
    }
    if (right > max) {
      max = right;
    } else {
      max = max;
    }
    return max;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if ((left == nullptr or right == nullptr)) {
      return;
    } else {
      int c = *left;
      *left = *right;
      *right = c;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr != nullptr && length > 0) {
      int summ = 0;
      for (int i = 0; i < length; i++) {
        summ += arr[i];
      }
      return summ;
    }
    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr != nullptr && length > 0) {
      int *max = &arr[0];
      for (int i = 0; i < length; i++){
        if (*max < arr[i]) {
          *max = arr[i];
        }
      }
      return max;
    }
    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    // Write your code here ...

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
