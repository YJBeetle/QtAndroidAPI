#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::security
{
	class ConfirmationCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		ConfirmationCallback(QAndroidJniObject obj);
		// Constructors
		ConfirmationCallback();
		
		// Methods
		void onCanceled();
		void onConfirmed(jbyteArray arg0);
		void onDismissed();
		void onError(jthrowable arg0);
	};
} // namespace android::security

