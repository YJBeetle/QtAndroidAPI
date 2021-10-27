#include "../os/Bundle.hpp"
#include "./RecognitionService.hpp"
#include "./RecognitionService_Callback.hpp"

namespace android::speech
{
	// Fields
	
	RecognitionService_Callback::RecognitionService_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void RecognitionService_Callback::beginningOfSpeech()
	{
		__thiz.callMethod<void>(
			"beginningOfSpeech",
			"()V"
		);
	}
	void RecognitionService_Callback::bufferReceived(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"bufferReceived",
			"([B)V",
			arg0
		);
	}
	void RecognitionService_Callback::endOfSpeech()
	{
		__thiz.callMethod<void>(
			"endOfSpeech",
			"()V"
		);
	}
	void RecognitionService_Callback::error(jint arg0)
	{
		__thiz.callMethod<void>(
			"error",
			"(I)V",
			arg0
		);
	}
	jint RecognitionService_Callback::getCallingUid()
	{
		return __thiz.callMethod<jint>(
			"getCallingUid",
			"()I"
		);
	}
	void RecognitionService_Callback::partialResults(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"partialResults",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void RecognitionService_Callback::readyForSpeech(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"readyForSpeech",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void RecognitionService_Callback::results(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"results",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void RecognitionService_Callback::rmsChanged(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rmsChanged",
			"(F)V",
			arg0
		);
	}
} // namespace android::speech

