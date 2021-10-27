#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_Request : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void cancel();
		jstring getCallingPackage();
		jint getCallingUid();
		QAndroidJniObject getExtras();
		jboolean isActive();
		jstring toString();
	};
} // namespace __jni_impl::android::service::voice

#include "../../os/Bundle.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void VoiceInteractionSession_Request::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession$Request",
			"(V)V");
	}
	
	// Methods
	void VoiceInteractionSession_Request::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jstring VoiceInteractionSession_Request::getCallingPackage()
	{
		return __thiz.callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint VoiceInteractionSession_Request::getCallingUid()
	{
		return __thiz.callMethod<jint>(
			"getCallingUid",
			"()I"
		);
	}
	QAndroidJniObject VoiceInteractionSession_Request::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jboolean VoiceInteractionSession_Request::isActive()
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	jstring VoiceInteractionSession_Request::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSession_Request : public __jni_impl::android::service::voice::VoiceInteractionSession_Request
	{
	public:
		VoiceInteractionSession_Request(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSession_Request()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

