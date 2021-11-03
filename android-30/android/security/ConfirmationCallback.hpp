#pragma once

#include "../../JObject.hpp"


namespace android::security
{
	class ConfirmationCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConfirmationCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
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

