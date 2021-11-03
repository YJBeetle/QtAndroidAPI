#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "./MtpDeviceInfo.hpp"

namespace android::mtp
{
	// Fields
	
	// QAndroidJniObject forward
	MtpDeviceInfo::MtpDeviceInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JIntArray MtpDeviceInfo::getEventsSupported()
	{
		return callObjectMethod(
			"getEventsSupported",
			"()[I"
		);
	}
	JString MtpDeviceInfo::getManufacturer()
	{
		return callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;"
		);
	}
	JString MtpDeviceInfo::getModel()
	{
		return callObjectMethod(
			"getModel",
			"()Ljava/lang/String;"
		);
	}
	JIntArray MtpDeviceInfo::getOperationsSupported()
	{
		return callObjectMethod(
			"getOperationsSupported",
			"()[I"
		);
	}
	JString MtpDeviceInfo::getSerialNumber()
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;"
		);
	}
	JString MtpDeviceInfo::getVersion()
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		);
	}
	jboolean MtpDeviceInfo::isEventSupported(jint arg0)
	{
		return callMethod<jboolean>(
			"isEventSupported",
			"(I)Z",
			arg0
		);
	}
	jboolean MtpDeviceInfo::isOperationSupported(jint arg0)
	{
		return callMethod<jboolean>(
			"isOperationSupported",
			"(I)Z",
			arg0
		);
	}
} // namespace android::mtp

