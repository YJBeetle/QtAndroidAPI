#pragma once

#include "../../../content/Intent.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./SettingsPreferenceMetadata.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	inline JObject SettingsPreferenceMetadata::CREATOR()
	{
		return getStaticObjectField(
			"android.service.settings.preferences.SettingsPreferenceMetadata",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SettingsPreferenceMetadata::DEEPLINK_ONLY()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SettingsPreferenceMetadata",
			"DEEPLINK_ONLY"
		);
	}
	inline jint SettingsPreferenceMetadata::EXPECT_POST_CONFIRMATION()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SettingsPreferenceMetadata",
			"EXPECT_POST_CONFIRMATION"
		);
	}
	inline jint SettingsPreferenceMetadata::NO_DIRECT_ACCESS()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SettingsPreferenceMetadata",
			"NO_DIRECT_ACCESS"
		);
	}
	inline jint SettingsPreferenceMetadata::NO_SENSITIVITY()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.SettingsPreferenceMetadata",
			"NO_SENSITIVITY"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SettingsPreferenceMetadata::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle SettingsPreferenceMetadata::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString SettingsPreferenceMetadata::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::Intent SettingsPreferenceMetadata::getLaunchIntent() const
	{
		return callObjectMethod(
			"getLaunchIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline JObject SettingsPreferenceMetadata::getReadPermissions() const
	{
		return callObjectMethod(
			"getReadPermissions",
			"()Ljava/util/List;"
		);
	}
	inline JString SettingsPreferenceMetadata::getScreenKey() const
	{
		return callObjectMethod(
			"getScreenKey",
			"()Ljava/lang/String;"
		);
	}
	inline JString SettingsPreferenceMetadata::getSummary() const
	{
		return callObjectMethod(
			"getSummary",
			"()Ljava/lang/String;"
		);
	}
	inline JString SettingsPreferenceMetadata::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SettingsPreferenceMetadata::getWritePermissions() const
	{
		return callObjectMethod(
			"getWritePermissions",
			"()Ljava/util/List;"
		);
	}
	inline jint SettingsPreferenceMetadata::getWriteSensitivity() const
	{
		return callMethod<jint>(
			"getWriteSensitivity",
			"()I"
		);
	}
	inline jboolean SettingsPreferenceMetadata::isAvailable() const
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	inline jboolean SettingsPreferenceMetadata::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean SettingsPreferenceMetadata::isRestricted() const
	{
		return callMethod<jboolean>(
			"isRestricted",
			"()Z"
		);
	}
	inline jboolean SettingsPreferenceMetadata::isWritable() const
	{
		return callMethod<jboolean>(
			"isWritable",
			"()Z"
		);
	}
	inline void SettingsPreferenceMetadata::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
