#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "./MtpDeviceInfo.hpp"

namespace android::mtp
{
	// Fields
	
	// Constructors
	
	// Methods
	JIntArray MtpDeviceInfo::getEventsSupported() const
	{
		return callObjectMethod(
			"getEventsSupported",
			"()[I"
		);
	}
	JString MtpDeviceInfo::getManufacturer() const
	{
		return callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;"
		);
	}
	JString MtpDeviceInfo::getModel() const
	{
		return callObjectMethod(
			"getModel",
			"()Ljava/lang/String;"
		);
	}
	JIntArray MtpDeviceInfo::getOperationsSupported() const
	{
		return callObjectMethod(
			"getOperationsSupported",
			"()[I"
		);
	}
	JString MtpDeviceInfo::getSerialNumber() const
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;"
		);
	}
	JString MtpDeviceInfo::getVersion() const
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		);
	}
	jboolean MtpDeviceInfo::isEventSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isEventSupported",
			"(I)Z",
			arg0
		);
	}
	jboolean MtpDeviceInfo::isOperationSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isOperationSupported",
			"(I)Z",
			arg0
		);
	}
} // namespace android::mtp

