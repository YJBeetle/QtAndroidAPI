#pragma once

#include "../../app/RemoteAction.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./ConversationAction.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ConversationAction_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline ConversationAction_Builder::ConversationAction_Builder(JString arg0)
		: JObject(
			"android.view.textclassifier.ConversationAction$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::view::textclassifier::ConversationAction ConversationAction_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationAction;"
		);
	}
	inline android::view::textclassifier::ConversationAction_Builder ConversationAction_Builder::setAction(android::app::RemoteAction arg0) const
	{
		return callObjectMethod(
			"setAction",
			"(Landroid/app/RemoteAction;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::ConversationAction_Builder ConversationAction_Builder::setConfidenceScore(jfloat arg0) const
	{
		return callObjectMethod(
			"setConfidenceScore",
			"(F)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0
		);
	}
	inline android::view::textclassifier::ConversationAction_Builder ConversationAction_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::ConversationAction_Builder ConversationAction_Builder::setTextReply(JString arg0) const
	{
		return callObjectMethod(
			"setTextReply",
			"(Ljava/lang/CharSequence;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

