#include "../../app/RemoteAction.hpp"
#include "../../os/Bundle.hpp"
#include "./ConversationAction.hpp"
#include "./ConversationAction_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	ConversationAction_Builder::ConversationAction_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConversationAction_Builder::ConversationAction_Builder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationAction$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject ConversationAction_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationAction;"
		);
	}
	QAndroidJniObject ConversationAction_Builder::setAction(android::app::RemoteAction arg0)
	{
		return __thiz.callObjectMethod(
			"setAction",
			"(Landroid/app/RemoteAction;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConversationAction_Builder::setConfidenceScore(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setConfidenceScore",
			"(F)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0
		);
	}
	QAndroidJniObject ConversationAction_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConversationAction_Builder::setTextReply(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setTextReply",
			"(Ljava/lang/CharSequence;)Landroid/view/textclassifier/ConversationAction$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier

