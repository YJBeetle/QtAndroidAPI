#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class KeyguardManager;
}

namespace android::app
{
	class KeyguardManager_KeyguardLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyguardManager_KeyguardLock(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyguardManager_KeyguardLock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void disableKeyguard();
		void reenableKeyguard();
	};
} // namespace android::app

