#pragma once

#ifndef ANDROID_MEDIA_SESSION_MEDIASESSION_CALLBACK
#define ANDROID_MEDIA_SESSION_MEDIASESSION_CALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
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
namespace __jni_impl::android::os
{
	class ResultReceiver;
}

namespace __jni_impl::android::media::session
{
	class MediaSession_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean onMediaButtonEvent(__jni_impl::android::content::Intent arg0);
		void onPrepare();
		void onPrepareFromMediaId(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void onPrepareFromMediaId(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void onPrepareFromSearch(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void onPrepareFromSearch(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void onPrepareFromUri(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1);
		void onPlay();
		void onPlayFromSearch(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void onPlayFromSearch(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void onPlayFromMediaId(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void onPlayFromMediaId(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void onPlayFromUri(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1);
		void onSkipToQueueItem(jlong arg0);
		void onSkipToNext();
		void onSkipToPrevious();
		void onFastForward();
		void onRewind();
		void onSeekTo(jlong arg0);
		void onSetRating(__jni_impl::android::media::Rating arg0);
		void onSetPlaybackSpeed(jfloat arg0);
		void onCustomAction(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void onCustomAction(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void onCommand(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::ResultReceiver arg2);
		void onCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::ResultReceiver arg2);
		void onPause();
		void onStop();
	};
} // namespace __jni_impl::android::media::session

#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"
#include "../../net/Uri.hpp"
#include "../Rating.hpp"
#include "../../os/ResultReceiver.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	
	// Constructors
	void MediaSession_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaSession$Callback",
			"()V"
		);
	}
	
	// Methods
	jboolean MediaSession_Callback::onMediaButtonEvent(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onMediaButtonEvent",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPrepare()
	{
		__thiz.callMethod<void>(
			"onPrepare",
			"()V"
		);
	}
	void MediaSession_Callback::onPrepareFromMediaId(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPrepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPrepareFromMediaId(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPrepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPrepareFromSearch(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPrepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPrepareFromSearch(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPrepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPrepareFromUri(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPrepareFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPlay()
	{
		__thiz.callMethod<void>(
			"onPlay",
			"()V"
		);
	}
	void MediaSession_Callback::onPlayFromSearch(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPlayFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPlayFromSearch(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPlayFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPlayFromMediaId(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPlayFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPlayFromMediaId(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPlayFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPlayFromUri(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPlayFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onSkipToQueueItem(jlong arg0)
	{
		__thiz.callMethod<void>(
			"onSkipToQueueItem",
			"(J)V",
			arg0
		);
	}
	void MediaSession_Callback::onSkipToNext()
	{
		__thiz.callMethod<void>(
			"onSkipToNext",
			"()V"
		);
	}
	void MediaSession_Callback::onSkipToPrevious()
	{
		__thiz.callMethod<void>(
			"onSkipToPrevious",
			"()V"
		);
	}
	void MediaSession_Callback::onFastForward()
	{
		__thiz.callMethod<void>(
			"onFastForward",
			"()V"
		);
	}
	void MediaSession_Callback::onRewind()
	{
		__thiz.callMethod<void>(
			"onRewind",
			"()V"
		);
	}
	void MediaSession_Callback::onSeekTo(jlong arg0)
	{
		__thiz.callMethod<void>(
			"onSeekTo",
			"(J)V",
			arg0
		);
	}
	void MediaSession_Callback::onSetRating(__jni_impl::android::media::Rating arg0)
	{
		__thiz.callMethod<void>(
			"onSetRating",
			"(Landroid/media/Rating;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSession_Callback::onSetPlaybackSpeed(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"onSetPlaybackSpeed",
			"(F)V",
			arg0
		);
	}
	void MediaSession_Callback::onCustomAction(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onCustomAction(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onCommand(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::ResultReceiver arg2)
	{
		__thiz.callMethod<void>(
			"onCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaSession_Callback::onCommand(const QString &arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::ResultReceiver arg2)
	{
		__thiz.callMethod<void>(
			"onCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPause()
	{
		__thiz.callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void MediaSession_Callback::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace __jni_impl::android::media::session

namespace android::media::session
{
	class MediaSession_Callback : public __jni_impl::android::media::session::MediaSession_Callback
	{
	public:
		MediaSession_Callback(QAndroidJniObject obj) { __thiz = obj; }
		MediaSession_Callback()
		{
			__constructor();
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_MEDIASESSION_CALLBACK

