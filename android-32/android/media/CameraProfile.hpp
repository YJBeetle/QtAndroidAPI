#pragma once

#include "./CameraProfile.def.hpp"

namespace android::media
{
	// Fields
	inline jint CameraProfile::QUALITY_HIGH()
	{
		return getStaticField<jint>(
			"android.media.CameraProfile",
			"QUALITY_HIGH"
		);
	}
	inline jint CameraProfile::QUALITY_LOW()
	{
		return getStaticField<jint>(
			"android.media.CameraProfile",
			"QUALITY_LOW"
		);
	}
	inline jint CameraProfile::QUALITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.media.CameraProfile",
			"QUALITY_MEDIUM"
		);
	}
	
	// Constructors
	inline CameraProfile::CameraProfile()
		: JObject(
			"android.media.CameraProfile",
			"()V"
		) {}
	
	// Methods
	inline jint CameraProfile::getJpegEncodingQualityParameter(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.media.CameraProfile",
			"getJpegEncodingQualityParameter",
			"(I)I",
			arg0
		);
	}
	inline jint CameraProfile::getJpegEncodingQualityParameter(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.media.CameraProfile",
			"getJpegEncodingQualityParameter",
			"(II)I",
			arg0,
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
