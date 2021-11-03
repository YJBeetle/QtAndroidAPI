#pragma once

#include "../../JObject.hpp"

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
class JString;
class JString;

namespace android::app
{
	class KeyguardManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyguardManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyguardManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createConfirmDeviceCredentialIntent(JString arg0, JString arg1);
		void exitKeyguardSecurely(JObject arg0);
		jboolean inKeyguardRestrictedInputMode();
		jboolean isDeviceLocked();
		jboolean isDeviceSecure();
		jboolean isKeyguardLocked();
		jboolean isKeyguardSecure();
		android::app::KeyguardManager_KeyguardLock newKeyguardLock(JString arg0);
		void requestDismissKeyguard(android::app::Activity arg0, android::app::KeyguardManager_KeyguardDismissCallback arg1);
	};
} // namespace android::app

