#include "../../os/Bundle.hpp"
#include "./SynthesisRequest.hpp"

namespace android::speech::tts
{
	// Fields
	
	SynthesisRequest::SynthesisRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SynthesisRequest::SynthesisRequest(jstring arg0, android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.SynthesisRequest",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;)V",
			arg0,
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
} // namespace android::speech::tts

