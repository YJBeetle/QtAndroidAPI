#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::content
{
	class Context;
}
namespace android::security
{
	class ConfirmationPrompt;
}
class JString;

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
		android::security::ConfirmationPrompt_Builder setExtraData(JByteArray arg0);
		android::security::ConfirmationPrompt_Builder setPromptText(JString arg0);
	};
} // namespace android::security

