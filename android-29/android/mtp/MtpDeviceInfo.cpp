#include "./MtpDeviceInfo.hpp"

namespace android::mtp
{
	// Fields
	
	MtpDeviceInfo::MtpDeviceInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jintArray MtpDeviceInfo::getEventsSupported()
	{
		return __thiz.callObjectMethod(
			"getEventsSupported",
			"()[I"
		).object<jintArray>();
	}
	jstring MtpDeviceInfo::getManufacturer()
	{
		return __thiz.callObjectMethod(
			"getManufacturer",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MtpDeviceInfo::getModel()
	{
		return __thiz.callObjectMethod(
			"getModel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jintArray MtpDeviceInfo::getOperationsSupported()
	{
		return __thiz.callObjectMethod(
			"getOperationsSupported",
			"()[I"
		).object<jintArray>();
	}
	jstring MtpDeviceInfo::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MtpDeviceInfo::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean MtpDeviceInfo::isEventSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEventSupported",
			"(I)Z",
			arg0
		);
	}
	jboolean MtpDeviceInfo::isOperationSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isOperationSupported",
			"(I)Z",
			arg0
		);
	}
} // namespace android::mtp

