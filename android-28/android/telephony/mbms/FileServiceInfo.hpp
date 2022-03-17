#pragma once

#include "../../os/Parcel.def.hpp"
#include "./FileServiceInfo.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline JObject FileServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.mbms.FileServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint FileServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject FileServiceInfo::getFiles() const
	{
		return callObjectMethod(
			"getFiles",
			"()Ljava/util/List;"
		);
	}
	inline void FileServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::mbms

// Base class headers
#include "./ServiceInfo.hpp"

