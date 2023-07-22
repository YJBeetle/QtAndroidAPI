#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
class JString;

namespace android::speech
{
	class SpeechRecognizer : public JObject
	{
	public:
		// Fields
		static JString CONFIDENCE_SCORES();
		static jint ERROR_AUDIO();
		static jint ERROR_CANNOT_CHECK_SUPPORT();
		static jint ERROR_CLIENT();
		static jint ERROR_INSUFFICIENT_PERMISSIONS();
		static jint ERROR_LANGUAGE_NOT_SUPPORTED();
		static jint ERROR_LANGUAGE_UNAVAILABLE();
		static jint ERROR_NETWORK();
		static jint ERROR_NETWORK_TIMEOUT();
		static jint ERROR_NO_MATCH();
		static jint ERROR_RECOGNIZER_BUSY();
		static jint ERROR_SERVER();
		static jint ERROR_SERVER_DISCONNECTED();
		static jint ERROR_SPEECH_TIMEOUT();
		static jint ERROR_TOO_MANY_REQUESTS();
		static JString RESULTS_RECOGNITION();
		
		// QJniObject forward
		template<typename ...Ts> explicit SpeechRecognizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpeechRecognizer(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::speech::SpeechRecognizer createOnDeviceSpeechRecognizer(android::content::Context arg0);
		static android::speech::SpeechRecognizer createSpeechRecognizer(android::content::Context arg0);
		static android::speech::SpeechRecognizer createSpeechRecognizer(android::content::Context arg0, android::content::ComponentName arg1);
		static jboolean isOnDeviceRecognitionAvailable(android::content::Context arg0);
		static jboolean isRecognitionAvailable(android::content::Context arg0);
		void cancel() const;
		void checkRecognitionSupport(android::content::Intent arg0, JObject arg1, JObject arg2) const;
		void destroy() const;
		void setRecognitionListener(JObject arg0) const;
		void startListening(android::content::Intent arg0) const;
		void stopListening() const;
		void triggerModelDownload(android::content::Intent arg0) const;
	};
} // namespace android::speech

