#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./MbmsDownloadReceiver.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// QJniObject forward
	MbmsDownloadReceiver::MbmsDownloadReceiver(QJniObject obj) : android::content::BroadcastReceiver(obj) {}
	
	// Constructors
	MbmsDownloadReceiver::MbmsDownloadReceiver()
		: android::content::BroadcastReceiver(
			"android.telephony.mbms.MbmsDownloadReceiver",
			"()V"
		) {}
	
	// Methods
	void MbmsDownloadReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::telephony::mbms

