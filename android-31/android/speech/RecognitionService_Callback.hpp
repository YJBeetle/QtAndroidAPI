#pragma once

#include "../../JByteArray.hpp"
#include "../content/AttributionSource.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./RecognitionService.def.hpp"
#include "./RecognitionService_Callback.def.hpp"

namespace android::speech
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void RecognitionService_Callback::beginningOfSpeech() const
	{
		callMethod<void>(
			"beginningOfSpeech",
			"()V"
		);
	}
	inline void RecognitionService_Callback::bufferReceived(JByteArray arg0) const
	{
		callMethod<void>(
			"bufferReceived",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void RecognitionService_Callback::endOfSpeech() const
	{
		callMethod<void>(
			"endOfSpeech",
			"()V"
		);
	}
	inline void RecognitionService_Callback::error(jint arg0) const
	{
		callMethod<void>(
			"error",
			"(I)V",
			arg0
		);
	}
	inline android::content::AttributionSource RecognitionService_Callback::getCallingAttributionSource() const
	{
		return callObjectMethod(
			"getCallingAttributionSource",
			"()Landroid/content/AttributionSource;"
		);
	}
	inline jint RecognitionService_Callback::getCallingUid() const
	{
		return callMethod<jint>(
			"getCallingUid",
			"()I"
		);
	}
	inline void RecognitionService_Callback::partialResults(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"partialResults",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void RecognitionService_Callback::readyForSpeech(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"readyForSpeech",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void RecognitionService_Callback::results(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"results",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void RecognitionService_Callback::rmsChanged(jfloat arg0) const
	{
		callMethod<void>(
			"rmsChanged",
			"(F)V",
			arg0
		);
	}
} // namespace android::speech

// Base class headers

