#pragma once

#include "./LogSessionId.def.hpp"
#include "../../../JObject.hpp"
#include "./TranscodingSession.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void TranscodingSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean TranscodingSession::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::media::metrics::LogSessionId TranscodingSession::getSessionId() const
	{
		return callObjectMethod(
			"getSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	inline jint TranscodingSession::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media::metrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
