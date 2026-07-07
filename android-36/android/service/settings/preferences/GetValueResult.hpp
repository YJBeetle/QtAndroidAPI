#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./SettingsPreferenceMetadata.def.hpp"
#include "./SettingsPreferenceValue.def.hpp"
#include "./GetValueResult.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	inline JObject GetValueResult::CREATOR()
	{
		return getStaticObjectField(
			"android.service.settings.preferences.GetValueResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint GetValueResult::RESULT_DISALLOW()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.GetValueResult",
			"RESULT_DISALLOW"
		);
	}
	inline jint GetValueResult::RESULT_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.GetValueResult",
			"RESULT_INTERNAL_ERROR"
		);
	}
	inline jint GetValueResult::RESULT_INVALID_REQUEST()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.GetValueResult",
			"RESULT_INVALID_REQUEST"
		);
	}
	inline jint GetValueResult::RESULT_OK()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.GetValueResult",
			"RESULT_OK"
		);
	}
	inline jint GetValueResult::RESULT_REQUIRE_APP_PERMISSION()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.GetValueResult",
			"RESULT_REQUIRE_APP_PERMISSION"
		);
	}
	inline jint GetValueResult::RESULT_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.GetValueResult",
			"RESULT_UNAVAILABLE"
		);
	}
	inline jint GetValueResult::RESULT_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.GetValueResult",
			"RESULT_UNSUPPORTED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GetValueResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata GetValueResult::getMetadata() const
	{
		return callObjectMethod(
			"getMetadata",
			"()Landroid/service/settings/preferences/SettingsPreferenceMetadata;"
		);
	}
	inline jint GetValueResult::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceValue GetValueResult::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Landroid/service/settings/preferences/SettingsPreferenceValue;"
		);
	}
	inline void GetValueResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
