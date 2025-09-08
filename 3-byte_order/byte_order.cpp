// My system info:-
// Architecture:   x86_64
// Byte Order:     Little Endian
//
// In Little Endian systems the least significant byte is stored
// and read first.

#include <iostream>
#include <bitset> // to view bits

void print_bytes(std::string &);

int main() {
  int i{120}; // {} list initialization warns about narrowing conversion
  char c(i); // direct initialization using constructor
  
  std::bitset<sizeof(int)*8>  bits_i(i);
  std::bitset<sizeof(char)*8> bits_c(c);

  std::string str_bits_i = bits_i.to_string();
  std::string str_bits_c = bits_c.to_string();
  
  std::cout << "i = " << i << std::endl;
  print_bytes(str_bits_i);
  std::cout << "c = " << c << std::endl;
  print_bytes(str_bits_c);
}

void print_bytes(std::string &bits) {
  for (int i=0; i < bits.length(); i+=8) {
    std::cout << bits.substr(i,8) << ' ';
  }
  std::cout << std::endl;
}
