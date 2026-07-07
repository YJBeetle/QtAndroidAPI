#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "./SoundProfile.def.hpp"

namespace android::media::quality
{
	// Fields
	inline JObject SoundProfile::CREATOR()
	{
		return getStaticObjectField(
			"android.media.quality.SoundProfile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SoundProfile::ERROR_DUPLICATE()
	{
		return getStaticField<jint>(
			"android.media.quality.SoundProfile",
			"ERROR_DUPLICATE"
		);
	}
	inline jint SoundProfile::ERROR_INVALID_ARGUMENT()
	{
		return getStaticField<jint>(
			"android.media.quality.SoundProfile",
			"ERROR_INVALID_ARGUMENT"
		);
	}
	inline jint SoundProfile::ERROR_NOT_ALLOWLISTED()
	{
		return getStaticField<jint>(
			"android.media.quality.SoundProfile",
			"ERROR_NOT_ALLOWLISTED"
		);
	}
	inline jint SoundProfile::ERROR_NO_PERMISSION()
	{
		return getStaticField<jint>(
			"android.media.quality.SoundProfile",
			"ERROR_NO_PERMISSION"
		);
	}
	inline jint SoundProfile::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.quality.SoundProfile",
			"ERROR_UNKNOWN"
		);
	}
	inline jint SoundProfile::TYPE_APPLICATION()
	{
		return getStaticField<jint>(
			"android.media.quality.SoundProfile",
			"TYPE_APPLICATION"
		);
	}
	inline jint SoundProfile::TYPE_SYSTEM()
	{
		return getStaticField<jint>(
			"android.media.quality.SoundProfile",
			"TYPE_SYSTEM"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SoundProfile::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString SoundProfile::getInputId() const
	{
		return callObjectMethod(
			"getInputId",
			"()Ljava/lang/String;"
		);
	}
	inline JString SoundProfile::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString SoundProfile::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::PersistableBundle SoundProfile::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline JString SoundProfile::getProfileId() const
	{
		return callObjectMethod(
			"getProfileId",
			"()Ljava/lang/String;"
		);
	}
	inline jint SoundProfile::getProfileType() const
	{
		return callMethod<jint>(
			"getProfileType",
			"()I"
		);
	}
	inline void SoundProfile::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
