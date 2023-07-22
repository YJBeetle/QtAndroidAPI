#pragma once

#include "./LogSessionId.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./BundleSession.def.hpp"

namespace android::media::metrics
{
	// Fields
	inline JString BundleSession::KEY_STATSD_ATOM()
	{
		return getStaticObjectField(
			"android.media.metrics.BundleSession",
			"KEY_STATSD_ATOM",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline void BundleSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean BundleSession::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::media::metrics::LogSessionId BundleSession::getSessionId() const
	{
		return callObjectMethod(
			"getSessionId",
			"()Landroid/media/metrics/LogSessionId;"
		);
	}
	inline jint BundleSession::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void BundleSession::reportBundleMetrics(android::os::PersistableBundle arg0) const
	{
		callMethod<void>(
			"reportBundleMetrics",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		);
	}
} // namespace android::media::metrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
