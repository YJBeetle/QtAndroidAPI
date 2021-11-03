#pragma once

#include "../../JObject.hpp"

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
	class Notification_BubbleMetadata_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_BubbleMetadata_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_BubbleMetadata_Builder(QAndroidJniObject obj);
		
		// Constructors
		Notification_BubbleMetadata_Builder();
		
		// Methods
		android::app::Notification_BubbleMetadata build() const;
		android::app::Notification_BubbleMetadata_Builder setAutoExpandBubble(jboolean arg0) const;
		android::app::Notification_BubbleMetadata_Builder setDeleteIntent(android::app::PendingIntent arg0) const;
		android::app::Notification_BubbleMetadata_Builder setDesiredHeight(jint arg0) const;
		android::app::Notification_BubbleMetadata_Builder setDesiredHeightResId(jint arg0) const;
		android::app::Notification_BubbleMetadata_Builder setIcon(android::graphics::drawable::Icon arg0) const;
		android::app::Notification_BubbleMetadata_Builder setIntent(android::app::PendingIntent arg0) const;
		android::app::Notification_BubbleMetadata_Builder setSuppressNotification(jboolean arg0) const;
	};
} // namespace android::app

