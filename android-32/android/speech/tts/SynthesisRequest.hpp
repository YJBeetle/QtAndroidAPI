#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./SynthesisRequest.def.hpp"

namespace android::speech::tts
{
	// Fields
	
	// Constructors
	inline SynthesisRequest::SynthesisRequest(JString arg0, android::os::Bundle arg1)
		: JObject(
			"android.speech.tts.SynthesisRequest",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline jint SynthesisRequest::getCallerUid() const
	{
		return callMethod<jint>(
			"getCallerUid",
			"()I"
		);
	}
	inline JString SynthesisRequest::getCharSequenceText() const
	{
		return callObjectMethod(
			"getCharSequenceText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString SynthesisRequest::getCountry() const
	{
		return callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		);
	}
	inline JString SynthesisRequest::getLanguage() const
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::Bundle SynthesisRequest::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint SynthesisRequest::getPitch() const
	{
		return callMethod<jint>(
			"getPitch",
			"()I"
		);
	}
	inline jint SynthesisRequest::getSpeechRate() const
	{
		return callMethod<jint>(
			"getSpeechRate",
			"()I"
		);
	}
	inline JString SynthesisRequest::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
	inline JString SynthesisRequest::getVariant() const
	{
		return callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		);
	}
	inline JString SynthesisRequest::getVoiceName() const
	{
		return callObjectMethod(
			"getVoiceName",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::speech::tts

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech::tts;
#endif
