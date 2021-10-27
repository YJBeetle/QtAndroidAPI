#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::speech::tts
{
	class UtteranceProgressListener : public __JniBaseClass
	{
	public:
		// Fields
		
		UtteranceProgressListener(QAndroidJniObject obj);
		// Constructors
		UtteranceProgressListener();
		
		// Methods
		void onAudioAvailable(jstring arg0, jbyteArray arg1);
		void onAudioAvailable(const QString &arg0, jbyteArray arg1);
		void onBeginSynthesis(jstring arg0, jint arg1, jint arg2, jint arg3);
		void onBeginSynthesis(const QString &arg0, jint arg1, jint arg2, jint arg3);
		void onDone(jstring arg0);
		void onDone(const QString &arg0);
		void onError(jstring arg0);
		void onError(const QString &arg0);
		void onError(jstring arg0, jint arg1);
		void onError(const QString &arg0, jint arg1);
		void onRangeStart(jstring arg0, jint arg1, jint arg2, jint arg3);
		void onRangeStart(const QString &arg0, jint arg1, jint arg2, jint arg3);
		void onStart(jstring arg0);
		void onStart(const QString &arg0);
		void onStop(jstring arg0, jboolean arg1);
		void onStop(const QString &arg0, jboolean arg1);
	};
} // namespace android::speech::tts

