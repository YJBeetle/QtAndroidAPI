#pragma once

#include "./EditingEndedEvent.def.hpp"
#include "./LogSessionId.def.hpp"
#include "../../../JObject.hpp"
#include "./EditingSession.def.hpp"

namespace android::media::metrics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void EditingSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean EditingSession::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::media::metrics::LogSessionId EditingSession::getSessionId() const
	{
		return callObjectMethod(
			"getSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	inline jint EditingSession::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void EditingSession::reportEditingEndedEvent(android::media::metrics::EditingEndedEvent arg0) const
	{
		callMethod<void>(
			"reportEditingEndedEvent",
			"(Landroid/media/metrics/EditingEndedEvent;)V",
			arg0.object()
		);
	}
} // namespace android::media::metrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
