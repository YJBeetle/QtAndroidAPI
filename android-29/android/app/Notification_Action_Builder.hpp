#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::app
{
	class Notification_Action_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_Action_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_Action_Builder(QAndroidJniObject obj);
		
		// Constructors
		Notification_Action_Builder(android::app::Notification_Action arg0);
		Notification_Action_Builder(android::graphics::drawable::Icon arg0, JString arg1, android::app::PendingIntent arg2);
		Notification_Action_Builder(jint arg0, JString arg1, android::app::PendingIntent arg2);
		
		// Methods
		android::app::Notification_Action_Builder addExtras(android::os::Bundle arg0);
		android::app::Notification_Action_Builder addRemoteInput(android::app::RemoteInput arg0);
		android::app::Notification_Action build();
		android::app::Notification_Action_Builder extend(JObject arg0);
		android::os::Bundle getExtras();
		android::app::Notification_Action_Builder setAllowGeneratedReplies(jboolean arg0);
		android::app::Notification_Action_Builder setContextual(jboolean arg0);
		android::app::Notification_Action_Builder setSemanticAction(jint arg0);
	};
} // namespace android::app

