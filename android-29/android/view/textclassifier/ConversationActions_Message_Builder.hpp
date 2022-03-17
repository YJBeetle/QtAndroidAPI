#pragma once

#include "../../app/Person.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./ConversationActions_Message.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/ZonedDateTime.def.hpp"
#include "./ConversationActions_Message_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline ConversationActions_Message_Builder::ConversationActions_Message_Builder(android::app::Person arg0)
		: JObject(
			"android.view.textclassifier.ConversationActions$Message$Builder",
			"(Landroid/app/Person;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::textclassifier::ConversationActions_Message ConversationActions_Message_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/ConversationActions$Message;"
		);
	}
	inline android::view::textclassifier::ConversationActions_Message_Builder ConversationActions_Message_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::ConversationActions_Message_Builder ConversationActions_Message_Builder::setReferenceTime(java::time::ZonedDateTime arg0) const
	{
		return callObjectMethod(
			"setReferenceTime",
			"(Ljava/time/ZonedDateTime;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::ConversationActions_Message_Builder ConversationActions_Message_Builder::setText(JString arg0) const
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/view/textclassifier/ConversationActions$Message$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

