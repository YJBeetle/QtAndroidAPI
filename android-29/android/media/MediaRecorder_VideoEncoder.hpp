#pragma once

#include "./MediaRecorder.def.hpp"
#include "./MediaRecorder_VideoEncoder.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaRecorder_VideoEncoder::DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"DEFAULT"
		);
	}
	inline jint MediaRecorder_VideoEncoder::H263()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"H263"
		);
	}
	inline jint MediaRecorder_VideoEncoder::H264()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"H264"
		);
	}
	inline jint MediaRecorder_VideoEncoder::HEVC()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"HEVC"
		);
	}
	inline jint MediaRecorder_VideoEncoder::MPEG_4_SP()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"MPEG_4_SP"
		);
	}
	inline jint MediaRecorder_VideoEncoder::VP8()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoEncoder",
			"VP8"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
