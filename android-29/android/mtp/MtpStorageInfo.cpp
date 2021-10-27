#include "./MtpStorageInfo.hpp"

namespace android::mtp
{
	// Fields
	
	MtpStorageInfo::MtpStorageInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring MtpStorageInfo::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong MtpStorageInfo::getFreeSpace()
	{
		return __thiz.callMethod<jlong>(
			"getFreeSpace",
			"()J"
		);
	}
	jlong MtpStorageInfo::getMaxCapacity()
	{
		return __thiz.callMethod<jlong>(
			"getMaxCapacity",
			"()J"
		);
	}
	jint MtpStorageInfo::getStorageId()
	{
		return __thiz.callMethod<jint>(
			"getStorageId",
			"()I"
		);
	}
	jstring MtpStorageInfo::getVolumeIdentifier()
	{
		return __thiz.callObjectMethod(
			"getVolumeIdentifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::mtp

