#pragma once

#include "./MediaRecorder.def.hpp"
#include "./MediaRecorder_VideoSource.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaRecorder_VideoSource::CAMERA()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoSource",
			"CAMERA"
		);
	}
	inline jint MediaRecorder_VideoSource::DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoSource",
			"DEFAULT"
		);
	}
	inline jint MediaRecorder_VideoSource::SURFACE()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$VideoSource",
			"SURFACE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

