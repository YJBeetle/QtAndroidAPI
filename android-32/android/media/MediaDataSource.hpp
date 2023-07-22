#pragma once

#include "../../JByteArray.hpp"
#include "./MediaDataSource.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaDataSource::MediaDataSource()
		: JObject(
			"android.media.MediaDataSource",
			"()V"
		) {}
	
	// Methods
	inline jlong MediaDataSource::getSize() const
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	inline jint MediaDataSource::readAt(jlong arg0, JByteArray arg1, jint arg2, jint arg3) const
	{
		return callMethod<jint>(
			"readAt",
			"(J[BII)I",
			arg0,
			arg1.object<jbyteArray>(),
			arg2,
			arg3
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
