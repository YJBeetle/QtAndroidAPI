#pragma once

#ifndef ANDROID_APP_VOICEINTERACTOR
#define ANDROID_APP_VOICEINTERACTOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class VoiceInteractor_Request;
}

namespace __jni_impl::android::app
{
	class VoiceInteractor : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isDestroyed();
		jboolean submitRequest(__jni_impl::android::app::VoiceInteractor_Request arg0, jstring arg1);
		jboolean submitRequest(__jni_impl::android::app::VoiceInteractor_Request arg0);
		jarray getActiveRequests();
		QAndroidJniObject getActiveRequest(jstring arg0);
		jbooleanArray supportsCommands(jarray arg0);
		jboolean registerOnDestroyedCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		jboolean unregisterOnDestroyedCallback(__jni_impl::__JniBaseClass arg0);
		void notifyDirectActionsChanged();
	};
} // namespace __jni_impl::android::app

#include "VoiceInteractor_Request.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void VoiceInteractor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor",
			"(V)V");
	}
	
	// Methods
	jboolean VoiceInteractor::isDestroyed()
	{
		return __thiz.callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	jboolean VoiceInteractor::submitRequest(__jni_impl::android::app::VoiceInteractor_Request arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"submitRequest",
			"(Landroid/app/VoiceInteractor$Request;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean VoiceInteractor::submitRequest(__jni_impl::android::app::VoiceInteractor_Request arg0)
	{
		return __thiz.callMethod<jboolean>(
			"submitRequest",
			"(Landroid/app/VoiceInteractor$Request;)Z",
			arg0.__jniObject().object()
		);
	}
	jarray VoiceInteractor::getActiveRequests()
	{
		return __thiz.callObjectMethod(
			"getActiveRequests",
			"()[Landroid/app/VoiceInteractor$Request;"
		).object<jarray>();
	}
	QAndroidJniObject VoiceInteractor::getActiveRequest(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getActiveRequest",
			"(Ljava/lang/String;)Landroid/app/VoiceInteractor$Request;",
			arg0
		);
	}
	jbooleanArray VoiceInteractor::supportsCommands(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"supportsCommands",
			"([Ljava/lang/String;)[Z",
			arg0
		).object<jbooleanArray>();
	}
	jboolean VoiceInteractor::registerOnDestroyedCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerOnDestroyedCallback",
			"(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean VoiceInteractor::unregisterOnDestroyedCallback(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregisterOnDestroyedCallback",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractor::notifyDirectActionsChanged()
	{
		__thiz.callMethod<void>(
			"notifyDirectActionsChanged",
			"()V"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class VoiceInteractor : public __jni_impl::android::app::VoiceInteractor
	{
	public:
		VoiceInteractor(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractor()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_VOICEINTERACTOR

