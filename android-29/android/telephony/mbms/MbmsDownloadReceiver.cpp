#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./MbmsDownloadReceiver.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	MbmsDownloadReceiver::MbmsDownloadReceiver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MbmsDownloadReceiver::MbmsDownloadReceiver()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsDownloadReceiver",
			"()V"
		);
	}
	
	// Methods
	void MbmsDownloadReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::telephony::mbms

