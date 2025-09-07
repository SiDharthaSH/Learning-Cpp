#include <iostream>

void keep_window_open();

#if defined(_WIN32) // defined when compiled in win32/64 env
  void keep_window_open() {
    std::cout.clear();
    std::cout << "Enter any charater to exit" << std::endl;
    char ch;
    std::cin >> ch;
    return;
  }
#elif defined(__linux__) // defined when compiled in linux env
  void keep_window_open() {
    return;
  }
#else // any other OS
  void keep_window_open() {
    return;
  }
#endif
