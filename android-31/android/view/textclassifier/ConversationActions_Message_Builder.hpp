#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class Person;
}
namespace android::os
{
	class Bundle;
}
namespace android::view::textclassifier
{
	class ConversationActions_Message;
}
namespace java::time
{
	class ZonedDateTime;
}

namespace android::view::textclassifier
{
	class ConversationActions_Message_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConversationActions_Message_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions_Message_Builder(QJniObject obj);
		
		// Constructors
		ConversationActions_Message_Builder(android::app::Person arg0);
		
		// Methods
		android::view::textclassifier::ConversationActions_Message build();
		android::view::textclassifier::ConversationActions_Message_Builder setExtras(android::os::Bundle arg0);
		android::view::textclassifier::ConversationActions_Message_Builder setReferenceTime(java::time::ZonedDateTime arg0);
		android::view::textclassifier::ConversationActions_Message_Builder setText(jstring arg0);
	};
} // namespace android::view::textclassifier

