#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MediaProjectionConfig.def.hpp"

namespace android::media::projection
{
	// Fields
	inline JObject MediaProjectionConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.media.projection.MediaProjectionConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::media::projection::MediaProjectionConfig MediaProjectionConfig::createConfigForDefaultDisplay()
	{
		return callStaticObjectMethod(
			"android.media.projection.MediaProjectionConfig",
			"createConfigForDefaultDisplay",
			"()Landroid/media/projection/MediaProjectionConfig;"
		);
	}
	inline android::media::projection::MediaProjectionConfig MediaProjectionConfig::createConfigForUserChoice()
	{
		return callStaticObjectMethod(
			"android.media.projection.MediaProjectionConfig",
			"createConfigForUserChoice",
			"()Landroid/media/projection/MediaProjectionConfig;"
		);
	}
	inline jint MediaProjectionConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MediaProjectionConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MediaProjectionConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MediaProjectionConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MediaProjectionConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::projection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::projection;
#endif
