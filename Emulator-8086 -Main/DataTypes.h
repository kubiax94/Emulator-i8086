#pragma once
#include <iostream>


namespace emu_datatype {
	typedef unsigned int bit_arr_8[8];
	typedef unsigned int bit_arr_16[16];

	typedef struct byte {

	private:
		unsigned char value;


	public:

		byte() : value(0x00) {}
		byte(unsigned char x);

		byte& operator =(const byte& a);
		byte& operator =(const int a);

		bit_arr_8* to_bitarray();
		std::string to_hex();

	}Byte;

	typedef Byte Word[2];
	
	struct adress {

	private:
		Word _adr;

	public:
		adress();
		int get_value();
		void set_new_adr(Word adr);
		bit_arr_16* to_bitarray();
	};
	

}
