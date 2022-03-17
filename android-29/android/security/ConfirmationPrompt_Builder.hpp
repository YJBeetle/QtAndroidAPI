#pragma once

#include "../../JByteArray.hpp"
#include "../content/Context.def.hpp"
#include "./ConfirmationPrompt.def.hpp"
#include "../../JString.hpp"
#include "./ConfirmationPrompt_Builder.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	inline ConfirmationPrompt_Builder::ConfirmationPrompt_Builder(android::content::Context arg0)
		: JObject(
			"android.security.ConfirmationPrompt$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::security::ConfirmationPrompt ConfirmationPrompt_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/ConfirmationPrompt;"
		);
	}
	inline android::security::ConfirmationPrompt_Builder ConfirmationPrompt_Builder::setExtraData(JByteArray arg0) const
	{
		return callObjectMethod(
			"setExtraData",
			"([B)Landroid/security/ConfirmationPrompt$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::security::ConfirmationPrompt_Builder ConfirmationPrompt_Builder::setPromptText(JString arg0) const
	{
		return callObjectMethod(
			"setPromptText",
			"(Ljava/lang/CharSequence;)Landroid/security/ConfirmationPrompt$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::security

// Base class headers

