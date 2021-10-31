#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::app
{
	class KeyguardManager_KeyguardDismissCallback;
}
namespace android::app
{
	class KeyguardManager_KeyguardLock;
}
namespace android::content
{
	class Intent;
}

namespace android::app
{
	class KeyguardManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyguardManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyguardManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject createConfirmDeviceCredentialIntent(jstring arg0, jstring arg1);
		void exitKeyguardSecurely(__JniBaseClass arg0);
		jboolean inKeyguardRestrictedInputMode();
		jboolean isDeviceLocked();
		jboolean isDeviceSecure();
		jboolean isKeyguardLocked();
		jboolean isKeyguardSecure();
		QAndroidJniObject newKeyguardLock(jstring arg0);
		void requestDismissKeyguard(android::app::Activity arg0, android::app::KeyguardManager_KeyguardDismissCallback arg1);
	};
} // namespace android::app

