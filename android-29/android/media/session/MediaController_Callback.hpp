#pragma once

#ifndef ANDROID_MEDIA_SESSION_MEDIACONTROLLER_CALLBACK
#define ANDROID_MEDIA_SESSION_MEDIACONTROLLER_CALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
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

namespace __jni_impl::android::media::session
{
	class MediaController_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onExtrasChanged(__jni_impl::android::os::Bundle arg0);
		void onSessionDestroyed();
		void onSessionEvent(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void onSessionEvent(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void onPlaybackStateChanged(__jni_impl::android::media::session::PlaybackState arg0);
		void onMetadataChanged(__jni_impl::android::media::MediaMetadata arg0);
		void onQueueChanged(__jni_impl::__JniBaseClass arg0);
		void onQueueTitleChanged(jstring arg0);
		void onQueueTitleChanged(const QString &arg0);
		void onAudioInfoChanged(__jni_impl::android::media::session::MediaController_PlaybackInfo arg0);
	};
} // namespace __jni_impl::android::media::session

#include "../../os/Bundle.hpp"
#include "PlaybackState.hpp"
#include "../MediaMetadata.hpp"
#include "MediaController_PlaybackInfo.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	
	// Constructors
	void MediaController_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaController$Callback",
			"()V"
		);
	}
	
	// Methods
	void MediaController_Callback::onExtrasChanged(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController_Callback::onSessionDestroyed()
	{
		__thiz.callMethod<void>(
			"onSessionDestroyed",
			"()V"
		);
	}
	void MediaController_Callback::onSessionEvent(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onSessionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaController_Callback::onSessionEvent(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onSessionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_Callback::onPlaybackStateChanged(__jni_impl::android::media::session::PlaybackState arg0)
	{
		__thiz.callMethod<void>(
			"onPlaybackStateChanged",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController_Callback::onMetadataChanged(__jni_impl::android::media::MediaMetadata arg0)
	{
		__thiz.callMethod<void>(
			"onMetadataChanged",
			"(Landroid/media/MediaMetadata;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController_Callback::onQueueChanged(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onQueueChanged",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController_Callback::onQueueTitleChanged(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onQueueTitleChanged",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MediaController_Callback::onQueueTitleChanged(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onQueueTitleChanged",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaController_Callback::onAudioInfoChanged(__jni_impl::android::media::session::MediaController_PlaybackInfo arg0)
	{
		__thiz.callMethod<void>(
			"onAudioInfoChanged",
			"(Landroid/media/session/MediaController$PlaybackInfo;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::session

namespace android::media::session
{
	class MediaController_Callback : public __jni_impl::android::media::session::MediaController_Callback
	{
	public:
		MediaController_Callback(QAndroidJniObject obj) { __thiz = obj; }
		MediaController_Callback()
		{
			__constructor();
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_MEDIACONTROLLER_CALLBACK

