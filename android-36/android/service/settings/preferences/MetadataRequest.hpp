#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./MetadataRequest.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	inline JObject MetadataRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.settings.preferences.MetadataRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MetadataRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void MetadataRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::settings::preferences

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::settings::preferences;
#endif
