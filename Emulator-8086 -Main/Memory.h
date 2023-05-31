#pragma once
#include "DataTypes.h"
#include <map>

using namespace emu_datatype;

namespace i8086 {
	struct MEMORY {
	private:
		std::map<adress, Word> _memory;


	public:

		MEMORY();

	};
}
