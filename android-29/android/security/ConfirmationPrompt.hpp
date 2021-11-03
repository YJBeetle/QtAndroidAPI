#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::security
{
	class ConfirmationCallback;
}

namespace android::security
{
	class ConfirmationPrompt : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConfirmationPrompt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConfirmationPrompt(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isSupported(android::content::Context arg0);
		void cancelPrompt();
		void presentPrompt(JObject arg0, android::security::ConfirmationCallback arg1);
	};
} // namespace android::security

