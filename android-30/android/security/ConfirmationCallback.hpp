#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::security
{
	class ConfirmationCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConfirmationCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConfirmationCallback(QJniObject obj);
		
		// Constructors
		ConfirmationCallback();
		
		// Methods
		void onCanceled();
		void onConfirmed(jbyteArray arg0);
		void onDismissed();
		void onError(jthrowable arg0);
	};
} // namespace android::security

