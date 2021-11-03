#include "./Notification_BubbleMetadata.hpp"
#include "./PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "./Notification_BubbleMetadata_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Notification_BubbleMetadata_Builder::Notification_BubbleMetadata_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Notification_BubbleMetadata_Builder::Notification_BubbleMetadata_Builder()
		: JObject(
			"android.app.Notification$BubbleMetadata$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::Notification_BubbleMetadata Notification_BubbleMetadata_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Notification$BubbleMetadata;"
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setAutoExpandBubble(jboolean arg0) const
	{
		return callObjectMethod(
			"setAutoExpandBubble",
			"(Z)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setDeleteIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setDeleteIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setDesiredHeight(jint arg0) const
	{
		return callObjectMethod(
			"setDesiredHeight",
			"(I)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setDesiredHeightResId(jint arg0) const
	{
		return callObjectMethod(
			"setDesiredHeightResId",
			"(I)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setSuppressNotification(jboolean arg0) const
	{
		return callObjectMethod(
			"setSuppressNotification",
			"(Z)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
} // namespace android::app

