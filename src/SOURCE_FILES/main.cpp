//============================================================================
// Name        : WaveToMP3.cpp
// Author      : Rohan
// Version     : 0.1
// Copyright   : Your copyright notice
// Description : Main File for Wave to Mp3 Conversion
//============================================================================

#include "Wave2Mp3.h"

int main(void)
{
	std::string WaveFileName = "RohanChawhan.wav";
	std::string Mp3FileName = "RohanChawhan.mp3";

	Wave2Mp3 A = new Wave2Mp3();
	A.Convert(WaveFileName,Mp3FileName);

    return 0;
}
