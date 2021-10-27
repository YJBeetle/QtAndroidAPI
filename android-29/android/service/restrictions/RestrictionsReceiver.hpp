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
namespace android::os
{
	class PersistableBundle;
}

namespace android::service::restrictions
{
	class RestrictionsReceiver : public android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		RestrictionsReceiver(QAndroidJniObject obj);
		// Constructors
		RestrictionsReceiver();
		
		// Methods
		void onReceive(android::content::Context arg0, android::content::Intent arg1);
		void onRequestPermission(android::content::Context arg0, jstring arg1, jstring arg2, jstring arg3, android::os::PersistableBundle arg4);
		void onRequestPermission(android::content::Context arg0, const QString &arg1, const QString &arg2, const QString &arg3, android::os::PersistableBundle arg4);
	};
} // namespace android::service::restrictions

