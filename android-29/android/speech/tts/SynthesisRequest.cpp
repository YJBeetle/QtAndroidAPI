#include "../../os/Bundle.hpp"
#include "./SynthesisRequest.hpp"

namespace android::speech::tts
{
	// Fields
	
	// QAndroidJniObject forward
	SynthesisRequest::SynthesisRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SynthesisRequest::SynthesisRequest(jstring arg0, android::os::Bundle arg1)
		: __JniBaseClass(
			"android.speech.tts.SynthesisRequest",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jint SynthesisRequest::getCallerUid()
	{
		return callMethod<jint>(
			"getCallerUid",
			"()I"
		);
	}
	jstring SynthesisRequest::getCharSequenceText()
	{
		return callObjectMethod(
			"getCharSequenceText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring SynthesisRequest::getCountry()
	{
		return callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SynthesisRequest::getLanguage()
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SynthesisRequest::getParams()
	{
		return callObjectMethod(
			"getParams",
			"()Landroid/os/Bundle;"
		);
	}
	jint SynthesisRequest::getPitch()
	{
		return callMethod<jint>(
			"getPitch",
			"()I"
		);
	}
	jint SynthesisRequest::getSpeechRate()
	{
		return callMethod<jint>(
			"getSpeechRate",
			"()I"
		);
	}
	jstring SynthesisRequest::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SynthesisRequest::getVariant()
	{
		return callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SynthesisRequest::getVoiceName()
	{
		return callObjectMethod(
			"getVoiceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::speech::tts

