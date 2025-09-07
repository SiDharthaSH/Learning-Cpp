#include <iostream>
#include "../include/std_lib_facilities.hpp"

int main() {
  std::string cur_word, prev_word = "";
  int count(0);
  while (std::cin >> cur_word) {
    if (cur_word == prev_word) {
      ++count;
    } else {
      if (count) {
        std::cerr << prev_word << " was repeated " << count << 
          (count > 1 ? " times." : " time.") << std::endl;
        count = 0;
      }
      prev_word = cur_word;
    }
  }
  if (count) {
    std::cerr << prev_word << " was repeated " << count << 
      (count > 1 ? " times." : " time.") << std::endl;
  }
  keep_window_open();
  return 0;
}
