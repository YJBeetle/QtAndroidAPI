#include "./Notification_Builder.hpp"
#include "../media/session/MediaSession_Token.hpp"
#include "./Notification_MediaStyle.hpp"

namespace android::app
{
	// Fields
	
	Notification_MediaStyle::Notification_MediaStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_MediaStyle::Notification_MediaStyle()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MediaStyle",
			"()V"
		);
	}
	Notification_MediaStyle::Notification_MediaStyle(android::app::Notification_Builder &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MediaStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Notification_MediaStyle::setMediaSession(android::media::session::MediaSession_Token arg0)
	{
		return __thiz.callObjectMethod(
			"setMediaSession",
			"(Landroid/media/session/MediaSession$Token;)Landroid/app/Notification$MediaStyle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_MediaStyle::setShowActionsInCompactView(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"setShowActionsInCompactView",
			"([I)Landroid/app/Notification$MediaStyle;",
			arg0
		);
	}
} // namespace android::app

