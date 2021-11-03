#include "./MtpDeviceInfo.hpp"

namespace android::mtp
{
	// Fields
	
	// QAndroidJniObject forward
	MtpDeviceInfo::MtpDeviceInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jintArray MtpDeviceInfo::getEventsSupported()
	{
		return callObjectMethod(
			"getEventsSupported",
			"()[I"
		).object<jintArray>();
	}
	jstring MtpDeviceInfo::getManufacturer()
	{
		return callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MtpDeviceInfo::getModel()
	{
		return callObjectMethod(
			"getModel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jintArray MtpDeviceInfo::getOperationsSupported()
	{
		return callObjectMethod(
			"getOperationsSupported",
			"()[I"
		).object<jintArray>();
	}
	jstring MtpDeviceInfo::getSerialNumber()
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MtpDeviceInfo::getVersion()
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
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

