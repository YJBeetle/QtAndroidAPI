#pragma once

#ifndef ANDROID_SPEECH_TTS_SYNTHESISREQUEST
#define ANDROID_SPEECH_TTS_SYNTHESISREQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::speech::tts
{
	class SynthesisRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::android::os::Bundle arg1);
		
		// Methods
		jstring getLanguage();
		jstring getCountry();
		jstring getVariant();
		jstring getText();
		jstring getCharSequenceText();
		jstring getVoiceName();
		jint getSpeechRate();
		jint getPitch();
		QAndroidJniObject getParams();
		jint getCallerUid();
	};
} // namespace __jni_impl::android::speech::tts

#include "../../os/Bundle.hpp"

namespace __jni_impl::android::speech::tts
{
	// Fields
	
	// Constructors
	void SynthesisRequest::__constructor(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.SynthesisRequest",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	jstring SynthesisRequest::getLanguage()
	{
		return __thiz.callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SynthesisRequest::getCountry()
	{
		return __thiz.callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SynthesisRequest::getVariant()
	{
		return __thiz.callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SynthesisRequest::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SynthesisRequest::getCharSequenceText()
	{
		return __thiz.callObjectMethod(
			"getCharSequenceText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring SynthesisRequest::getVoiceName()
	{
		return __thiz.callObjectMethod(
			"getVoiceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SynthesisRequest::getSpeechRate()
	{
		return __thiz.callMethod<jint>(
			"getSpeechRate",
			"()I"
		);
	}
	jint SynthesisRequest::getPitch()
	{
		return __thiz.callMethod<jint>(
			"getPitch",
			"()I"
		);
	}
	QAndroidJniObject SynthesisRequest::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Landroid/os/Bundle;"
		);
	}
	jint SynthesisRequest::getCallerUid()
	{
		return __thiz.callMethod<jint>(
			"getCallerUid",
			"()I"
		);
	}
} // namespace __jni_impl::android::speech::tts

namespace android::speech::tts
{
	class SynthesisRequest : public __jni_impl::android::speech::tts::SynthesisRequest
	{
	public:
		SynthesisRequest(QAndroidJniObject obj) { __thiz = obj; }
		SynthesisRequest(jstring arg0, __jni_impl::android::os::Bundle arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::speech::tts

#endif // ANDROID_SPEECH_TTS_SYNTHESISREQUEST

