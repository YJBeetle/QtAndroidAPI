#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./ChangeLogTokenRequest.def.hpp"

namespace android::health::connect::changelog
{
	// Fields
	inline JObject ChangeLogTokenRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.changelog.ChangeLogTokenRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ChangeLogTokenRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject ChangeLogTokenRequest::getDataOriginFilters() const
	{
		return callObjectMethod(
			"getDataOriginFilters",
			"()Ljava/util/Set;"
		);
	}
	inline JObject ChangeLogTokenRequest::getRecordTypes() const
	{
		return callObjectMethod(
			"getRecordTypes",
			"()Ljava/util/Set;"
		);
	}
	inline void ChangeLogTokenRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
