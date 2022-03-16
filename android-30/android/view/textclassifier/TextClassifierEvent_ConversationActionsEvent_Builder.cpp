#include "./TextClassifierEvent_ConversationActionsEvent.hpp"
#include "./TextClassifierEvent_ConversationActionsEvent_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	TextClassifierEvent_ConversationActionsEvent_Builder::TextClassifierEvent_ConversationActionsEvent_Builder(jint arg0)
		: android::view::textclassifier::TextClassifierEvent_Builder(
			"android.view.textclassifier.TextClassifierEvent$ConversationActionsEvent$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	android::view::textclassifier::TextClassifierEvent_ConversationActionsEvent TextClassifierEvent_ConversationActionsEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$ConversationActionsEvent;"
		);
	}
} // namespace android::view::textclassifier

