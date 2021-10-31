#include "../../app/Person.hpp"
#include "../../os/Bundle.hpp"
#include "./ConversationActions_Message.hpp"
#include "../../../java/time/ZonedDateTime.hpp"
#include "./ConversationActions_Message_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	ConversationActions_Message_Builder::ConversationActions_Message_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ConversationActions_Message_Builder::ConversationActions_Message_Builder(android::app::Person arg0)
		: __JniBaseClass(
			"android.view.textclassifier.ConversationActions$Message$Builder",
			"(Landroid/app/Person;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::textclassifier::ConversationActions_Message ConversationActions_Message_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationActions$Message;"
		);
	}
	android::view::textclassifier::ConversationActions_Message_Builder ConversationActions_Message_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::ConversationActions_Message_Builder ConversationActions_Message_Builder::setReferenceTime(java::time::ZonedDateTime arg0)
	{
		return callObjectMethod(
			"setReferenceTime",
			"(Ljava/time/ZonedDateTime;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::ConversationActions_Message_Builder ConversationActions_Message_Builder::setText(jstring arg0)
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier

