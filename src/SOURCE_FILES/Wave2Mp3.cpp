/*
 * Wave2Mp3.cpp
 *
 *  Created on: Jun 18, 2019
 *      Author: rohan
 */

#include "Wave2Mp3.h"

Wave2Mp3::Wave2Mp3() {
	// TODO Auto-generated constructor stub

}

Wave2Mp3::~Wave2Mp3() {
	// TODO Auto-generated destructor stub
}

ReturnFlag Wave2Mp3::Convert(std::string& WaveFilePath, const std::string& Mp3FilePath) {
	try {
		std::ifstream WaveFile(WaveFilePath, std::ios::in | std::ios::binary);
		std::ofstream Mp3File(Mp3FilePath, std::ios::out | std::ios::binary);

		std::vector<unsigned char> WaveBuffer(
				(std::istreambuf_iterator<char>(WaveFile)),
				std::istreambuf_iterator<char>());

		WaveFile.close();

//    FILE *pcm = fopen("RohanChawhan.wav", "rb");
//    FILE *mp3 = fopen("file.mp3", "wb");
//
//    const int PCM_SIZE = 8192;
//    const int MP3_SIZE = 8192;

//    short int pcm_buffer[PCM_SIZE*2];
		unsigned char mp3_buffer[WaveBuffer.size()];

//    do {
//        if (read == 0)
//            write = lame_encode_flush(lame, mp3_buffer, MP3_SIZE);
//        else
//            write = lame_encode_buffer_interleaved(lame, WaveBuffer, read, mp3_buffer, MP3_SIZE);
//        fwrite(mp3_buffer, write, 1, mp3);
//    } while (read != 0);

		LameConfig B = new LameConfig();
		if (SUCCESS != B.lmFillMetaData(8000, vbr_default)) {
			throw("Error in writing Lame MetaData");
		}

		if (SUCCESS != B.CreateMp3()) {
			throw("Error in creating MP3");
		}

//		fclose (mp3);
//		fclose (pcm);
	} catch (std::exception *e) {
		std::cerr << "Stadard Failure: " << e->what() << std::endl;
		return (FAILURE);
	} catch (const char *msg) {
		std::cout << "Run-Time Failure: " << msg << std::endl;
		return (FAILURE);
	}

	return(SUCCESS);
}
