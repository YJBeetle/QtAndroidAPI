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
		
		ConversationActions_Message_Builder(QAndroidJniObject obj);
		// Constructors
		ConversationActions_Message_Builder(android::app::Person &arg0);
		ConversationActions_Message_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setReferenceTime(java::time::ZonedDateTime arg0);
		QAndroidJniObject setText(jstring arg0);
		QAndroidJniObject setText(const QString &arg0);
	};
} // namespace android::view::textclassifier

