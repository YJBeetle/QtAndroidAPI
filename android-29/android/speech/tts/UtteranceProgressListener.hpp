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
		
		// QJniObject forward
		template<typename ...Ts> explicit UtteranceProgressListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UtteranceProgressListener(QJniObject obj);
		
		// Constructors
		UtteranceProgressListener();
		
		// Methods
		void onAudioAvailable(JString arg0, JByteArray arg1) const;
		void onBeginSynthesis(JString arg0, jint arg1, jint arg2, jint arg3) const;
		void onDone(JString arg0) const;
		void onError(JString arg0) const;
		void onError(JString arg0, jint arg1) const;
		void onRangeStart(JString arg0, jint arg1, jint arg2, jint arg3) const;
		void onStart(JString arg0) const;
		void onStop(JString arg0, jboolean arg1) const;
	};
} // namespace android::speech::tts

