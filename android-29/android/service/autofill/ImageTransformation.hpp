#pragma once

#include "../../os/Parcel.def.hpp"
#include "./ImageTransformation_Builder.def.hpp"
#include "../../../JString.hpp"
#include "./ImageTransformation.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject ImageTransformation::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.ImageTransformation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ImageTransformation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString ImageTransformation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ImageTransformation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

// Base class headers

