#include "../../JString.hpp"
#include "./MtpStorageInfo.hpp"

namespace android::mtp
{
	// Fields
	
	// QAndroidJniObject forward
	MtpStorageInfo::MtpStorageInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString MtpStorageInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	jlong MtpStorageInfo::getFreeSpace() const
	{
		return callMethod<jlong>(
			"getFreeSpace",
			"()J"
		);
	}
	jlong MtpStorageInfo::getMaxCapacity() const
	{
		return callMethod<jlong>(
			"getMaxCapacity",
			"()J"
		);
	}
	jint MtpStorageInfo::getStorageId() const
	{
		return callMethod<jint>(
			"getStorageId",
			"()I"
		);
	}
	JString MtpStorageInfo::getVolumeIdentifier() const
	{
		return callObjectMethod(
			"getVolumeIdentifier",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::mtp

