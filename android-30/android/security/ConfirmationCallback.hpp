#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JThrowable;

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
		void onCanceled() const;
		void onConfirmed(JByteArray arg0) const;
		void onDismissed() const;
		void onError(JThrowable arg0) const;
	};
} // namespace android::security

