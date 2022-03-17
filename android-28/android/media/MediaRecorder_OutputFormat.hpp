#pragma once

#include "./MediaRecorder.def.hpp"
#include "./MediaRecorder_OutputFormat.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaRecorder_OutputFormat::AAC_ADTS()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"AAC_ADTS"
		);
	}
	inline jint MediaRecorder_OutputFormat::AMR_NB()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"AMR_NB"
		);
	}
	inline jint MediaRecorder_OutputFormat::AMR_WB()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"AMR_WB"
		);
	}
	inline jint MediaRecorder_OutputFormat::DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"DEFAULT"
		);
	}
	inline jint MediaRecorder_OutputFormat::MPEG_2_TS()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"MPEG_2_TS"
		);
	}
	inline jint MediaRecorder_OutputFormat::MPEG_4()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"MPEG_4"
		);
	}
	inline jint MediaRecorder_OutputFormat::RAW_AMR()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"RAW_AMR"
		);
	}
	inline jint MediaRecorder_OutputFormat::THREE_GPP()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"THREE_GPP"
		);
	}
	inline jint MediaRecorder_OutputFormat::WEBM()
	{
		return getStaticField<jint>(
			"android.media.MediaRecorder$OutputFormat",
			"WEBM"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
