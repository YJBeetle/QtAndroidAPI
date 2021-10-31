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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConversationAction_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConversationAction_Builder(QAndroidJniObject obj);
		
		// Constructors
		ConversationAction_Builder(jstring arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAction(android::app::RemoteAction arg0);
		QAndroidJniObject setConfidenceScore(jfloat arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setTextReply(jstring arg0);
	};
} // namespace android::view::textclassifier

