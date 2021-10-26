#pragma once

#ifndef ANDROID_MEDIA_SESSION_MEDIACONTROLLER_TRANSPORTCONTROLS
#define ANDROID_MEDIA_SESSION_MEDIACONTROLLER_TRANSPORTCONTROLS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::session
{
	class MediaController;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::media
{
	class Rating;
}
namespace __jni_impl::android::media::session
{
	class PlaybackState_CustomAction;
}

namespace __jni_impl::android::media::session
{
	class MediaController_TransportControls : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void stop();
		void prepare();
		void rewind();
		void play();
		void prepareFromMediaId(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void prepareFromMediaId(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void prepareFromSearch(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void prepareFromSearch(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void prepareFromUri(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1);
		void playFromMediaId(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void playFromMediaId(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void playFromSearch(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void playFromSearch(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void playFromUri(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1);
		void skipToQueueItem(jlong arg0);
		void fastForward();
		void skipToNext();
		void skipToPrevious();
		void setRating(__jni_impl::android::media::Rating arg0);
		void setPlaybackSpeed(jfloat arg0);
		void sendCustomAction(__jni_impl::android::media::session::PlaybackState_CustomAction arg0, __jni_impl::android::os::Bundle arg1);
		void sendCustomAction(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void sendCustomAction(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void pause();
		void seekTo(jlong arg0);
	};
} // namespace __jni_impl::android::media::session

#include "MediaController.hpp"
#include "../../os/Bundle.hpp"
#include "../../net/Uri.hpp"
#include "../Rating.hpp"
#include "PlaybackState_CustomAction.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	
	// Constructors
	void MediaController_TransportControls::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaController$TransportControls",
			"(V)V");
	}
	
	// Methods
	void MediaController_TransportControls::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void MediaController_TransportControls::prepare()
	{
		__thiz.callMethod<void>(
			"prepare",
			"()V"
		);
	}
	void MediaController_TransportControls::rewind()
	{
		__thiz.callMethod<void>(
			"rewind",
			"()V"
		);
	}
	void MediaController_TransportControls::play()
	{
		__thiz.callMethod<void>(
			"play",
			"()V"
		);
	}
	void MediaController_TransportControls::prepareFromMediaId(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"prepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::prepareFromMediaId(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"prepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::prepareFromSearch(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"prepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::prepareFromSearch(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"prepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::prepareFromUri(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"prepareFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::playFromMediaId(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"playFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::playFromMediaId(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"playFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::playFromSearch(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"playFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::playFromSearch(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"playFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::playFromUri(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"playFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::skipToQueueItem(jlong arg0)
	{
		__thiz.callMethod<void>(
			"skipToQueueItem",
			"(J)V",
			arg0
		);
	}
	void MediaController_TransportControls::fastForward()
	{
		__thiz.callMethod<void>(
			"fastForward",
			"()V"
		);
	}
	void MediaController_TransportControls::skipToNext()
	{
		__thiz.callMethod<void>(
			"skipToNext",
			"()V"
		);
	}
	void MediaController_TransportControls::skipToPrevious()
	{
		__thiz.callMethod<void>(
			"skipToPrevious",
			"()V"
		);
	}
	void MediaController_TransportControls::setRating(__jni_impl::android::media::Rating arg0)
	{
		__thiz.callMethod<void>(
			"setRating",
			"(Landroid/media/Rating;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController_TransportControls::setPlaybackSpeed(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackSpeed",
			"(F)V",
			arg0
		);
	}
	void MediaController_TransportControls::sendCustomAction(__jni_impl::android::media::session::PlaybackState_CustomAction arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendCustomAction",
			"(Landroid/media/session/PlaybackState$CustomAction;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::sendCustomAction(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::sendCustomAction(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V"
		);
	}
	void MediaController_TransportControls::seekTo(jlong arg0)
	{
		__thiz.callMethod<void>(
			"seekTo",
			"(J)V",
			arg0
		);
	}
} // namespace __jni_impl::android::media::session

namespace android::media::session
{
	class MediaController_TransportControls : public __jni_impl::android::media::session::MediaController_TransportControls
	{
	public:
		MediaController_TransportControls(QAndroidJniObject obj) { __thiz = obj; }
		MediaController_TransportControls()
		{
			__constructor();
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_MEDIACONTROLLER_TRANSPORTCONTROLS

