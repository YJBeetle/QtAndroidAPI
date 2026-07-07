#pragma once

#include "./DownloadRequest.def.hpp"
#include "./FileInfo.def.hpp"
#include "./DownloadStatusListener.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// Constructors
	inline DownloadStatusListener::DownloadStatusListener()
		: JObject(
			"android.telephony.mbms.DownloadStatusListener",
			"()V"
		) {}
	
	// Methods
	inline void DownloadStatusListener::onStatusUpdated(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1, jint arg2) const
	{
		callMethod<void>(
			"onStatusUpdated",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/FileInfo;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::telephony::mbms

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::mbms;
#endif
