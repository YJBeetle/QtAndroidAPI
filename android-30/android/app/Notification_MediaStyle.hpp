#pragma once

#include "../../JIntArray.hpp"
#include "./Notification_Builder.def.hpp"
#include "../media/session/MediaSession_Token.def.hpp"
#include "./Notification_MediaStyle.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Notification_MediaStyle::Notification_MediaStyle()
		: android::app::Notification_Style(
			"android.app.Notification$MediaStyle",
			"()V"
		) {}
	inline Notification_MediaStyle::Notification_MediaStyle(android::app::Notification_Builder arg0)
		: android::app::Notification_Style(
			"android.app.Notification$MediaStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::app::Notification_MediaStyle Notification_MediaStyle::setMediaSession(android::media::session::MediaSession_Token arg0) const
	{
		return callObjectMethod(
			"setMediaSession",
			"(Landroid/media/session/MediaSession$Token;)Landroid/app/Notification$MediaStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_MediaStyle Notification_MediaStyle::setShowActionsInCompactView(JIntArray arg0) const
	{
		return callObjectMethod(
			"setShowActionsInCompactView",
			"([I)Landroid/app/Notification$MediaStyle;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::app

// Base class headers
#include "./Notification_Style.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
