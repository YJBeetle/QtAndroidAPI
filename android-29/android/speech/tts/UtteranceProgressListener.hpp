#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::speech::tts
{
	class UtteranceProgressListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UtteranceProgressListener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UtteranceProgressListener(QAndroidJniObject obj);
		
		// Constructors
		UtteranceProgressListener();
		
		// Methods
		void onAudioAvailable(jstring arg0, jbyteArray arg1);
		void onBeginSynthesis(jstring arg0, jint arg1, jint arg2, jint arg3);
		void onDone(jstring arg0);
		void onError(jstring arg0);
		void onError(jstring arg0, jint arg1);
		void onRangeStart(jstring arg0, jint arg1, jint arg2, jint arg3);
		void onStart(jstring arg0);
		void onStop(jstring arg0, jboolean arg1);
	};
} // namespace android::speech::tts

