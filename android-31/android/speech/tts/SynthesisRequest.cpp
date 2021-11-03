#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./SynthesisRequest.hpp"

namespace android::speech::tts
{
	// Fields
	
	// QAndroidJniObject forward
	SynthesisRequest::SynthesisRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SynthesisRequest::SynthesisRequest(JString arg0, android::os::Bundle arg1)
		: JObject(
			"android.speech.tts.SynthesisRequest",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
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
	JString SynthesisRequest::getCharSequenceText()
	{
		return callObjectMethod(
			"getCharSequenceText",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString SynthesisRequest::getCountry()
	{
		return callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		);
	}
	JString SynthesisRequest::getLanguage()
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	android::os::Bundle SynthesisRequest::getParams()
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
	JString SynthesisRequest::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
	JString SynthesisRequest::getVariant()
	{
		return callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		);
	}
	JString SynthesisRequest::getVoiceName()
	{
		return callObjectMethod(
			"getVoiceName",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::speech::tts

