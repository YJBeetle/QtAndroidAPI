#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./AmbientBacklightSettings.def.hpp"

namespace android::media::quality
{
	// Fields
	inline JObject AmbientBacklightSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.media.quality.AmbientBacklightSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AmbientBacklightSettings::SOURCE_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.quality.AmbientBacklightSettings",
			"SOURCE_AUDIO"
		);
	}
	inline jint AmbientBacklightSettings::SOURCE_AUDIO_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.quality.AmbientBacklightSettings",
			"SOURCE_AUDIO_VIDEO"
		);
	}
	inline jint AmbientBacklightSettings::SOURCE_NONE()
	{
		return getStaticField<jint>(
			"android.media.quality.AmbientBacklightSettings",
			"SOURCE_NONE"
		);
	}
	inline jint AmbientBacklightSettings::SOURCE_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.quality.AmbientBacklightSettings",
			"SOURCE_VIDEO"
		);
	}
	
	// Constructors
	inline AmbientBacklightSettings::AmbientBacklightSettings(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5, jint arg6)
		: JObject(
			"android.media.quality.AmbientBacklightSettings",
			"(IIIIIZI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	inline jint AmbientBacklightSettings::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint AmbientBacklightSettings::getColorFormat() const
	{
		return callMethod<jint>(
			"getColorFormat",
			"()I"
		);
	}
	inline jint AmbientBacklightSettings::getHorizontalZonesCount() const
	{
		return callMethod<jint>(
			"getHorizontalZonesCount",
			"()I"
		);
	}
	inline jint AmbientBacklightSettings::getMaxFps() const
	{
		return callMethod<jint>(
			"getMaxFps",
			"()I"
		);
	}
	inline jint AmbientBacklightSettings::getSource() const
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	inline jint AmbientBacklightSettings::getThreshold() const
	{
		return callMethod<jint>(
			"getThreshold",
			"()I"
		);
	}
	inline jint AmbientBacklightSettings::getVerticalZonesCount() const
	{
		return callMethod<jint>(
			"getVerticalZonesCount",
			"()I"
		);
	}
	inline jboolean AmbientBacklightSettings::isLetterboxOmitted() const
	{
		return callMethod<jboolean>(
			"isLetterboxOmitted",
			"()Z"
		);
	}
	inline JString AmbientBacklightSettings::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AmbientBacklightSettings::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
