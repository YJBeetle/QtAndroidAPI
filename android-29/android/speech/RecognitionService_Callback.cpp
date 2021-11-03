#include "../os/Bundle.hpp"
#include "./RecognitionService.hpp"
#include "./RecognitionService_Callback.hpp"

namespace android::speech
{
	// Fields
	
	// QJniObject forward
	RecognitionService_Callback::RecognitionService_Callback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void RecognitionService_Callback::beginningOfSpeech()
	{
		callMethod<void>(
			"beginningOfSpeech",
			"()V"
		);
	}
	void RecognitionService_Callback::bufferReceived(jbyteArray arg0)
	{
		callMethod<void>(
			"bufferReceived",
			"([B)V",
			arg0
		);
	}
	void RecognitionService_Callback::endOfSpeech()
	{
		callMethod<void>(
			"endOfSpeech",
			"()V"
		);
	}
	void RecognitionService_Callback::error(jint arg0)
	{
		callMethod<void>(
			"error",
			"(I)V",
			arg0
		);
	}
	jint RecognitionService_Callback::getCallingUid()
	{
		return callMethod<jint>(
			"getCallingUid",
			"()I"
		);
	}
	void RecognitionService_Callback::partialResults(android::os::Bundle arg0)
	{
		callMethod<void>(
			"partialResults",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void RecognitionService_Callback::readyForSpeech(android::os::Bundle arg0)
	{
		callMethod<void>(
			"readyForSpeech",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void RecognitionService_Callback::results(android::os::Bundle arg0)
	{
		callMethod<void>(
			"results",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void RecognitionService_Callback::rmsChanged(jfloat arg0)
	{
		callMethod<void>(
			"rmsChanged",
			"(F)V",
			arg0
		);
	}
} // namespace android::speech

