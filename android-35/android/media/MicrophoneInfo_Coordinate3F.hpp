#pragma once

#include "../../JObject.hpp"
#include "./MicrophoneInfo_Coordinate3F.def.hpp"

namespace android::media
{
	// Fields
	inline jfloat MicrophoneInfo_Coordinate3F::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	inline jfloat MicrophoneInfo_Coordinate3F::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	inline jfloat MicrophoneInfo_Coordinate3F::z()
	{
		return getField<jfloat>(
			"z"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean MicrophoneInfo_Coordinate3F::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
