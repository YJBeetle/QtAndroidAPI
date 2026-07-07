#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./SetValueResult.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	inline JObject SetValueResult::CREATOR()
	{
		return getStaticObjectField(
			"android.service.settings.preferences.SetValueResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SetValueResult::RESULT_DISABLED()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SetValueResult",
			"RESULT_DISABLED"
		);
	}
	inline jint SetValueResult::RESULT_DISALLOW()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SetValueResult",
			"RESULT_DISALLOW"
		);
	}
	inline jint SetValueResult::RESULT_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SetValueResult",
			"RESULT_INTERNAL_ERROR"
		);
	}
	inline jint SetValueResult::RESULT_INVALID_REQUEST()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SetValueResult",
			"RESULT_INVALID_REQUEST"
		);
	}
	inline jint SetValueResult::RESULT_OK()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SetValueResult",
			"RESULT_OK"
		);
	}
	inline jint SetValueResult::RESULT_REQUIRE_APP_PERMISSION()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SetValueResult",
			"RESULT_REQUIRE_APP_PERMISSION"
		);
	}
	inline jint SetValueResult::RESULT_REQUIRE_USER_CONSENT()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SetValueResult",
			"RESULT_REQUIRE_USER_CONSENT"
		);
	}
	inline jint SetValueResult::RESULT_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SetValueResult",
			"RESULT_RESTRICTED"
		);
	}
	inline jint SetValueResult::RESULT_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SetValueResult",
			"RESULT_UNAVAILABLE"
		);
	}
	inline jint SetValueResult::RESULT_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SetValueResult",
			"RESULT_UNSUPPORTED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SetValueResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint SetValueResult::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	inline void SetValueResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
