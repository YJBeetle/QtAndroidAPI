#pragma once

#include "../../../JObject.hpp"


namespace android::telephony::mbms
{
	class StreamingServiceCallback : public JObject
	{
	public:
		// Fields
		static jint SIGNAL_STRENGTH_UNAVAILABLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit StreamingServiceCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StreamingServiceCallback(QJniObject obj);
		
		// Constructors
		StreamingServiceCallback();
		
		// Methods
		void onBroadcastSignalStrengthUpdated(jint arg0);
		void onError(jint arg0, jstring arg1);
		void onMediaDescriptionUpdated();
		void onStreamMethodUpdated(jint arg0);
		void onStreamStateUpdated(jint arg0, jint arg1);
	};
} // namespace android::telephony::mbms

