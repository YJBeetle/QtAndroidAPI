#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "./SubtitleData.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray SubtitleData::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline jlong SubtitleData::getDurationUs() const
	{
		return callMethod<jlong>(
			"getDurationUs",
			"()J"
		);
	}
	inline jlong SubtitleData::getStartTimeUs() const
	{
		return callMethod<jlong>(
			"getStartTimeUs",
			"()J"
		);
	}
	inline jint SubtitleData::getTrackIndex() const
	{
		return callMethod<jint>(
			"getTrackIndex",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
