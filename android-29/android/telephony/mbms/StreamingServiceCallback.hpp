#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class StreamingServiceCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint SIGNAL_STRENGTH_UNAVAILABLE();
		
		StreamingServiceCallback(QAndroidJniObject obj);
		// Constructors
		StreamingServiceCallback();
		
		// Methods
		void onBroadcastSignalStrengthUpdated(jint arg0);
		void onError(jint arg0, jstring arg1);
		void onError(jint arg0, const QString &arg1);
		void onMediaDescriptionUpdated();
		void onStreamMethodUpdated(jint arg0);
		void onStreamStateUpdated(jint arg0, jint arg1);
	};
} // namespace android::telephony::mbms

