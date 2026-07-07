#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./SettingsPreferenceValue.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	inline JObject SettingsPreferenceValue::CREATOR()
	{
		return getStaticObjectField(
			"android.service.settings.preferences.SettingsPreferenceValue",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SettingsPreferenceValue::TYPE_BOOLEAN()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SettingsPreferenceValue",
			"TYPE_BOOLEAN"
		);
	}
	inline jint SettingsPreferenceValue::TYPE_DOUBLE()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SettingsPreferenceValue",
			"TYPE_DOUBLE"
		);
	}
	inline jint SettingsPreferenceValue::TYPE_INT()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SettingsPreferenceValue",
			"TYPE_INT"
		);
	}
	inline jint SettingsPreferenceValue::TYPE_LONG()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SettingsPreferenceValue",
			"TYPE_LONG"
		);
	}
	inline jint SettingsPreferenceValue::TYPE_STRING()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SettingsPreferenceValue",
			"TYPE_STRING"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SettingsPreferenceValue::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SettingsPreferenceValue::getBooleanValue() const
	{
		return callMethod<jboolean>(
			"getBooleanValue",
			"()Z"
		);
	}
	inline jdouble SettingsPreferenceValue::getDoubleValue() const
	{
		return callMethod<jdouble>(
			"getDoubleValue",
			"()D"
		);
	}
	inline jint SettingsPreferenceValue::getIntValue() const
	{
		return callMethod<jint>(
			"getIntValue",
			"()I"
		);
	}
	inline jlong SettingsPreferenceValue::getLongValue() const
	{
		return callMethod<jlong>(
			"getLongValue",
			"()J"
		);
	}
	inline JString SettingsPreferenceValue::getStringValue() const
	{
		return callObjectMethod(
			"getStringValue",
			"()Ljava/lang/String;"
		);
	}
	inline jint SettingsPreferenceValue::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline void SettingsPreferenceValue::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
