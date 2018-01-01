#ifndef _H_EMULATOR_CARTRIDGE
#define _H_EMULATOR_CARTRIDGE

#include <iostream>
#include <vector>

#include "Memory.h"
#include "Singleton.h"

class Cartridge : public Singleton<Cartridge>
{

public:
	Cartridge();

	void readFromFile(std::string filename);

	uint8_t getBlock(int address);
	int getSize();

private:
    std::vector<uint8_t> _data;

};

#endif
