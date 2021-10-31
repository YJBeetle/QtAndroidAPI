#include "./MtpStorageInfo.hpp"

namespace android::mtp
{
	// Fields
	
	// QJniObject forward
	MtpStorageInfo::MtpStorageInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring MtpStorageInfo::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong MtpStorageInfo::getFreeSpace()
	{
		return callMethod<jlong>(
			"getFreeSpace",
			"()J"
		);
	}
	jlong MtpStorageInfo::getMaxCapacity()
	{
		return callMethod<jlong>(
			"getMaxCapacity",
			"()J"
		);
	}
	jint MtpStorageInfo::getStorageId()
	{
		return callMethod<jint>(
			"getStorageId",
			"()I"
		);
	}
	jstring MtpStorageInfo::getVolumeIdentifier()
	{
		return callObjectMethod(
			"getVolumeIdentifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::mtp

