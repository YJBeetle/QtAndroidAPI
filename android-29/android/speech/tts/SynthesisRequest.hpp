#pragma once

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
		void __constructor(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		
		// Methods
		jint getCallerUid();
		jstring getCharSequenceText();
		jstring getCountry();
		jstring getLanguage();
		QAndroidJniObject getParams();
		jint getPitch();
		jint getSpeechRate();
		jstring getText();
		jstring getVariant();
		jstring getVoiceName();
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
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SynthesisRequest::__constructor(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.SynthesisRequest",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint SynthesisRequest::getCallerUid()
	{
		return __thiz.callMethod<jint>(
			"getCallerUid",
			"()I"
		);
	}
	jstring SynthesisRequest::getCharSequenceText()
	{
		return __thiz.callObjectMethod(
			"getCharSequenceText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring SynthesisRequest::getCountry()
	{
		return __thiz.callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SynthesisRequest::getLanguage()
	{
		return __thiz.callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SynthesisRequest::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Landroid/os/Bundle;"
		);
	}
	jint SynthesisRequest::getPitch()
	{
		return __thiz.callMethod<jint>(
			"getPitch",
			"()I"
		);
	}
	jint SynthesisRequest::getSpeechRate()
	{
		return __thiz.callMethod<jint>(
			"getSpeechRate",
			"()I"
		);
	}
	jstring SynthesisRequest::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
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
	jstring SynthesisRequest::getVoiceName()
	{
		return __thiz.callObjectMethod(
			"getVoiceName",
			"()Ljava/lang/String;"
		).object<jstring>();
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

