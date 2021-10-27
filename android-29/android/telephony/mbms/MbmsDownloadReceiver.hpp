#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/BroadcastReceiver.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}

namespace android::telephony::mbms
{
	class MbmsDownloadReceiver : public android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		MbmsDownloadReceiver(QAndroidJniObject obj);
		// Constructors
		MbmsDownloadReceiver();
		
		// Methods
		void onReceive(android::content::Context arg0, android::content::Intent arg1);
	};
} // namespace android::telephony::mbms

