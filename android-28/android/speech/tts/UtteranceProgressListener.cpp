#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./UtteranceProgressListener.hpp"

namespace android::speech::tts
{
	// Fields
	
	// QJniObject forward
	UtteranceProgressListener::UtteranceProgressListener(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	UtteranceProgressListener::UtteranceProgressListener()
		: JObject(
			"android.speech.tts.UtteranceProgressListener",
			"()V"
		) {}
	
	// Methods
	void UtteranceProgressListener::onAudioAvailable(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"onAudioAvailable",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	void UtteranceProgressListener::onBeginSynthesis(JString arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onBeginSynthesis",
			"(Ljava/lang/String;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	void UtteranceProgressListener::onDone(JString arg0) const
	{
		callMethod<void>(
			"onDone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void UtteranceProgressListener::onError(JString arg0) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void UtteranceProgressListener::onError(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void UtteranceProgressListener::onRangeStart(JString arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onRangeStart",
			"(Ljava/lang/String;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	void UtteranceProgressListener::onStart(JString arg0) const
	{
		callMethod<void>(
			"onStart",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void UtteranceProgressListener::onStop(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onStop",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::speech::tts

