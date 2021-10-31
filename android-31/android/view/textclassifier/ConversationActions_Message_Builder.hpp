#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ConversationActions_Message_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationActions_Message_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions_Message_Builder(QAndroidJniObject obj);
		
		// Constructors
		ConversationActions_Message_Builder(android::app::Person arg0);
		
		// Methods
		android::view::textclassifier::ConversationActions_Message build();
		android::view::textclassifier::ConversationActions_Message_Builder setExtras(android::os::Bundle arg0);
		android::view::textclassifier::ConversationActions_Message_Builder setReferenceTime(java::time::ZonedDateTime arg0);
		android::view::textclassifier::ConversationActions_Message_Builder setText(jstring arg0);
	};
} // namespace android::view::textclassifier

