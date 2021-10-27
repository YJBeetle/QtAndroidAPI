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
		
		KeyguardManager_KeyguardLock(QAndroidJniObject obj);
		// Constructors
		KeyguardManager_KeyguardLock() = default;
		
		// Methods
		void disableKeyguard();
		void reenableKeyguard();
	};
} // namespace android::app

