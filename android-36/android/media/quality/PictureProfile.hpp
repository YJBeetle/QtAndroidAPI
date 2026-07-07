#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "./PictureProfile.def.hpp"

namespace android::media::quality
{
	// Fields
	inline JObject PictureProfile::CREATOR()
	{
		return getStaticObjectField(
			"android.media.quality.PictureProfile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PictureProfile::ERROR_DUPLICATE()
	{
		return getStaticField<jint>(
			"android.media.quality.PictureProfile",
			"ERROR_DUPLICATE"
		);
	}
	inline jint PictureProfile::ERROR_INVALID_ARGUMENT()
	{
		return getStaticField<jint>(
			"android.media.quality.PictureProfile",
			"ERROR_INVALID_ARGUMENT"
		);
	}
	inline jint PictureProfile::ERROR_NOT_ALLOWLISTED()
	{
		return getStaticField<jint>(
			"android.media.quality.PictureProfile",
			"ERROR_NOT_ALLOWLISTED"
		);
	}
	inline jint PictureProfile::ERROR_NO_PERMISSION()
	{
		return getStaticField<jint>(
			"android.media.quality.PictureProfile",
			"ERROR_NO_PERMISSION"
		);
	}
	inline jint PictureProfile::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.quality.PictureProfile",
			"ERROR_UNKNOWN"
		);
	}
	inline jint PictureProfile::TYPE_APPLICATION()
	{
		return getStaticField<jint>(
			"android.media.quality.PictureProfile",
			"TYPE_APPLICATION"
		);
	}
	inline jint PictureProfile::TYPE_SYSTEM()
	{
		return getStaticField<jint>(
			"android.media.quality.PictureProfile",
			"TYPE_SYSTEM"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PictureProfile::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString PictureProfile::getInputId() const
	{
		return callObjectMethod(
			"getInputId",
			"()Ljava/lang/String;"
		);
	}
	inline JString PictureProfile::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString PictureProfile::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::PersistableBundle PictureProfile::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline JString PictureProfile::getProfileId() const
	{
		return callObjectMethod(
			"getProfileId",
			"()Ljava/lang/String;"
		);
	}
	inline jint PictureProfile::getProfileType() const
	{
		return callMethod<jint>(
			"getProfileType",
			"()I"
		);
	}
	inline void PictureProfile::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::quality

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::quality;
#endif
