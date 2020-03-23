#pragma once

#ifndef ANDROID_MEDIA_SESSION_MEDIACONTROLLER
#define ANDROID_MEDIA_SESSION_MEDIACONTROLLER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media::session
{
	class MediaSession_Token;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::media::session
{
	class MediaController_TransportControls;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::media::session
{
	class PlaybackState;
}
namespace __jni_impl::android::media
{
	class MediaMetadata;
}
namespace __jni_impl::android::media::session
{
	class MediaController_PlaybackInfo;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::os
{
	class ResultReceiver;
}
namespace __jni_impl::android::media::session
{
	class MediaController_Callback;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::media::session
{
	class MediaController : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::media::session::MediaSession_Token arg1);
		
		// Methods
		QAndroidJniObject getPackageName();
		QAndroidJniObject getQueue();
		jlong getFlags();
		QAndroidJniObject getExtras();
		QAndroidJniObject getTransportControls();
		jboolean dispatchMediaButtonEvent(__jni_impl::android::view::KeyEvent arg0);
		QAndroidJniObject getPlaybackState();
		QAndroidJniObject getMetadata();
		QAndroidJniObject getQueueTitle();
		jint getRatingType();
		QAndroidJniObject getPlaybackInfo();
		QAndroidJniObject getSessionActivity();
		void setVolumeTo(jint arg0, jint arg1);
		void adjustVolume(jint arg0, jint arg1);
		void sendCommand(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::ResultReceiver arg2);
		QAndroidJniObject getSessionInfo();
		void registerCallback(__jni_impl::android::media::session::MediaController_Callback arg0, __jni_impl::android::os::Handler arg1);
		void registerCallback(__jni_impl::android::media::session::MediaController_Callback arg0);
		void unregisterCallback(__jni_impl::android::media::session::MediaController_Callback arg0);
		QAndroidJniObject getSessionToken();
	};
} // namespace __jni_impl::android::media::session

#include "../../content/Context.hpp"
#include "MediaSession_Token.hpp"
#include "../../os/Bundle.hpp"
#include "MediaController_TransportControls.hpp"
#include "../../view/KeyEvent.hpp"
#include "PlaybackState.hpp"
#include "../MediaMetadata.hpp"
#include "MediaController_PlaybackInfo.hpp"
#include "../../app/PendingIntent.hpp"
#include "../../os/ResultReceiver.hpp"
#include "MediaController_Callback.hpp"
#include "../../os/Handler.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	
	// Constructors
	void MediaController::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::media::session::MediaSession_Token arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaController",
			"(Landroid/content/Context;Landroid/media/session/MediaSession$Token;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject MediaController::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MediaController::getQueue()
	{
		return __thiz.callObjectMethod(
			"getQueue",
			"()Ljava/util/List;");
	}
	jlong MediaController::getFlags()
	{
		return __thiz.callMethod<jlong>(
			"getFlags",
			"()J");
	}
	QAndroidJniObject MediaController::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject MediaController::getTransportControls()
	{
		return __thiz.callObjectMethod(
			"getTransportControls",
			"()Landroid/media/session/MediaController$TransportControls;");
	}
	jboolean MediaController::dispatchMediaButtonEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchMediaButtonEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaController::getPlaybackState()
	{
		return __thiz.callObjectMethod(
			"getPlaybackState",
			"()Landroid/media/session/PlaybackState;");
	}
	QAndroidJniObject MediaController::getMetadata()
	{
		return __thiz.callObjectMethod(
			"getMetadata",
			"()Landroid/media/MediaMetadata;");
	}
	QAndroidJniObject MediaController::getQueueTitle()
	{
		return __thiz.callObjectMethod(
			"getQueueTitle",
			"()Ljava/lang/CharSequence;");
	}
	jint MediaController::getRatingType()
	{
		return __thiz.callMethod<jint>(
			"getRatingType",
			"()I");
	}
	QAndroidJniObject MediaController::getPlaybackInfo()
	{
		return __thiz.callObjectMethod(
			"getPlaybackInfo",
			"()Landroid/media/session/MediaController$PlaybackInfo;");
	}
	QAndroidJniObject MediaController::getSessionActivity()
	{
		return __thiz.callObjectMethod(
			"getSessionActivity",
			"()Landroid/app/PendingIntent;");
	}
	void MediaController::setVolumeTo(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setVolumeTo",
			"(II)V",
			arg0,
			arg1);
	}
	void MediaController::adjustVolume(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"adjustVolume",
			"(II)V",
			arg0,
			arg1);
	}
	void MediaController::sendCommand(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::ResultReceiver arg2)
	{
		__thiz.callMethod<void>(
			"sendCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject MediaController::getSessionInfo()
	{
		return __thiz.callObjectMethod(
			"getSessionInfo",
			"()Landroid/os/Bundle;");
	}
	void MediaController::registerCallback(__jni_impl::android::media::session::MediaController_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/media/session/MediaController$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaController::registerCallback(__jni_impl::android::media::session::MediaController_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/media/session/MediaController$Callback;)V",
			arg0.__jniObject().object());
	}
	void MediaController::unregisterCallback(__jni_impl::android::media::session::MediaController_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/session/MediaController$Callback;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaController::getSessionToken()
	{
		return __thiz.callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;");
	}
} // namespace __jni_impl::android::media::session

namespace android::media::session
{
	class MediaController : public __jni_impl::android::media::session::MediaController
	{
	public:
		MediaController(QAndroidJniObject obj) { __thiz = obj; }
		MediaController(__jni_impl::android::content::Context arg0, __jni_impl::android::media::session::MediaSession_Token arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_MEDIACONTROLLER

