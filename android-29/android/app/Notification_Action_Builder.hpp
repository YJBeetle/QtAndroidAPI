#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Notification_Action;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::app
{
	class RemoteInput;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class Notification_Action_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		Notification_Action_Builder(QAndroidJniObject obj);
		// Constructors
		Notification_Action_Builder(android::app::Notification_Action &arg0);
		Notification_Action_Builder(android::graphics::drawable::Icon &arg0, jstring &arg1, android::app::PendingIntent &arg2);
		Notification_Action_Builder(android::graphics::drawable::Icon &arg0, const QString &arg1, android::app::PendingIntent &arg2);
		Notification_Action_Builder(jint &arg0, jstring &arg1, android::app::PendingIntent &arg2);
		Notification_Action_Builder(jint &arg0, const QString &arg1, android::app::PendingIntent &arg2);
		Notification_Action_Builder() = default;
		
		// Methods
		QAndroidJniObject addExtras(android::os::Bundle arg0);
		QAndroidJniObject addRemoteInput(android::app::RemoteInput arg0);
		QAndroidJniObject build();
		QAndroidJniObject extend(__JniBaseClass arg0);
		QAndroidJniObject getExtras();
		QAndroidJniObject setAllowGeneratedReplies(jboolean arg0);
		QAndroidJniObject setContextual(jboolean arg0);
		QAndroidJniObject setSemanticAction(jint arg0);
	};
} // namespace android::app

