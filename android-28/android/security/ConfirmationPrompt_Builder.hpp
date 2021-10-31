#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::security
{
	class ConfirmationPrompt;
}

namespace android::security
{
	class ConfirmationPrompt_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConfirmationPrompt_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConfirmationPrompt_Builder(QAndroidJniObject obj);
		
		// Constructors
		ConfirmationPrompt_Builder(android::content::Context arg0);
		
		// Methods
		android::security::ConfirmationPrompt build();
		android::security::ConfirmationPrompt_Builder setExtraData(jbyteArray arg0);
		android::security::ConfirmationPrompt_Builder setPromptText(jstring arg0);
	};
} // namespace android::security

