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
		
		DelegatedAdminReceiver(QAndroidJniObject obj);
		// Constructors
		DelegatedAdminReceiver();
		
		// Methods
		jstring onChoosePrivateKeyAlias(android::content::Context arg0, android::content::Intent arg1, jint arg2, android::net::Uri arg3, jstring arg4);
		void onNetworkLogsAvailable(android::content::Context arg0, android::content::Intent arg1, jlong arg2, jint arg3);
		void onReceive(android::content::Context arg0, android::content::Intent arg1);
	};
} // namespace android::app::admin

