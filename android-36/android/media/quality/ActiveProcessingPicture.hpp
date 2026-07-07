#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ActiveProcessingPicture.def.hpp"

namespace android::media::quality
{
	// Fields
	inline JObject ActiveProcessingPicture::CREATOR()
	{
		return getStaticObjectField(
			"android.media.quality.ActiveProcessingPicture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ActiveProcessingPicture::ActiveProcessingPicture(jint arg0, JString arg1)
		: JObject(
			"android.media.quality.ActiveProcessingPicture",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint ActiveProcessingPicture::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint ActiveProcessingPicture::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline JString ActiveProcessingPicture::getProfileId() const
	{
		return callObjectMethod(
			"getProfileId",
			"()Ljava/lang/String;"
		);
	}
	inline void ActiveProcessingPicture::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
