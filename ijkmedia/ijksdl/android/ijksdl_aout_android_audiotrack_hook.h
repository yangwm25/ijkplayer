/*
 * ijkhookaudio.h
 *
 *  Created on: 2020年8月19日
 *      Author: radin
 */

#ifndef IJKHOOKAUDIO_H_
#define IJKHOOKAUDIO_H_

typedef struct IjkHookAudio
{
	void* use_data;
	bool  mute_ijk;
	void* (*InitAudio)(void* use_data, int audio_session_id, int freq, uint16_t format, uint8_t channels);
	void  (*UninitAudio)(void* use_data, int audio_session_id, void* init_ret);
	void  (*SetVolume)(void* use_data, int audio_session_id, void* init_ret, int volume);
	void  (*PushData)(void* use_data, int audio_session_id, void* init_ret, uint8_t *data, int size_in_byte);
	bool  speed_by_use;
}IjkHookAudio;

void InitIjkHookAudio(IjkHookAudio* pHook);
void SetIjkHookAudio(IjkHookAudio* pHook);

#endif /* IJKHOOKAUDIO_H_ */
