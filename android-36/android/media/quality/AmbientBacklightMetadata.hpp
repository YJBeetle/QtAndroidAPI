#pragma once

#include "../../../JIntArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./AmbientBacklightMetadata.def.hpp"

namespace android::media::quality
{
	// Fields
	inline jint AmbientBacklightMetadata::ALGORITHM_NONE()
	{
		return getStaticField<jint>(
			"android.media.quality.AmbientBacklightMetadata",
			"ALGORITHM_NONE"
		);
	}
	inline jint AmbientBacklightMetadata::ALGORITHM_RLE()
	{
		return getStaticField<jint>(
			"android.media.quality.AmbientBacklightMetadata",
			"ALGORITHM_RLE"
		);
	}
	inline JObject AmbientBacklightMetadata::CREATOR()
	{
		return getStaticObjectField(
			"android.media.quality.AmbientBacklightMetadata",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AmbientBacklightMetadata::AmbientBacklightMetadata(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JIntArray arg6)
		: JObject(
			"android.media.quality.AmbientBacklightMetadata",
			"(Ljava/lang/String;IIIII[I)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object<jintArray>()
		) {}
	
	// Methods
	inline jint AmbientBacklightMetadata::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint AmbientBacklightMetadata::getColorFormat() const
	{
		return callMethod<jint>(
			"getColorFormat",
			"()I"
		);
	}
	inline jint AmbientBacklightMetadata::getCompressionAlgorithm() const
	{
		return callMethod<jint>(
			"getCompressionAlgorithm",
			"()I"
		);
	}
	inline jint AmbientBacklightMetadata::getHorizontalZonesCount() const
	{
		return callMethod<jint>(
			"getHorizontalZonesCount",
			"()I"
		);
	}
	inline JString AmbientBacklightMetadata::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint AmbientBacklightMetadata::getSource() const
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	inline jint AmbientBacklightMetadata::getVerticalZonesCount() const
	{
		return callMethod<jint>(
			"getVerticalZonesCount",
			"()I"
		);
	}
	inline JIntArray AmbientBacklightMetadata::getZoneColors() const
	{
		return callObjectMethod(
			"getZoneColors",
			"()[I"
		);
	}
	inline JString AmbientBacklightMetadata::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AmbientBacklightMetadata::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
