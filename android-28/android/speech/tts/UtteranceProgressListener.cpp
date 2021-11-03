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
	void UtteranceProgressListener::onAudioAvailable(jstring arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"onAudioAvailable",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void UtteranceProgressListener::onBeginSynthesis(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"onBeginSynthesis",
			"(Ljava/lang/String;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void UtteranceProgressListener::onDone(jstring arg0)
	{
		callMethod<void>(
			"onDone",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UtteranceProgressListener::onError(jstring arg0)
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UtteranceProgressListener::onError(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void UtteranceProgressListener::onRangeStart(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"onRangeStart",
			"(Ljava/lang/String;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void UtteranceProgressListener::onStart(jstring arg0)
	{
		callMethod<void>(
			"onStart",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UtteranceProgressListener::onStop(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"onStop",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
} // namespace android::speech::tts

