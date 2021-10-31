#include "./DownloadRequest.hpp"
#include "./FileInfo.hpp"
#include "./DownloadStatusListener.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// QAndroidJniObject forward
	DownloadStatusListener::DownloadStatusListener(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DownloadStatusListener::DownloadStatusListener()
		: __JniBaseClass(
			"android.telephony.mbms.DownloadStatusListener",
			"()V"
		) {}
	
	// Methods
	void DownloadStatusListener::onStatusUpdated(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1, jint arg2)
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

