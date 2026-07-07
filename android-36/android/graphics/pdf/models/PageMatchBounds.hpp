#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./PageMatchBounds.def.hpp"

namespace android::graphics::pdf::models
{
	// Fields
	inline JObject PageMatchBounds::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.pdf.models.PageMatchBounds",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PageMatchBounds::PageMatchBounds(JObject arg0, jint arg1)
		: JObject(
			"android.graphics.pdf.models.PageMatchBounds",
			"(Ljava/util/List;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint PageMatchBounds::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject PageMatchBounds::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Ljava/util/List;"
		);
	}
	inline jint PageMatchBounds::getTextStartIndex() const
	{
		return callMethod<jint>(
			"getTextStartIndex",
			"()I"
		);
	}
	inline void PageMatchBounds::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics::pdf::models

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf::models;
#endif
