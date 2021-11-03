#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::telephony::mbms
{
	class StreamingServiceCallback : public JObject
	{
	public:
		// Fields
		static jint SIGNAL_STRENGTH_UNAVAILABLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StreamingServiceCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StreamingServiceCallback(QAndroidJniObject obj);
		
		// Constructors
		StreamingServiceCallback();
		
		// Methods
		void onBroadcastSignalStrengthUpdated(jint arg0) const;
		void onError(jint arg0, JString arg1) const;
		void onMediaDescriptionUpdated() const;
		void onStreamMethodUpdated(jint arg0) const;
		void onStreamStateUpdated(jint arg0, jint arg1) const;
	};
} // namespace android::telephony::mbms

