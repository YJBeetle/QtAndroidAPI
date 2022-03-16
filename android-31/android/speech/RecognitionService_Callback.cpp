#include "../../JByteArray.hpp"
#include "../content/AttributionSource.hpp"
#include "../os/Bundle.hpp"
#include "./RecognitionService.hpp"
#include "./RecognitionService_Callback.hpp"

namespace android::speech
{
	// Fields
	
	// Constructors
	
	// Methods
	void RecognitionService_Callback::beginningOfSpeech() const
	{
		callMethod<void>(
			"beginningOfSpeech",
			"()V"
		);
	}
	void RecognitionService_Callback::bufferReceived(JByteArray arg0) const
	{
		callMethod<void>(
			"bufferReceived",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void RecognitionService_Callback::endOfSpeech() const
	{
		callMethod<void>(
			"endOfSpeech",
			"()V"
		);
	}
	void RecognitionService_Callback::error(jint arg0) const
	{
		callMethod<void>(
			"error",
			"(I)V",
			arg0
		);
	}
	android::content::AttributionSource RecognitionService_Callback::getCallingAttributionSource() const
	{
		return callObjectMethod(
			"getCallingAttributionSource",
			"()Landroid/content/AttributionSource;"
		);
	}
	jint RecognitionService_Callback::getCallingUid() const
	{
		return callMethod<jint>(
			"getCallingUid",
			"()I"
		);
	}
	void RecognitionService_Callback::partialResults(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"partialResults",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void RecognitionService_Callback::readyForSpeech(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"readyForSpeech",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void RecognitionService_Callback::results(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"results",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void RecognitionService_Callback::rmsChanged(jfloat arg0) const
	{
		callMethod<void>(
			"rmsChanged",
			"(F)V",
			arg0
		);
	}
} // namespace android::speech

