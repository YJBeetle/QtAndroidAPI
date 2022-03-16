#pragma once

#include "./GroupCall.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline jint GroupCall::REASON_BY_USER_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_BY_USER_REQUEST"
		);
	}
	inline jint GroupCall::REASON_FREQUENCY_CONFLICT()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_FREQUENCY_CONFLICT"
		);
	}
	inline jint GroupCall::REASON_LEFT_MBMS_BROADCAST_AREA()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_LEFT_MBMS_BROADCAST_AREA"
		);
	}
	inline jint GroupCall::REASON_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_NONE"
		);
	}
	inline jint GroupCall::REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE"
		);
	}
	inline jint GroupCall::REASON_OUT_OF_MEMORY()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"REASON_OUT_OF_MEMORY"
		);
	}
	inline jint GroupCall::STATE_STALLED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STALLED"
		);
	}
	inline jint GroupCall::STATE_STARTED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STARTED"
		);
	}
	inline jint GroupCall::STATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.GroupCall",
			"STATE_STOPPED"
		);
	}
	
	// Constructors
	
	// Methods
	inline void GroupCall::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jlong GroupCall::getTmgi() const
	{
		return callMethod<jlong>(
			"getTmgi",
			"()J"
		);
	}
	inline void GroupCall::updateGroupCall(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"updateGroupCall",
			"(Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::telephony::mbms

// Base class headers

