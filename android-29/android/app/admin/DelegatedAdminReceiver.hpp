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
namespace android::net
{
	class Uri;
}
class JString;

namespace android::app::admin
{
	class DelegatedAdminReceiver : public android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DelegatedAdminReceiver(const char *className, const char *sig, Ts...agv) : android::content::BroadcastReceiver(className, sig, std::forward<Ts>(agv)...) {}
		DelegatedAdminReceiver(QAndroidJniObject obj);
		
		// Constructors
		DelegatedAdminReceiver();
		
		// Methods
		JString onChoosePrivateKeyAlias(android::content::Context arg0, android::content::Intent arg1, jint arg2, android::net::Uri arg3, JString arg4) const;
		void onNetworkLogsAvailable(android::content::Context arg0, android::content::Intent arg1, jlong arg2, jint arg3) const;
		void onReceive(android::content::Context arg0, android::content::Intent arg1) const;
	};
} // namespace android::app::admin

