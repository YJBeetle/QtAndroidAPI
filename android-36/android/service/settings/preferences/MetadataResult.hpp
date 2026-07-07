#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./MetadataResult.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	inline JObject MetadataResult::CREATOR()
	{
		return getStaticObjectField(
			"android.service.settings.preferences.MetadataResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint MetadataResult::RESULT_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.MetadataResult",
			"RESULT_INTERNAL_ERROR"
		);
	}
	inline jint MetadataResult::RESULT_OK()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.MetadataResult",
			"RESULT_OK"
		);
	}
	inline jint MetadataResult::RESULT_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.service.settings.preferences.MetadataResult",
			"RESULT_UNSUPPORTED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MetadataResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject MetadataResult::getMetadataList() const
	{
		return callObjectMethod(
			"getMetadataList",
			"()Ljava/util/List;"
		);
	}
	inline jint MetadataResult::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	inline void MetadataResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
