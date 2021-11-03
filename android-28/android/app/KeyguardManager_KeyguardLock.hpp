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
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyguardManager_KeyguardLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyguardManager_KeyguardLock(QJniObject obj);
		
		// Constructors
		
		// Methods
		void disableKeyguard() const;
		void reenableKeyguard() const;
	};
} // namespace android::app

