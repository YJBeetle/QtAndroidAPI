#pragma once

#ifndef ANDROID_SPEECH_RECOGNITIONSERVICE_CALLBACK
#define ANDROID_SPEECH_RECOGNITIONSERVICE_CALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::speech
{
	class RecognitionService;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::speech
{
	class RecognitionService_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void error(jint arg0);
		void results(__jni_impl::android::os::Bundle arg0);
		void beginningOfSpeech();
		void bufferReceived(jbyteArray arg0);
		void endOfSpeech();
		void partialResults(__jni_impl::android::os::Bundle arg0);
		void readyForSpeech(__jni_impl::android::os::Bundle arg0);
		void rmsChanged(jfloat arg0);
		jint getCallingUid();
	};
} // namespace __jni_impl::android::speech

#include "RecognitionService.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::speech
{
	// Fields
	
	// Constructors
	void RecognitionService_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.speech.RecognitionService$Callback",
			"(V)V");
	}
	
	// Methods
	void RecognitionService_Callback::error(jint arg0)
	{
		__thiz.callMethod<void>(
			"error",
			"(I)V",
			arg0);
	}
	void RecognitionService_Callback::results(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"results",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void RecognitionService_Callback::beginningOfSpeech()
	{
		__thiz.callMethod<void>(
			"beginningOfSpeech",
			"()V");
	}
	void RecognitionService_Callback::bufferReceived(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"bufferReceived",
			"([B)V",
			arg0);
	}
	void RecognitionService_Callback::endOfSpeech()
	{
		__thiz.callMethod<void>(
			"endOfSpeech",
			"()V");
	}
	void RecognitionService_Callback::partialResults(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"partialResults",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void RecognitionService_Callback::readyForSpeech(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"readyForSpeech",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void RecognitionService_Callback::rmsChanged(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rmsChanged",
			"(F)V",
			arg0);
	}
	jint RecognitionService_Callback::getCallingUid()
	{
		return __thiz.callMethod<jint>(
			"getCallingUid",
			"()I");
	}
} // namespace __jni_impl::android::speech

namespace android::speech
{
	class RecognitionService_Callback : public __jni_impl::android::speech::RecognitionService_Callback
	{
	public:
		RecognitionService_Callback(QAndroidJniObject obj) { __thiz = obj; }
		RecognitionService_Callback()
		{
			__constructor();
		}
	};
} // namespace android::speech

#endif // ANDROID_SPEECH_RECOGNITIONSERVICE_CALLBACK

