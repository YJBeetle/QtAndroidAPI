#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
	class RecognitionService_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognitionService_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecognitionService_Callback(QJniObject obj);
		
		// Constructors
		
		// Methods
		void beginningOfSpeech();
		void bufferReceived(JByteArray arg0);
		void endOfSpeech();
		void error(jint arg0);
		jint getCallingUid();
		void partialResults(android::os::Bundle arg0);
		void readyForSpeech(android::os::Bundle arg0);
		void results(android::os::Bundle arg0);
		void rmsChanged(jfloat arg0);
	};
} // namespace android::speech

