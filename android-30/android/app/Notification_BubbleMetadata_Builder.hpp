#pragma once

#include "./Notification_BubbleMetadata.def.hpp"
#include "./PendingIntent.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../../JString.hpp"
#include "./Notification_BubbleMetadata_Builder.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_BubbleMetadata_Builder::Notification_BubbleMetadata_Builder()
		: JObject(
			"android.app.Notification$BubbleMetadata$Builder",
			"()V"
		) {}
	inline Notification_BubbleMetadata_Builder::Notification_BubbleMetadata_Builder(JString arg0)
		: JObject(
			"android.app.Notification$BubbleMetadata$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Notification_BubbleMetadata_Builder::Notification_BubbleMetadata_Builder(android::app::PendingIntent arg0, android::graphics::drawable::Icon arg1)
		: JObject(
			"android.app.Notification$BubbleMetadata$Builder",
			"(Landroid/app/PendingIntent;Landroid/graphics/drawable/Icon;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::app::Notification_BubbleMetadata Notification_BubbleMetadata_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Notification$BubbleMetadata;"
		);
	}
	inline android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setAutoExpandBubble(jboolean arg0) const
	{
		return callObjectMethod(
			"setAutoExpandBubble",
			"(Z)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	inline android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setDeleteIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setDeleteIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.object()
		);
	}
	inline android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setDesiredHeight(jint arg0) const
	{
		return callObjectMethod(
			"setDesiredHeight",
			"(I)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	inline android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setDesiredHeightResId(jint arg0) const
	{
		return callObjectMethod(
			"setDesiredHeightResId",
			"(I)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	inline android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.object()
		);
	}
	inline android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.object()
		);
	}
	inline android::app::Notification_BubbleMetadata_Builder Notification_BubbleMetadata_Builder::setSuppressNotification(jboolean arg0) const
	{
		return callObjectMethod(
			"setSuppressNotification",
			"(Z)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
