#pragma once

#include "../../../JObject.hpp"
#include "./DownloadCompletedOutput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean DownloadCompletedOutput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject DownloadCompletedOutput::getRetainedKeys() const
	{
		return callObjectMethod(
			"getRetainedKeys",
			"()Ljava/util/List;"
		);
	}
	inline jint DownloadCompletedOutput::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
