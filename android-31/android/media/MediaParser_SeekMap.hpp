#pragma once

#include "../util/Pair.def.hpp"
#include "./MediaParser_SeekMap.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaParser_SeekMap::UNKNOWN_DURATION()
	{
		return getStaticField<jint>(
			"android.media.MediaParser$SeekMap",
			"UNKNOWN_DURATION"
		);
	}
	
	// Constructors
	
	// Methods
	inline jlong MediaParser_SeekMap::getDurationMicros() const
	{
		return callMethod<jlong>(
			"getDurationMicros",
			"()J"
		);
	}
	inline android::util::Pair MediaParser_SeekMap::getSeekPoints(jlong arg0) const
	{
		return callObjectMethod(
			"getSeekPoints",
			"(J)Landroid/util/Pair;",
			arg0
		);
	}
	inline jboolean MediaParser_SeekMap::isSeekable() const
	{
		return callMethod<jboolean>(
			"isSeekable",
			"()Z"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
