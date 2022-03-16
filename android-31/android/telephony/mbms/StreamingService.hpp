#pragma once

#include "../../net/Uri.def.hpp"
#include "./StreamingServiceInfo.def.hpp"
#include "./StreamingService.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline jint StreamingService::BROADCAST_METHOD()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"BROADCAST_METHOD"
		);
	}
	inline jint StreamingService::REASON_BY_USER_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_BY_USER_REQUEST"
		);
	}
	inline jint StreamingService::REASON_END_OF_SESSION()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_END_OF_SESSION"
		);
	}
	inline jint StreamingService::REASON_FREQUENCY_CONFLICT()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_FREQUENCY_CONFLICT"
		);
	}
	inline jint StreamingService::REASON_LEFT_MBMS_BROADCAST_AREA()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_LEFT_MBMS_BROADCAST_AREA"
		);
	}
	inline jint StreamingService::REASON_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_NONE"
		);
	}
	inline jint StreamingService::REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE"
		);
	}
	inline jint StreamingService::REASON_OUT_OF_MEMORY()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"REASON_OUT_OF_MEMORY"
		);
	}
	inline jint StreamingService::STATE_STALLED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"STATE_STALLED"
		);
	}
	inline jint StreamingService::STATE_STARTED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"STATE_STARTED"
		);
	}
	inline jint StreamingService::STATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"STATE_STOPPED"
		);
	}
	inline jint StreamingService::UNICAST_METHOD()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingService",
			"UNICAST_METHOD"
		);
	}
	
	// Constructors
	
	// Methods
	inline void StreamingService::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::telephony::mbms::StreamingServiceInfo StreamingService::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/telephony/mbms/StreamingServiceInfo;"
		);
	}
	inline android::net::Uri StreamingService::getPlaybackUri() const
	{
		return callObjectMethod(
			"getPlaybackUri",
			"()Landroid/net/Uri;"
		);
	}
} // namespace android::telephony::mbms

// Base class headers

