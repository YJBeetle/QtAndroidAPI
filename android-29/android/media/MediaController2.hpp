#pragma once

#ifndef ANDROID_MEDIA_MEDIACONTROLLER2
#define ANDROID_MEDIA_MEDIACONTROLLER2

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media
{
	class MediaController2_ControllerCallback;
}
namespace __jni_impl::android::media
{
	class Session2Command;
}
namespace __jni_impl::android::media
{
	class Session2Token;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media
{
	class MediaController2 : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void cancelSessionCommand(jobject arg0);
		void close();
		QAndroidJniObject getConnectedToken();
		jboolean isPlaybackActive();
		jobject sendSessionCommand(__jni_impl::android::media::Session2Command arg0, __jni_impl::android::os::Bundle arg1);
	};
} // namespace __jni_impl::android::media

#include "../content/Context.hpp"
#include "MediaController2_ControllerCallback.hpp"
#include "Session2Command.hpp"
#include "Session2Token.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaController2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaController2",
			"(V)V");
	}
	
	// Methods
	void MediaController2::cancelSessionCommand(jobject arg0)
	{
		__thiz.callMethod<void>(
			"cancelSessionCommand",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void MediaController2::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject MediaController2::getConnectedToken()
	{
		return __thiz.callObjectMethod(
			"getConnectedToken",
			"()Landroid/media/Session2Token;"
		);
	}
	jboolean MediaController2::isPlaybackActive()
	{
		return __thiz.callMethod<jboolean>(
			"isPlaybackActive",
			"()Z"
		);
	}
	jobject MediaController2::sendSessionCommand(__jni_impl::android::media::Session2Command arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"sendSessionCommand",
			"(Landroid/media/Session2Command;Landroid/os/Bundle;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaController2 : public __jni_impl::android::media::MediaController2
	{
	public:
		MediaController2(QAndroidJniObject obj) { __thiz = obj; }
		MediaController2()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACONTROLLER2

