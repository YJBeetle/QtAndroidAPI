#pragma once

#include "./MediaRecorder.def.hpp"
#include "./MediaRecorder_AudioEncoder.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaRecorder_AudioEncoder::AAC()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AAC"
		);
	}
	inline jint MediaRecorder_AudioEncoder::AAC_ELD()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AAC_ELD"
		);
	}
	inline jint MediaRecorder_AudioEncoder::AMR_NB()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AMR_NB"
		);
	}
	inline jint MediaRecorder_AudioEncoder::AMR_WB()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"AMR_WB"
		);
	}
	inline jint MediaRecorder_AudioEncoder::DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"DEFAULT"
		);
	}
	inline jint MediaRecorder_AudioEncoder::HE_AAC()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"HE_AAC"
		);
	}
	inline jint MediaRecorder_AudioEncoder::OPUS()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"OPUS"
		);
	}
	inline jint MediaRecorder_AudioEncoder::VORBIS()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$AudioEncoder",
			"VORBIS"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

