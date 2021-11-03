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
		
		// QJniObject forward
		template<typename ...Ts> explicit ConfirmationCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConfirmationCallback(QJniObject obj);
		
		// Constructors
		ConfirmationCallback();
		
		// Methods
		void onCanceled();
		void onConfirmed(JByteArray arg0);
		void onDismissed();
		void onError(JThrowable arg0);
	};
} // namespace android::security

