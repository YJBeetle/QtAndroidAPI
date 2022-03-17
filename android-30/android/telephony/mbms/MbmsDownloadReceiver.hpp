#pragma once

#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "./MbmsDownloadReceiver.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// Constructors
	inline MbmsDownloadReceiver::MbmsDownloadReceiver()
		: android::content::BroadcastReceiver(
			"android.telephony.mbms.MbmsDownloadReceiver",
			"()V"
		) {}
	
	// Methods
	inline void MbmsDownloadReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::telephony::mbms

// Base class headers
#include "../../content/BroadcastReceiver.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::mbms;
#endif
