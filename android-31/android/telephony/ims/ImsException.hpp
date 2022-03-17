#pragma once

#include "./ImsException.def.hpp"

namespace android::telephony::ims
{
	// Fields
	inline jint ImsException::CODE_ERROR_INVALID_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsException",
			"CODE_ERROR_INVALID_SUBSCRIPTION"
		);
	}
	inline jint ImsException::CODE_ERROR_SERVICE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsException",
			"CODE_ERROR_SERVICE_UNAVAILABLE"
		);
	}
	inline jint ImsException::CODE_ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsException",
			"CODE_ERROR_UNSPECIFIED"
		);
	}
	inline jint ImsException::CODE_ERROR_UNSUPPORTED_OPERATION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsException",
			"CODE_ERROR_UNSUPPORTED_OPERATION"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ImsException::getCode() const
	{
		return callMethod<jint>(
			"getCode",
			"()I"
		);
	}
} // namespace android::telephony::ims

// Base class headers
#include "../../../java/lang/Exception.hpp"

