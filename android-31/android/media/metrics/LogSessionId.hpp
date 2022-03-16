#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./LogSessionId.def.hpp"

namespace android::media::metrics
{
	// Fields
	inline android::media::metrics::LogSessionId LogSessionId::LOG_SESSION_ID_NONE()
	{
		return getStaticObjectField(
			"android.media.metrics.LogSessionId",
			"LOG_SESSION_ID_NONE",
			"Landroid/media/metrics/LogSessionId;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean LogSessionId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString LogSessionId::getStringId() const
	{
		return callObjectMethod(
			"getStringId",
			"()Ljava/lang/String;"
		);
	}
	inline jint LogSessionId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString LogSessionId::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::metrics

// Base class headers

