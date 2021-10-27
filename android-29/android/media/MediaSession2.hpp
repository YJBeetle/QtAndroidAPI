#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media
{
	class MediaSession2_ControllerInfo;
}
namespace __jni_impl::android::media
{
	class MediaSession2_SessionCallback;
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
	class MediaSession2 : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void broadcastSessionCommand(__jni_impl::android::media::Session2Command arg0, __jni_impl::android::os::Bundle arg1);
		void cancelSessionCommand(__jni_impl::android::media::MediaSession2_ControllerInfo arg0, jobject arg1);
		void close();
		QAndroidJniObject getConnectedControllers();
		jstring getId();
		QAndroidJniObject getToken();
		jboolean isPlaybackActive();
		jobject sendSessionCommand(__jni_impl::android::media::MediaSession2_ControllerInfo arg0, __jni_impl::android::media::Session2Command arg1, __jni_impl::android::os::Bundle arg2);
		void setPlaybackActive(jboolean arg0);
	};
} // namespace __jni_impl::android::media

#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "./MediaSession2_ControllerInfo.hpp"
#include "./MediaSession2_SessionCallback.hpp"
#include "./Session2Command.hpp"
#include "./Session2Token.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaSession2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSession2",
			"(V)V");
	}
	
	// Methods
	void MediaSession2::broadcastSessionCommand(__jni_impl::android::media::Session2Command arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"broadcastSessionCommand",
			"(Landroid/media/Session2Command;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession2::cancelSessionCommand(__jni_impl::android::media::MediaSession2_ControllerInfo arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"cancelSessionCommand",
			"(Landroid/media/MediaSession2$ControllerInfo;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void MediaSession2::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject MediaSession2::getConnectedControllers()
	{
		return __thiz.callObjectMethod(
			"getConnectedControllers",
			"()Ljava/util/List;"
		);
	}
	jstring MediaSession2::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaSession2::getToken()
	{
		return __thiz.callObjectMethod(
			"getToken",
			"()Landroid/media/Session2Token;"
		);
	}
	jboolean MediaSession2::isPlaybackActive()
	{
		return __thiz.callMethod<jboolean>(
			"isPlaybackActive",
			"()Z"
		);
	}
	jobject MediaSession2::sendSessionCommand(__jni_impl::android::media::MediaSession2_ControllerInfo arg0, __jni_impl::android::media::Session2Command arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"sendSessionCommand",
			"(Landroid/media/MediaSession2$ControllerInfo;Landroid/media/Session2Command;Landroid/os/Bundle;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jobject>();
	}
	void MediaSession2::setPlaybackActive(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackActive",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaSession2 : public __jni_impl::android::media::MediaSession2
	{
	public:
		MediaSession2(QAndroidJniObject obj) { __thiz = obj; }
		MediaSession2()
		{
			__constructor();
		}
	};
} // namespace android::media

