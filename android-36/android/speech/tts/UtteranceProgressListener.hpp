#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./UtteranceProgressListener.def.hpp"

namespace android::speech::tts
{
	// Fields
	
	// Constructors
	inline UtteranceProgressListener::UtteranceProgressListener()
		: JObject(
			"android.speech.tts.UtteranceProgressListener",
			"()V"
		) {}
	
	// Methods
	inline void UtteranceProgressListener::onAudioAvailable(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"onAudioAvailable",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void UtteranceProgressListener::onBeginSynthesis(JString arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void UtteranceProgressListener::onDone(JString arg0) const
	{
		callMethod<void>(
			"onDone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void UtteranceProgressListener::onError(JString arg0) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void UtteranceProgressListener::onError(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void UtteranceProgressListener::onRangeStart(JString arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void UtteranceProgressListener::onStart(JString arg0) const
	{
		callMethod<void>(
			"onStart",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void UtteranceProgressListener::onStop(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onStop",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::speech::tts

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech::tts;
#endif
