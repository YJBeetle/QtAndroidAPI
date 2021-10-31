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
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_BubbleMetadata_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Notification_BubbleMetadata_Builder(QJniObject obj);
		
		// Constructors
		Notification_BubbleMetadata_Builder();
		Notification_BubbleMetadata_Builder(jstring arg0);
		Notification_BubbleMetadata_Builder(android::app::PendingIntent arg0, android::graphics::drawable::Icon arg1);
		
		// Methods
		android::app::Notification_BubbleMetadata build();
		android::app::Notification_BubbleMetadata_Builder setAutoExpandBubble(jboolean arg0);
		android::app::Notification_BubbleMetadata_Builder setDeleteIntent(android::app::PendingIntent arg0);
		android::app::Notification_BubbleMetadata_Builder setDesiredHeight(jint arg0);
		android::app::Notification_BubbleMetadata_Builder setDesiredHeightResId(jint arg0);
		android::app::Notification_BubbleMetadata_Builder setIcon(android::graphics::drawable::Icon arg0);
		android::app::Notification_BubbleMetadata_Builder setIntent(android::app::PendingIntent arg0);
		android::app::Notification_BubbleMetadata_Builder setSuppressNotification(jboolean arg0);
		android::app::Notification_BubbleMetadata_Builder setSuppressableBubble(jboolean arg0);
	};
} // namespace android::app

