#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class RemoteAction;
}
namespace android::os
{
	class Bundle;
}
namespace android::view::textclassifier
{
	class ConversationAction;
}

namespace android::view::textclassifier
{
	class ConversationAction_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		ConversationAction_Builder(QAndroidJniObject obj);
		// Constructors
		ConversationAction_Builder(jstring &arg0);
		ConversationAction_Builder(const QString &arg0);
		ConversationAction_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAction(android::app::RemoteAction arg0);
		QAndroidJniObject setConfidenceScore(jfloat arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setTextReply(jstring arg0);
		QAndroidJniObject setTextReply(const QString &arg0);
	};
} // namespace android::view::textclassifier

