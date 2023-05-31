#pragma once
#include "DataTypes.h"
namespace i8086 {


	/// <summary>
	/// The execution unit of the 8086 tells the BIU where to fetch instructions or data from, decodes instructions, and executes instructions.
	//➢ The EU contains control circuitry, which directs internal operations.
	//➢ A decoder in the EU translates instructions fetched from memory into a series of actions, which the EU carries out.
	//➢ The EU has a 16-bit arithmetic logic unit (ALU) which can add, subtract, AND, OR, XOR, increment, decrement, complement or shift binary numbers.
	//➢ The main functions of EU are:
	//o Decoding of Instructions
	//o Execution of instructions
	//✓ Steps
	//▪ EU extracts instructions from top of queue in BIU
	//▪ Decode the instructions -> w moim wypadku interpreter
	//▪ Generates operands if necessary
	//▪ Passes operands to BIU & requests it to perform read or write bus cycles to memory or I/O
	//▪ Perform the operation specified by the instruction on operands
	//REJEST BX JEST REJESTREM DO ZAPISU
	//
	/// </summary>
	class execution_unit {

	private:
		emu_datatype::Word value;

	};
}