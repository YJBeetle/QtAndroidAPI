#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./SynthesisRequest.hpp"

namespace android::speech::tts
{
	// Fields
	
	// QJniObject forward
	SynthesisRequest::SynthesisRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SynthesisRequest::SynthesisRequest(JString arg0, android::os::Bundle arg1)
		: JObject(
			"android.speech.tts.SynthesisRequest",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	jint SynthesisRequest::getCallerUid() const
	{
		return callMethod<jint>(
			"getCallerUid",
			"()I"
		);
	}
	JString SynthesisRequest::getCharSequenceText() const
	{
		return callObjectMethod(
			"getCharSequenceText",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString SynthesisRequest::getCountry() const
	{
		return callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		);
	}
	JString SynthesisRequest::getLanguage() const
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	android::os::Bundle SynthesisRequest::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Landroid/os/Bundle;"
		);
	}
	jint SynthesisRequest::getPitch() const
	{
		return callMethod<jint>(
			"getPitch",
			"()I"
		);
	}
	jint SynthesisRequest::getSpeechRate() const
	{
		return callMethod<jint>(
			"getSpeechRate",
			"()I"
		);
	}
	JString SynthesisRequest::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
	JString SynthesisRequest::getVariant() const
	{
		return callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		);
	}
	JString SynthesisRequest::getVoiceName() const
	{
		return callObjectMethod(
			"getVoiceName",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::speech::tts

