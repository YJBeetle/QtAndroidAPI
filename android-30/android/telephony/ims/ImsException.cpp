#include "./ImsException.hpp"

namespace android::telephony::ims
{
	// Fields
	jint ImsException::CODE_ERROR_INVALID_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsException",
			"CODE_ERROR_INVALID_SUBSCRIPTION"
		);
	}
	jint ImsException::CODE_ERROR_SERVICE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsException",
			"CODE_ERROR_SERVICE_UNAVAILABLE"
		);
	}
	jint ImsException::CODE_ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsException",
			"CODE_ERROR_UNSPECIFIED"
		);
	}
	jint ImsException::CODE_ERROR_UNSUPPORTED_OPERATION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsException",
			"CODE_ERROR_UNSUPPORTED_OPERATION"
		);
	}
	
	// Constructors
	
	// Methods
	jint ImsException::getCode() const
	{
		return callMethod<jint>(
			"getCode",
			"()I"
		);
	}
} // namespace android::telephony::ims

