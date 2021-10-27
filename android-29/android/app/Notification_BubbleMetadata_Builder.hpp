#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Notification_BubbleMetadata;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::graphics::drawable
{
	class Icon;
}

namespace android::app
{
	class Notification_BubbleMetadata_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		Notification_BubbleMetadata_Builder(QAndroidJniObject obj);
		// Constructors
		Notification_BubbleMetadata_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAutoExpandBubble(jboolean arg0);
		QAndroidJniObject setDeleteIntent(android::app::PendingIntent arg0);
		QAndroidJniObject setDesiredHeight(jint arg0);
		QAndroidJniObject setDesiredHeightResId(jint arg0);
		QAndroidJniObject setIcon(android::graphics::drawable::Icon arg0);
		QAndroidJniObject setIntent(android::app::PendingIntent arg0);
		QAndroidJniObject setSuppressNotification(jboolean arg0);
	};
} // namespace android::app

