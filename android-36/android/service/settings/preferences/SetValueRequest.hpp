#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./SettingsPreferenceValue.def.hpp"
#include "../../../../JString.hpp"
#include "./SetValueRequest.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	inline JObject SetValueRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.settings.preferences.SetValueRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SetValueRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString SetValueRequest::getPreferenceKey() const
	{
		return callObjectMethod(
			"getPreferenceKey",
			"()Ljava/lang/String;"
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceValue SetValueRequest::getPreferenceValue() const
	{
		return callObjectMethod(
			"getPreferenceValue",
			"()Landroid/service/settings/preferences/SettingsPreferenceValue;"
		);
	}
	inline JString SetValueRequest::getScreenKey() const
	{
		return callObjectMethod(
			"getScreenKey",
			"()Ljava/lang/String;"
		);
	}
	inline void SetValueRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
