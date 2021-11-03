#pragma once

#include "../../JObject.hpp"

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
	class ConfirmationPrompt_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConfirmationPrompt_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConfirmationPrompt_Builder(QJniObject obj);
		
		// Constructors
		ConfirmationPrompt_Builder(android::content::Context arg0);
		
		// Methods
		android::security::ConfirmationPrompt build();
		android::security::ConfirmationPrompt_Builder setExtraData(jbyteArray arg0);
		android::security::ConfirmationPrompt_Builder setPromptText(jstring arg0);
	};
} // namespace android::security

