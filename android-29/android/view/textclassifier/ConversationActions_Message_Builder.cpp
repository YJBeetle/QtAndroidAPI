#include "../../app/Person.hpp"
#include "../../os/Bundle.hpp"
#include "./ConversationActions_Message.hpp"
#include "../../../java/time/ZonedDateTime.hpp"
#include "./ConversationActions_Message_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	ConversationActions_Message_Builder::ConversationActions_Message_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConversationActions_Message_Builder::ConversationActions_Message_Builder(android::app::Person arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationActions$Message$Builder",
			"(Landroid/app/Person;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ConversationActions_Message_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationActions$Message;"
		);
	}
	QAndroidJniObject ConversationActions_Message_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConversationActions_Message_Builder::setReferenceTime(java::time::ZonedDateTime arg0)
	{
		return __thiz.callObjectMethod(
			"setReferenceTime",
			"(Ljava/time/ZonedDateTime;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ConversationActions_Message_Builder::setText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier

