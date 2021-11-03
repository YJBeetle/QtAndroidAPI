#include "./DownloadRequest.hpp"
#include "./FileInfo.hpp"
#include "./DownloadProgressListener.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// QAndroidJniObject forward
	DownloadProgressListener::DownloadProgressListener(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DownloadProgressListener::DownloadProgressListener()
		: JObject(
			"android.telephony.mbms.DownloadProgressListener",
			"()V"
		) {}
	
	// Methods
	void DownloadProgressListener::onProgressUpdated(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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

