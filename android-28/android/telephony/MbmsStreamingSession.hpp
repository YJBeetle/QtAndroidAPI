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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsStreamingSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MbmsStreamingSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::MbmsStreamingSession create(android::content::Context arg0, __JniBaseClass arg1, android::telephony::mbms::MbmsStreamingSessionCallback arg2);
		static android::telephony::MbmsStreamingSession create(android::content::Context arg0, __JniBaseClass arg1, jint arg2, android::telephony::mbms::MbmsStreamingSessionCallback arg3);
		void close();
		void requestUpdateStreamingServices(__JniBaseClass arg0);
		android::telephony::mbms::StreamingService startStreaming(android::telephony::mbms::StreamingServiceInfo arg0, __JniBaseClass arg1, android::telephony::mbms::StreamingServiceCallback arg2);
	};
} // namespace android::telephony

