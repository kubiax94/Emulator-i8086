#include "DataTypes.h"
#include <iostream>

using namespace emu_datatype;

const char* hex_decoder = "0123456789ABCDEF";

byte::byte(unsigned char x) {
	if (x > 255) {
		value = 255;
		throw std::out_of_range("out of range of byte");
	}
	value = x;
}

byte& byte::operator=(const byte& x) {

	if (x.value > 255) {
		value = 255;
		throw std::out_of_range("out of range of byte");
	}

	value = x.value;
	return *this;
}
byte& byte::operator=(const int a) {
	if (a > 255) {
		value = 255;
		throw new std::out_of_range("Max value for byte is 15!");
	}

	value = a;
	return *this;
}

bit_arr_8* byte::to_bitarray() {
	bit_arr_8* arr = new bit_arr_8[8]();
	
	for (int i = 0; i < 8; i++) {

		bool is_set = value & (1 << i);
		*arr[i] = is_set;
		

	}
	return arr;
};
std::string byte::to_hex() {

	bit_arr_8* bits = to_bitarray();
	std::string result = "0x";

	int bitcount = -1,
		sum = 0;

	for (int i = 0; i < 8; i++) {
		bitcount++;

		if (*bits[i])
			sum = sum + (pow(2, bitcount));
		

		if (bitcount == 3) {
			result.insert(2, 1, hex_decoder[sum]);

			bitcount = -1;
			sum = 0;
		}
	}
	
	return result;
}