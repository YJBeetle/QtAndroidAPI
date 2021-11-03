#pragma once

#include "../../../JObject.hpp"
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

namespace android::app::admin
{
	class DelegatedAdminReceiver : public android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DelegatedAdminReceiver(const char *className, const char *sig, Ts...agv) : android::content::BroadcastReceiver(className, sig, std::forward<Ts>(agv)...) {}
		DelegatedAdminReceiver(QJniObject obj);
		
		// Constructors
		DelegatedAdminReceiver();
		
		// Methods
		jstring onChoosePrivateKeyAlias(android::content::Context arg0, android::content::Intent arg1, jint arg2, android::net::Uri arg3, jstring arg4);
		void onNetworkLogsAvailable(android::content::Context arg0, android::content::Intent arg1, jlong arg2, jint arg3);
		void onReceive(android::content::Context arg0, android::content::Intent arg1);
		void onSecurityLogsAvailable(android::content::Context arg0, android::content::Intent arg1);
	};
} // namespace android::app::admin

