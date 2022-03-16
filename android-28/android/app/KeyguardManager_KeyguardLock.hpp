#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class KeyguardManager;
}
class JString;

namespace android::app
{
	class KeyguardManager_KeyguardLock : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyguardManager_KeyguardLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyguardManager_KeyguardLock(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void disableKeyguard() const;
		void reenableKeyguard() const;
	};
} // namespace android::app

