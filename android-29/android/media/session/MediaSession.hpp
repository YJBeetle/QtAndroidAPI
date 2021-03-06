#pragma once

#ifndef ANDROID_MEDIA_SESSION_MEDIASESSION
#define ANDROID_MEDIA_SESSION_MEDIASESSION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}
namespace __jni_impl::android::media
{
	class VolumeProvider;
}
namespace __jni_impl::android::media::session
{
	class MediaController;
}
namespace __jni_impl::android::media
{
	class MediaMetadata;
}
namespace __jni_impl::android::media::session
{
	class MediaSessionManager_RemoteUserInfo;
}
namespace __jni_impl::android::media::session
{
	class PlaybackState;
}
namespace __jni_impl::android::media::session
{
	class MediaSession_Callback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::media::session
{
	class MediaSession_Token;
}

namespace __jni_impl::android::media::session
{
	class MediaSession : public __JniBaseClass
	{
	public:
		// Fields
		static jint FLAG_HANDLES_MEDIA_BUTTONS();
		static jint FLAG_HANDLES_TRANSPORT_CONTROLS();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jstring arg1);
		void __constructor(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		
		// Methods
		void release();
		jboolean isActive();
		void setSessionActivity(__jni_impl::android::app::PendingIntent arg0);
		void setMediaButtonReceiver(__jni_impl::android::app::PendingIntent arg0);
		void setPlaybackToLocal(__jni_impl::android::media::AudioAttributes arg0);
		void setPlaybackToRemote(__jni_impl::android::media::VolumeProvider arg0);
		void sendSessionEvent(jstring arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject getController();
		void setMetadata(__jni_impl::android::media::MediaMetadata arg0);
		void setQueue(__jni_impl::__JniBaseClass arg0);
		void setQueueTitle(jstring arg0);
		void setRatingType(jint arg0);
		QAndroidJniObject getCurrentControllerInfo();
		void setPlaybackState(__jni_impl::android::media::session::PlaybackState arg0);
		void setFlags(jint arg0);
		void setCallback(__jni_impl::android::media::session::MediaSession_Callback arg0, __jni_impl::android::os::Handler arg1);
		void setCallback(__jni_impl::android::media::session::MediaSession_Callback arg0);
		QAndroidJniObject getSessionToken();
		void setActive(jboolean arg0);
		void setExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::media::session

#include "../../content/Context.hpp"
#include "../../os/Bundle.hpp"
#include "../../app/PendingIntent.hpp"
#include "../AudioAttributes.hpp"
#include "../VolumeProvider.hpp"
#include "MediaController.hpp"
#include "../MediaMetadata.hpp"
#include "MediaSessionManager_RemoteUserInfo.hpp"
#include "PlaybackState.hpp"
#include "MediaSession_Callback.hpp"
#include "../../os/Handler.hpp"
#include "MediaSession_Token.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	jint MediaSession::FLAG_HANDLES_MEDIA_BUTTONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.MediaSession",
			"FLAG_HANDLES_MEDIA_BUTTONS"
		);
	}
	jint MediaSession::FLAG_HANDLES_TRANSPORT_CONTROLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.MediaSession",
			"FLAG_HANDLES_TRANSPORT_CONTROLS"
		);
	}
	
	// Constructors
	void MediaSession::__constructor(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaSession",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void MediaSession::__constructor(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaSession",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	void MediaSession::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jboolean MediaSession::isActive()
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	void MediaSession::setSessionActivity(__jni_impl::android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"setSessionActivity",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSession::setMediaButtonReceiver(__jni_impl::android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"setMediaButtonReceiver",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSession::setPlaybackToLocal(__jni_impl::android::media::AudioAttributes arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackToLocal",
			"(Landroid/media/AudioAttributes;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSession::setPlaybackToRemote(__jni_impl::android::media::VolumeProvider arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackToRemote",
			"(Landroid/media/VolumeProvider;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSession::sendSessionEvent(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendSessionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaSession::getController()
	{
		return __thiz.callObjectMethod(
			"getController",
			"()Landroid/media/session/MediaController;"
		);
	}
	void MediaSession::setMetadata(__jni_impl::android::media::MediaMetadata arg0)
	{
		__thiz.callMethod<void>(
			"setMetadata",
			"(Landroid/media/MediaMetadata;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSession::setQueue(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setQueue",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSession::setQueueTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setQueueTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MediaSession::setRatingType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRatingType",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject MediaSession::getCurrentControllerInfo()
	{
		return __thiz.callObjectMethod(
			"getCurrentControllerInfo",
			"()Landroid/media/session/MediaSessionManager$RemoteUserInfo;"
		);
	}
	void MediaSession::setPlaybackState(__jni_impl::android::media::session::PlaybackState arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackState",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSession::setFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFlags",
			"(I)V",
			arg0
		);
	}
	void MediaSession::setCallback(__jni_impl::android::media::session::MediaSession_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setCallback",
			"(Landroid/media/session/MediaSession$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession::setCallback(__jni_impl::android::media::session::MediaSession_Callback arg0)
	{
		__thiz.callMethod<void>(
			"setCallback",
			"(Landroid/media/session/MediaSession$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaSession::getSessionToken()
	{
		return __thiz.callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	void MediaSession::setActive(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setActive",
			"(Z)V",
			arg0
		);
	}
	void MediaSession::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::session

namespace android::media::session
{
	class MediaSession : public __jni_impl::android::media::session::MediaSession
	{
	public:
		MediaSession(QAndroidJniObject obj) { __thiz = obj; }
		MediaSession(__jni_impl::android::content::Context arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		MediaSession(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_MEDIASESSION

