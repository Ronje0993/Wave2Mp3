/*
 * LameConfig.h
 *
 *  Created on: Jun 18, 2019
 *      Author: rohan
 */

#ifndef LAMECONFIG_H_
#define LAMECONFIG_H_

#include <lame/lame.h>
#include "LameUtility.h"

class LameConfig {
private:
	lame_t lame;
public:
	LameConfig();
	virtual ~LameConfig();
	ReturnFlag lmFillMetaData(unsigned int sample_rate, vbr_mode vbr_);
	ReturnFlag CreateMp3(void);

};

#endif /* LAMECONFIG_H_ */
