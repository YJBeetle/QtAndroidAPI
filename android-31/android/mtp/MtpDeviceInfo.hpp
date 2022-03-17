#pragma once

#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "./MtpDeviceInfo.def.hpp"

namespace android::mtp
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JIntArray MtpDeviceInfo::getEventsSupported() const
	{
		return callObjectMethod(
			"getEventsSupported",
			"()[I"
		);
	}
	inline JString MtpDeviceInfo::getManufacturer() const
	{
		return callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;"
		);
	}
	inline JString MtpDeviceInfo::getModel() const
	{
		return callObjectMethod(
			"getModel",
			"()Ljava/lang/String;"
		);
	}
	inline JIntArray MtpDeviceInfo::getOperationsSupported() const
	{
		return callObjectMethod(
			"getOperationsSupported",
			"()[I"
		);
	}
	inline JString MtpDeviceInfo::getSerialNumber() const
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;"
		);
	}
	inline JString MtpDeviceInfo::getVersion() const
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean MtpDeviceInfo::isEventSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isEventSupported",
			"(I)Z",
			arg0
		);
	}
	inline jboolean MtpDeviceInfo::isOperationSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isOperationSupported",
			"(I)Z",
			arg0
		);
	}
} // namespace android::mtp

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::mtp;
#endif
