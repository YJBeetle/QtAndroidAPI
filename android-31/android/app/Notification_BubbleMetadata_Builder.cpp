#include "./Notification_BubbleMetadata.hpp"
#include "./PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "./Notification_BubbleMetadata_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Notification_BubbleMetadata_Builder::Notification_BubbleMetadata_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Notification_BubbleMetadata_Builder::Notification_BubbleMetadata_Builder()
		: __JniBaseClass(
			"android.app.Notification$BubbleMetadata$Builder",
			"()V"
		) {}
	Notification_BubbleMetadata_Builder::Notification_BubbleMetadata_Builder(jstring arg0)
		: __JniBaseClass(
			"android.app.Notification$BubbleMetadata$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Notification_BubbleMetadata_Builder::Notification_BubbleMetadata_Builder(android::app::PendingIntent arg0, android::graphics::drawable::Icon arg1)
		: __JniBaseClass(
			"android.app.Notification$BubbleMetadata$Builder",
			"(Landroid/app/PendingIntent;Landroid/graphics/drawable/Icon;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::app::Notification_BubbleMetadata Notification_BubbleMetadata_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Notification$BubbleMetadata;"
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setAutoExpandBubble(jboolean arg0)
	{
		return callObjectMethod(
			"setAutoExpandBubble",
			"(Z)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setDeleteIntent(android::app::PendingIntent arg0)
	{
		return callObjectMethod(
			"setDeleteIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setDesiredHeight(jint arg0)
	{
		return callObjectMethod(
			"setDesiredHeight",
			"(I)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setDesiredHeightResId(jint arg0)
	{
		return callObjectMethod(
			"setDesiredHeightResId",
			"(I)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setIcon(android::graphics::drawable::Icon arg0)
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setIntent(android::app::PendingIntent arg0)
	{
		return callObjectMethod(
			"setIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setSuppressNotification(jboolean arg0)
	{
		return callObjectMethod(
			"setSuppressNotification",
			"(Z)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setSuppressableBubble(jboolean arg0)
	{
		return callObjectMethod(
			"setSuppressableBubble",
			"(Z)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
} // namespace android::app

