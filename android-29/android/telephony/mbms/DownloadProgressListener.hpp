#pragma once

#include "./DownloadRequest.def.hpp"
#include "./FileInfo.def.hpp"
#include "./DownloadProgressListener.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// Constructors
	inline DownloadProgressListener::DownloadProgressListener()
		: JObject(
			"android.telephony.mbms.DownloadProgressListener",
			"()V"
		) {}
	
	// Methods
	inline void DownloadProgressListener::onProgressUpdated(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
	{
		callMethod<void>(
			"onProgressUpdated",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/FileInfo;IIII)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
} // namespace android::telephony::mbms

// Base class headers

