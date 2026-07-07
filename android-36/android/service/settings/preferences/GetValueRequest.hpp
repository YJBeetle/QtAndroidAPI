#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./GetValueRequest.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	inline JObject GetValueRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.settings.preferences.GetValueRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GetValueRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString GetValueRequest::getPreferenceKey() const
	{
		return callObjectMethod(
			"getPreferenceKey",
			"()Ljava/lang/String;"
		);
	}
	inline JString GetValueRequest::getScreenKey() const
	{
		return callObjectMethod(
			"getScreenKey",
			"()Ljava/lang/String;"
		);
	}
	inline void GetValueRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
