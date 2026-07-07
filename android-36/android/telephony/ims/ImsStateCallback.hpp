#pragma once

#include "./ImsStateCallback.def.hpp"

namespace android::telephony::ims
{
	// Fields
	inline jint ImsStateCallback::REASON_IMS_SERVICE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsStateCallback",
			"REASON_IMS_SERVICE_DISCONNECTED"
		);
	}
	inline jint ImsStateCallback::REASON_IMS_SERVICE_NOT_READY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsStateCallback",
			"REASON_IMS_SERVICE_NOT_READY"
		);
	}
	inline jint ImsStateCallback::REASON_NO_IMS_SERVICE_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsStateCallback",
			"REASON_NO_IMS_SERVICE_CONFIGURED"
		);
	}
	inline jint ImsStateCallback::REASON_SUBSCRIPTION_INACTIVE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsStateCallback",
			"REASON_SUBSCRIPTION_INACTIVE"
		);
	}
	inline jint ImsStateCallback::REASON_UNKNOWN_PERMANENT_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsStateCallback",
			"REASON_UNKNOWN_PERMANENT_ERROR"
		);
	}
	inline jint ImsStateCallback::REASON_UNKNOWN_TEMPORARY_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsStateCallback",
			"REASON_UNKNOWN_TEMPORARY_ERROR"
		);
	}
	
	// Constructors
	inline ImsStateCallback::ImsStateCallback()
		: JObject(
			"android.telephony.ims.ImsStateCallback",
			"()V"
		) {}
	
	// Methods
	inline void ImsStateCallback::onAvailable() const
	{
		callMethod<void>(
			"onAvailable",
			"()V"
		);
	}
	inline void ImsStateCallback::onError() const
	{
		callMethod<void>(
			"onError",
			"()V"
		);
	}
	inline void ImsStateCallback::onUnavailable(jint arg0) const
	{
		callMethod<void>(
			"onUnavailable",
			"(I)V",
			arg0
		);
	}
} // namespace android::telephony::ims

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::ims;
#endif
