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
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationActions_Message_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConversationActions_Message_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ConversationActions_Message_Builder(android::app::Person arg0);
		
		// Methods
		android::view::textclassifier::ConversationActions_Message build() const;
		android::view::textclassifier::ConversationActions_Message_Builder setExtras(android::os::Bundle arg0) const;
		android::view::textclassifier::ConversationActions_Message_Builder setReferenceTime(java::time::ZonedDateTime arg0) const;
		android::view::textclassifier::ConversationActions_Message_Builder setText(JString arg0) const;
	};
} // namespace android::view::textclassifier

