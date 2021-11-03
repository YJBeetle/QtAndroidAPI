#include "../../JString.hpp"
#include "./MtpStorageInfo.hpp"

namespace android::mtp
{
	// Fields
	
	// QJniObject forward
	MtpStorageInfo::MtpStorageInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString MtpStorageInfo::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
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
	JString MtpStorageInfo::getVolumeIdentifier()
	{
		return callObjectMethod(
			"getVolumeIdentifier",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::mtp

