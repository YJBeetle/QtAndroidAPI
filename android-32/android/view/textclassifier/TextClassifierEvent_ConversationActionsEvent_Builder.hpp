#pragma once

#include "./TextClassifierEvent_ConversationActionsEvent.def.hpp"
#include "./TextClassifierEvent_ConversationActionsEvent_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextClassifierEvent_ConversationActionsEvent_Builder::TextClassifierEvent_ConversationActionsEvent_Builder(jint arg0)
		: android::view::textclassifier::TextClassifierEvent_Builder(
			"android.view.textclassifier.TextClassifierEvent$ConversationActionsEvent$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::view::textclassifier::TextClassifierEvent_ConversationActionsEvent TextClassifierEvent_ConversationActionsEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$ConversationActionsEvent;"
		);
	}
} // namespace android::view::textclassifier

// Base class headers
#include "./TextClassifierEvent_Builder.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
