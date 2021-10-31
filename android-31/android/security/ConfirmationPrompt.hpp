#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ConfirmationPrompt : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConfirmationPrompt(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConfirmationPrompt(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isSupported(android::content::Context arg0);
		void cancelPrompt();
		void presentPrompt(__JniBaseClass arg0, android::security::ConfirmationCallback arg1);
	};
} // namespace android::security

