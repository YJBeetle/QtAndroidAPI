#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Notification_Style.hpp"

namespace __jni_impl::android::app
{
	class Notification_Builder;
}
namespace __jni_impl::android::media::session
{
	class MediaSession_Token;
}

namespace __jni_impl::android::app
{
	class Notification_MediaStyle : public __jni_impl::android::app::Notification_Style
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::app::Notification_Builder arg0);
		
		// Methods
		QAndroidJniObject setMediaSession(__jni_impl::android::media::session::MediaSession_Token arg0);
		QAndroidJniObject setShowActionsInCompactView(jintArray arg0);
	};
} // namespace __jni_impl::android::app

#include "./Notification_Builder.hpp"
#include "../media/session/MediaSession_Token.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_MediaStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MediaStyle",
			"()V"
		);
	}
	void Notification_MediaStyle::__constructor(__jni_impl::android::app::Notification_Builder arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$MediaStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Notification_MediaStyle::setMediaSession(__jni_impl::android::media::session::MediaSession_Token arg0)
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
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_MediaStyle : public __jni_impl::android::app::Notification_MediaStyle
	{
	public:
		Notification_MediaStyle(QAndroidJniObject obj) { __thiz = obj; }
		Notification_MediaStyle()
		{
			__constructor();
		}
		Notification_MediaStyle(__jni_impl::android::app::Notification_Builder arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

