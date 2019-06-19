/*
 * LameConfig.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: rohan
 */

#include "LameConfig.h"

LameConfig::LameConfig() {
	lame = lame_init();

}

LameConfig::~LameConfig() {
	lame_close(lame);
}

ReturnFlag LameConfig::lmFillMetaData(unsigned int sample_rate, vbr_mode vbr_){
	if (lame) {
		lame_set_in_samplerate(lame, sample_rate);
		lame_set_VBR(lame, vbr_);
		lame_init_params(lame);

		return(SUCCESS);
	}
	return(FAILURE);
}

ReturnFlag LameConfig::CreateMp3(void){

//	write = lame_encode_buffer_interleaved(lame, WaveBuffer, WaveBuffer.size(), mp3_buffer, WaveBuffer.size());


	return(FAILURE);

}
