#pragma once

#include "./LogSessionId.def.hpp"
#include "../../../JObject.hpp"
#include "./RecordingSession.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void RecordingSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean RecordingSession::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::media::metrics::LogSessionId RecordingSession::getSessionId() const
	{
		return callObjectMethod(
			"getSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	inline jint RecordingSession::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media::metrics

// Base class headers

