#pragma once

#include "./MediaRecorder.def.hpp"
#include "./MediaRecorder_AudioSource.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaRecorder_AudioSource::CAMCORDER()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"CAMCORDER"
		);
	}
	inline jint MediaRecorder_AudioSource::DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"DEFAULT"
		);
	}
	inline jint MediaRecorder_AudioSource::MIC()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"MIC"
		);
	}
	inline jint MediaRecorder_AudioSource::REMOTE_SUBMIX()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"REMOTE_SUBMIX"
		);
	}
	inline jint MediaRecorder_AudioSource::UNPROCESSED()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"UNPROCESSED"
		);
	}
	inline jint MediaRecorder_AudioSource::VOICE_CALL()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_CALL"
		);
	}
	inline jint MediaRecorder_AudioSource::VOICE_COMMUNICATION()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_COMMUNICATION"
		);
	}
	inline jint MediaRecorder_AudioSource::VOICE_DOWNLINK()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_DOWNLINK"
		);
	}
	inline jint MediaRecorder_AudioSource::VOICE_RECOGNITION()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_RECOGNITION"
		);
	}
	inline jint MediaRecorder_AudioSource::VOICE_UPLINK()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioSource",
			"VOICE_UPLINK"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

