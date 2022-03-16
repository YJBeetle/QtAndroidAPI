#include "../../JIntArray.hpp"
#include "./Notification_Builder.hpp"
#include "../media/session/MediaSession_Token.hpp"
#include "./Notification_MediaStyle.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	Notification_MediaStyle::Notification_MediaStyle()
		: android::app::Notification_Style(
			"android.app.Notification$MediaStyle",
			"()V"
		) {}
	Notification_MediaStyle::Notification_MediaStyle(android::app::Notification_Builder arg0)
		: android::app::Notification_Style(
			"android.app.Notification$MediaStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.object()
		) {}
	
	// Methods
	android::app::Notification_MediaStyle Notification_MediaStyle::setMediaSession(android::media::session::MediaSession_Token arg0) const
	{
		return callObjectMethod(
			"setMediaSession",
			"(Landroid/media/session/MediaSession$Token;)Landroid/app/Notification$MediaStyle;",
			arg0.object()
		);
	}
	android::app::Notification_MediaStyle Notification_MediaStyle::setShowActionsInCompactView(JIntArray arg0) const
	{
		return callObjectMethod(
			"setShowActionsInCompactView",
			"([I)Landroid/app/Notification$MediaStyle;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::app

