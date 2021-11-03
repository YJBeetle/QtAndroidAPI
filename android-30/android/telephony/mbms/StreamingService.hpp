#pragma once

#include "../../../JObject.hpp"

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
	class StreamingService : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit StreamingService(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StreamingService(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		android::telephony::mbms::StreamingServiceInfo getInfo();
		android::net::Uri getPlaybackUri();
	};
} // namespace android::telephony::mbms

