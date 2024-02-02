#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./ChangeLogsRequest.def.hpp"

namespace android::health::connect::changelog
{
	// Fields
	inline JObject ChangeLogsRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.changelog.ChangeLogsRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ChangeLogsRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint ChangeLogsRequest::getPageSize() const
	{
		return callMethod<jint>(
			"getPageSize",
			"()I"
		);
	}
	inline JString ChangeLogsRequest::getToken() const
	{
		return callObjectMethod(
			"getToken",
			"()Ljava/lang/String;"
		);
	}
	inline void ChangeLogsRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::health::connect::changelog

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::changelog;
#endif
