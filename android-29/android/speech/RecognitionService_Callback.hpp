#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::speech
{
	class RecognitionService;
}

namespace android::speech
{
	class RecognitionService_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		RecognitionService_Callback(QAndroidJniObject obj);
		// Constructors
		RecognitionService_Callback() = default;
		
		// Methods
		void beginningOfSpeech();
		void bufferReceived(jbyteArray arg0);
		void endOfSpeech();
		void error(jint arg0);
		jint getCallingUid();
		void partialResults(android::os::Bundle arg0);
		void readyForSpeech(android::os::Bundle arg0);
		void results(android::os::Bundle arg0);
		void rmsChanged(jfloat arg0);
	};
} // namespace android::speech

