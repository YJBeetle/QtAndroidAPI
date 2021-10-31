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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SynthesisRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SynthesisRequest(QAndroidJniObject obj);
		
		// Constructors
		SynthesisRequest(jstring arg0, android::os::Bundle arg1);
		
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

