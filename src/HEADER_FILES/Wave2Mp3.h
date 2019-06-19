/*
 * Wave2Mp3.h
 *
 *  Created on: Jun 18, 2019
 *      Author: rohan
 */

#ifndef WAVE2MP3_H_
#define WAVE2MP3_H_

#include <iostream>
#include <fstream>
#include <vector>
#include "LameConfig.h"

class Wave2Mp3 {
public:
	Wave2Mp3();
	virtual ~Wave2Mp3();

	ReturnFlag Convert(std::string& WaveFilePath, const std::string& Mp3FilePath);
};

#endif /* WAVE2MP3_H_ */
