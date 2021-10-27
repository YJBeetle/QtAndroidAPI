#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::telephony::mbms
{
	class StreamingServiceInfo;
}

namespace android::telephony::mbms
{
	class StreamingService : public __JniBaseClass
	{
	public:
		// Fields
		static jint BROADCAST_METHOD();
		static jint REASON_BY_USER_REQUEST();
		static jint REASON_END_OF_SESSION();
		static jint REASON_FREQUENCY_CONFLICT();
		static jint REASON_LEFT_MBMS_BROADCAST_AREA();
		static jint REASON_NONE();
		static jint REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE();
		static jint REASON_OUT_OF_MEMORY();
		static jint STATE_STALLED();
		static jint STATE_STARTED();
		static jint STATE_STOPPED();
		static jint UNICAST_METHOD();
		
		StreamingService(QAndroidJniObject obj);
		// Constructors
		StreamingService() = default;
		
		// Methods
		void close();
		QAndroidJniObject getInfo();
		QAndroidJniObject getPlaybackUri();
	};
} // namespace android::telephony::mbms

