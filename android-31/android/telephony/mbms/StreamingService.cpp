#include "../../net/Uri.hpp"
#include "./StreamingServiceInfo.hpp"
#include "./StreamingService.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint StreamingService::BROADCAST_METHOD()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"BROADCAST_METHOD"
		);
	}
	jint StreamingService::REASON_BY_USER_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_BY_USER_REQUEST"
		);
	}
	jint StreamingService::REASON_END_OF_SESSION()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_END_OF_SESSION"
		);
	}
	jint StreamingService::REASON_FREQUENCY_CONFLICT()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_FREQUENCY_CONFLICT"
		);
	}
	jint StreamingService::REASON_LEFT_MBMS_BROADCAST_AREA()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_LEFT_MBMS_BROADCAST_AREA"
		);
	}
	jint StreamingService::REASON_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_NONE"
		);
	}
	jint StreamingService::REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE"
		);
	}
	jint StreamingService::REASON_OUT_OF_MEMORY()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_OUT_OF_MEMORY"
		);
	}
	jint StreamingService::STATE_STALLED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"STATE_STALLED"
		);
	}
	jint StreamingService::STATE_STARTED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"STATE_STARTED"
		);
	}
	jint StreamingService::STATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"STATE_STOPPED"
		);
	}
	jint StreamingService::UNICAST_METHOD()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"UNICAST_METHOD"
		);
	}
	
	// Constructors
	
	// Methods
	void StreamingService::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::telephony::mbms::StreamingServiceInfo StreamingService::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/telephony/mbms/StreamingServiceInfo;"
		);
	}
	android::net::Uri StreamingService::getPlaybackUri() const
	{
		return callObjectMethod(
			"getPlaybackUri",
			"()Landroid/net/Uri;"
		);
	}
} // namespace android::telephony::mbms

