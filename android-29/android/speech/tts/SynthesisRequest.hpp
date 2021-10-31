#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::speech::tts
{
	class SynthesisRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		SynthesisRequest(QAndroidJniObject obj);
		// Constructors
		SynthesisRequest(jstring arg0, android::os::Bundle arg1);
		SynthesisRequest() = default;
		
		// Methods
		jint getCallerUid();
		jstring getCharSequenceText();
		jstring getCountry();
		jstring getLanguage();
		QAndroidJniObject getParams();
		jint getPitch();
		jint getSpeechRate();
		jstring getText();
		jstring getVariant();
		jstring getVoiceName();
	};
} // namespace android::speech::tts

