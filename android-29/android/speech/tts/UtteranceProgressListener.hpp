#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;

namespace android::speech::tts
{
	class UtteranceProgressListener : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UtteranceProgressListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UtteranceProgressListener(QAndroidJniObject obj);
		
		// Constructors
		UtteranceProgressListener();
		
		// Methods
		void onAudioAvailable(JString arg0, JByteArray arg1);
		void onBeginSynthesis(JString arg0, jint arg1, jint arg2, jint arg3);
		void onDone(JString arg0);
		void onError(JString arg0);
		void onError(JString arg0, jint arg1);
		void onRangeStart(JString arg0, jint arg1, jint arg2, jint arg3);
		void onStart(JString arg0);
		void onStop(JString arg0, jboolean arg1);
	};
} // namespace android::speech::tts

