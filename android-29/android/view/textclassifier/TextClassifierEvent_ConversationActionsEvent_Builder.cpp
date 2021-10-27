#include "./TextClassifierEvent_ConversationActionsEvent.hpp"
#include "./TextClassifierEvent_ConversationActionsEvent_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextClassifierEvent_ConversationActionsEvent_Builder::TextClassifierEvent_ConversationActionsEvent_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextClassifierEvent_ConversationActionsEvent_Builder::TextClassifierEvent_ConversationActionsEvent_Builder(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$ConversationActionsEvent$Builder",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TextClassifierEvent_ConversationActionsEvent_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$ConversationActionsEvent;"
		);
	}
} // namespace android::view::textclassifier

