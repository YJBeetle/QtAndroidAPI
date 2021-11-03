#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::content
{
	class Context;
}
namespace android::security
{
	class ConfirmationCallback;
}
class JString;

namespace android::security
{
	class ConfirmationPrompt : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConfirmationPrompt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConfirmationPrompt(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isSupported(android::content::Context arg0);
		void cancelPrompt();
		void presentPrompt(JObject arg0, android::security::ConfirmationCallback arg1);
	};
} // namespace android::security

