#include "./DownloadRequest.hpp"
#include "./FileInfo.hpp"
#include "./DownloadStatusListener.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	DownloadStatusListener::DownloadStatusListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DownloadStatusListener::DownloadStatusListener()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.DownloadStatusListener",
			"()V"
		);
	}
	
	// Methods
	void DownloadStatusListener::onStatusUpdated(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onStatusUpdated",
			"(Landroid/telephony/mbms/DownloadRequest;Landroid/telephony/mbms/FileInfo;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::telephony::mbms

