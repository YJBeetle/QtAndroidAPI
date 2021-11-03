#include "../../JByteArray.hpp"
#include "../content/Context.hpp"
#include "./ConfirmationPrompt.hpp"
#include "../../JString.hpp"
#include "./ConfirmationPrompt_Builder.hpp"

namespace android::security
{
	// Fields
	
	// QJniObject forward
	ConfirmationPrompt_Builder::ConfirmationPrompt_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConfirmationPrompt_Builder::ConfirmationPrompt_Builder(android::content::Context arg0)
		: JObject(
			"android.security.ConfirmationPrompt$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::security::ConfirmationPrompt ConfirmationPrompt_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/ConfirmationPrompt;"
		);
	}
	android::security::ConfirmationPrompt_Builder ConfirmationPrompt_Builder::setExtraData(JByteArray arg0)
	{
		return callObjectMethod(
			"setExtraData",
			"([B)Landroid/security/ConfirmationPrompt$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	android::security::ConfirmationPrompt_Builder ConfirmationPrompt_Builder::setPromptText(JString arg0)
	{
		return callObjectMethod(
			"setPromptText",
			"(Ljava/lang/CharSequence;)Landroid/security/ConfirmationPrompt$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::security

