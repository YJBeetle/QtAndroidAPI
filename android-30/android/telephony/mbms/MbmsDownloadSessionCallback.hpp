#pragma once

#include "../../../JString.hpp"
#include "./MbmsDownloadSessionCallback.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// Constructors
	inline MbmsDownloadSessionCallback::MbmsDownloadSessionCallback()
		: JObject(
			"android.telephony.mbms.MbmsDownloadSessionCallback",
			"()V"
		) {}
	
	// Methods
	inline void MbmsDownloadSessionCallback::onError(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void MbmsDownloadSessionCallback::onFileServicesUpdated(JObject arg0) const
	{
		callMethod<void>(
			"onFileServicesUpdated",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void MbmsDownloadSessionCallback::onMiddlewareReady() const
	{
		callMethod<void>(
			"onMiddlewareReady",
			"()V"
		);
	}
} // namespace android::telephony::mbms

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::mbms;
#endif
