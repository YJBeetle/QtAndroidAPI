#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class AttributionSource;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognitionService_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RecognitionService_Callback(QJniObject obj);
		
		// Constructors
		
		// Methods
		void beginningOfSpeech();
		void bufferReceived(jbyteArray arg0);
		void endOfSpeech();
		void error(jint arg0);
		android::content::AttributionSource getCallingAttributionSource();
		jint getCallingUid();
		void partialResults(android::os::Bundle arg0);
		void readyForSpeech(android::os::Bundle arg0);
		void results(android::os::Bundle arg0);
		void rmsChanged(jfloat arg0);
	};
} // namespace android::speech

