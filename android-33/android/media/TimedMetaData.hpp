#pragma once

#include "../../JByteArray.hpp"
#include "./TimedMetaData.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline TimedMetaData::TimedMetaData(jlong arg0, JByteArray arg1)
		: JObject(
			"android.media.TimedMetaData",
			"(J[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	inline JByteArray TimedMetaData::getMetaData() const
	{
		return callObjectMethod(
			"getMetaData",
			"()[B"
		);
	}
	inline jlong TimedMetaData::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
