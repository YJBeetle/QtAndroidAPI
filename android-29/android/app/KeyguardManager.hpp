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
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyguardManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyguardManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createConfirmDeviceCredentialIntent(JString arg0, JString arg1) const;
		void exitKeyguardSecurely(JObject arg0) const;
		jboolean inKeyguardRestrictedInputMode() const;
		jboolean isDeviceLocked() const;
		jboolean isDeviceSecure() const;
		jboolean isKeyguardLocked() const;
		jboolean isKeyguardSecure() const;
		android::app::KeyguardManager_KeyguardLock newKeyguardLock(JString arg0) const;
		void requestDismissKeyguard(android::app::Activity arg0, android::app::KeyguardManager_KeyguardDismissCallback arg1) const;
	};
} // namespace android::app

