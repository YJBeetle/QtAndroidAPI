#pragma once

#ifndef ANDROID_MEDIA_MEDIASESSION2_SESSIONCALLBACK
#define ANDROID_MEDIA_MEDIASESSION2_SESSIONCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaSession2;
}
namespace __jni_impl::android::media
{
	class MediaSession2_ControllerInfo;
}
namespace __jni_impl::android::media
{
	class Session2Command;
}
namespace __jni_impl::android::media
{
	class Session2Command_Result;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::media
{
	class Session2CommandGroup;
}

namespace __jni_impl::android::media
{
	class MediaSession2_SessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onDisconnected(__jni_impl::android::media::MediaSession2 arg0, __jni_impl::android::media::MediaSession2_ControllerInfo arg1);
		void onCommandResult(__jni_impl::android::media::MediaSession2 arg0, __jni_impl::android::media::MediaSession2_ControllerInfo arg1, jobject arg2, __jni_impl::android::media::Session2Command arg3, __jni_impl::android::media::Session2Command_Result arg4);
		void onPostConnect(__jni_impl::android::media::MediaSession2 arg0, __jni_impl::android::media::MediaSession2_ControllerInfo arg1);
		QAndroidJniObject onSessionCommand(__jni_impl::android::media::MediaSession2 arg0, __jni_impl::android::media::MediaSession2_ControllerInfo arg1, __jni_impl::android::media::Session2Command arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject onConnect(__jni_impl::android::media::MediaSession2 arg0, __jni_impl::android::media::MediaSession2_ControllerInfo arg1);
	};
} // namespace __jni_impl::android::media

#include "MediaSession2.hpp"
#include "MediaSession2_ControllerInfo.hpp"
#include "Session2Command.hpp"
#include "Session2Command_Result.hpp"
#include "../os/Bundle.hpp"
#include "Session2CommandGroup.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaSession2_SessionCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSession2$SessionCallback",
			"()V");
	}
	
	// Methods
	void MediaSession2_SessionCallback::onDisconnected(__jni_impl::android::media::MediaSession2 arg0, __jni_impl::android::media::MediaSession2_ControllerInfo arg1)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession2_SessionCallback::onCommandResult(__jni_impl::android::media::MediaSession2 arg0, __jni_impl::android::media::MediaSession2_ControllerInfo arg1, jobject arg2, __jni_impl::android::media::Session2Command arg3, __jni_impl::android::media::Session2Command_Result arg4)
	{
		__thiz.callMethod<void>(
			"onCommandResult",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;Ljava/lang/Object;Landroid/media/Session2Command;Landroid/media/Session2Command$Result;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void MediaSession2_SessionCallback::onPostConnect(__jni_impl::android::media::MediaSession2 arg0, __jni_impl::android::media::MediaSession2_ControllerInfo arg1)
	{
		__thiz.callMethod<void>(
			"onPostConnect",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaSession2_SessionCallback::onSessionCommand(__jni_impl::android::media::MediaSession2 arg0, __jni_impl::android::media::MediaSession2_ControllerInfo arg1, __jni_impl::android::media::Session2Command arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"onSessionCommand",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;Landroid/media/Session2Command;Landroid/os/Bundle;)Landroid/media/Session2Command$Result;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject MediaSession2_SessionCallback::onConnect(__jni_impl::android::media::MediaSession2 arg0, __jni_impl::android::media::MediaSession2_ControllerInfo arg1)
	{
		return __thiz.callObjectMethod(
			"onConnect",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;)Landroid/media/Session2CommandGroup;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaSession2_SessionCallback : public __jni_impl::android::media::MediaSession2_SessionCallback
	{
	public:
		MediaSession2_SessionCallback(QAndroidJniObject obj) { __thiz = obj; }
		MediaSession2_SessionCallback()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIASESSION2_SESSIONCALLBACK

