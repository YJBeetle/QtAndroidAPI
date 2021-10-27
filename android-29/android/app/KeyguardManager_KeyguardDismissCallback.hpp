#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::app
{
	class KeyguardManager_KeyguardDismissCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyguardManager_KeyguardDismissCallback(QAndroidJniObject obj);
		// Constructors
		KeyguardManager_KeyguardDismissCallback();
		
		// Methods
		void onDismissCancelled();
		void onDismissError();
		void onDismissSucceeded();
	};
} // namespace android::app

