#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaController2;
}
namespace __jni_impl::android::media
{
	class Session2Command;
}
namespace __jni_impl::android::media
{
	class Session2Command_Result;
}
namespace __jni_impl::android::media
{
	class Session2CommandGroup;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media
{
	class MediaController2_ControllerCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onCommandResult(__jni_impl::android::media::MediaController2 arg0, jobject arg1, __jni_impl::android::media::Session2Command arg2, __jni_impl::android::media::Session2Command_Result arg3);
		void onConnected(__jni_impl::android::media::MediaController2 arg0, __jni_impl::android::media::Session2CommandGroup arg1);
		void onDisconnected(__jni_impl::android::media::MediaController2 arg0);
		void onPlaybackActiveChanged(__jni_impl::android::media::MediaController2 arg0, jboolean arg1);
		QAndroidJniObject onSessionCommand(__jni_impl::android::media::MediaController2 arg0, __jni_impl::android::media::Session2Command arg1, __jni_impl::android::os::Bundle arg2);
	};
} // namespace __jni_impl::android::media

#include "MediaController2.hpp"
#include "Session2Command.hpp"
#include "Session2Command_Result.hpp"
#include "Session2CommandGroup.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaController2_ControllerCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaController2$ControllerCallback",
			"()V"
		);
	}
	
	// Methods
	void MediaController2_ControllerCallback::onCommandResult(__jni_impl::android::media::MediaController2 arg0, jobject arg1, __jni_impl::android::media::Session2Command arg2, __jni_impl::android::media::Session2Command_Result arg3)
	{
		__thiz.callMethod<void>(
			"onCommandResult",
			"(Landroid/media/MediaController2;Ljava/lang/Object;Landroid/media/Session2Command;Landroid/media/Session2Command$Result;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void MediaController2_ControllerCallback::onConnected(__jni_impl::android::media::MediaController2 arg0, __jni_impl::android::media::Session2CommandGroup arg1)
	{
		__thiz.callMethod<void>(
			"onConnected",
			"(Landroid/media/MediaController2;Landroid/media/Session2CommandGroup;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaController2_ControllerCallback::onDisconnected(__jni_impl::android::media::MediaController2 arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Landroid/media/MediaController2;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController2_ControllerCallback::onPlaybackActiveChanged(__jni_impl::android::media::MediaController2 arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onPlaybackActiveChanged",
			"(Landroid/media/MediaController2;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MediaController2_ControllerCallback::onSessionCommand(__jni_impl::android::media::MediaController2 arg0, __jni_impl::android::media::Session2Command arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"onSessionCommand",
			"(Landroid/media/MediaController2;Landroid/media/Session2Command;Landroid/os/Bundle;)Landroid/media/Session2Command$Result;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaController2_ControllerCallback : public __jni_impl::android::media::MediaController2_ControllerCallback
	{
	public:
		MediaController2_ControllerCallback(QAndroidJniObject obj) { __thiz = obj; }
		MediaController2_ControllerCallback()
		{
			__constructor();
		}
	};
} // namespace android::media

