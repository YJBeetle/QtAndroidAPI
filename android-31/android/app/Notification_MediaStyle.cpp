#include "./Notification_Builder.hpp"
#include "../media/session/MediaSession_Token.hpp"
#include "./Notification_MediaStyle.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_MediaStyle::Notification_MediaStyle(QJniObject obj) : android::app::Notification_Style(obj) {}
	
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
	android::app::Notification_MediaStyle Notification_MediaStyle::setMediaSession(android::media::session::MediaSession_Token arg0)
	{
		return callObjectMethod(
			"setMediaSession",
			"(Landroid/media/session/MediaSession$Token;)Landroid/app/Notification$MediaStyle;",
			arg0.object()
		);
	}
	android::app::Notification_MediaStyle Notification_MediaStyle::setShowActionsInCompactView(jintArray arg0)
	{
		return callObjectMethod(
			"setShowActionsInCompactView",
			"([I)Landroid/app/Notification$MediaStyle;",
			arg0
		);
	}
} // namespace android::app

