#pragma once

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
		
		// QJniObject forward
		template<typename ...Ts> explicit MbmsDownloadReceiver(const char *className, const char *sig, Ts...agv) : android::content::BroadcastReceiver(className, sig, std::forward<Ts>(agv)...) {}
		MbmsDownloadReceiver(QJniObject obj);
		
		// Constructors
		MbmsDownloadReceiver();
		
		// Methods
		void onReceive(android::content::Context arg0, android::content::Intent arg1);
	};
} // namespace android::telephony::mbms

