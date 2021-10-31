#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::app
{
	class KeyguardManager_KeyguardDismissCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyguardManager_KeyguardDismissCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyguardManager_KeyguardDismissCallback(QJniObject obj);
		
		// Constructors
		KeyguardManager_KeyguardDismissCallback();
		
		// Methods
		void onDismissCancelled();
		void onDismissError();
		void onDismissSucceeded();
	};
} // namespace android::app

