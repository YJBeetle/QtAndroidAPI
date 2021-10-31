#include "./TextClassifierEvent_ConversationActionsEvent.hpp"
#include "./TextClassifierEvent_ConversationActionsEvent_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextClassifierEvent_ConversationActionsEvent_Builder::TextClassifierEvent_ConversationActionsEvent_Builder(QAndroidJniObject obj) : android::view::textclassifier::TextClassifierEvent_Builder(obj) {}
	
	// Constructors
	TextClassifierEvent_ConversationActionsEvent_Builder::TextClassifierEvent_ConversationActionsEvent_Builder(jint arg0)
		: android::view::textclassifier::TextClassifierEvent_Builder(
			"android.view.textclassifier.TextClassifierEvent$ConversationActionsEvent$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject TextClassifierEvent_ConversationActionsEvent_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$ConversationActionsEvent;"
		);
	}
} // namespace android::view::textclassifier

