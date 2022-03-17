#pragma once

#include "../../JString.hpp"
#include "./MtpStorageInfo.def.hpp"

namespace android::mtp
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString MtpStorageInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline jlong MtpStorageInfo::getFreeSpace() const
	{
		return callMethod<jlong>(
			"getFreeSpace",
			"()J"
		);
	}
	inline jlong MtpStorageInfo::getMaxCapacity() const
	{
		return callMethod<jlong>(
			"getMaxCapacity",
			"()J"
		);
	}
	inline jint MtpStorageInfo::getStorageId() const
	{
		return callMethod<jint>(
			"getStorageId",
			"()I"
		);
	}
	inline JString MtpStorageInfo::getVolumeIdentifier() const
	{
		return callObjectMethod(
			"getVolumeIdentifier",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::mtp

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::mtp;
#endif
