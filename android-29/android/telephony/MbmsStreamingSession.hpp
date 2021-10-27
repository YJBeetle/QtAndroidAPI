#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::telephony::mbms
{
	class MbmsStreamingSessionCallback;
}
namespace android::telephony::mbms
{
	class StreamingService;
}
namespace android::telephony::mbms
{
	class StreamingServiceCallback;
}
namespace android::telephony::mbms
{
	class StreamingServiceInfo;
}

namespace android::telephony
{
	class MbmsStreamingSession : public __JniBaseClass
	{
	public:
		// Fields
		
		MbmsStreamingSession(QAndroidJniObject obj);
		// Constructors
		MbmsStreamingSession() = default;
		
		// Methods
		static QAndroidJniObject create(android::content::Context arg0, __JniBaseClass arg1, android::telephony::mbms::MbmsStreamingSessionCallback arg2);
		static QAndroidJniObject create(android::content::Context arg0, __JniBaseClass arg1, jint arg2, android::telephony::mbms::MbmsStreamingSessionCallback arg3);
		void close();
		void requestUpdateStreamingServices(__JniBaseClass arg0);
		QAndroidJniObject startStreaming(android::telephony::mbms::StreamingServiceInfo arg0, __JniBaseClass arg1, android::telephony::mbms::StreamingServiceCallback arg2);
	};
} // namespace android::telephony

