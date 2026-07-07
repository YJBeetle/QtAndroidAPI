#pragma once

#include "../../../Point.def.hpp"
#include "../../../../os/Parcel.def.hpp"
#include "./SelectionBoundary.def.hpp"

namespace android::graphics::pdf::models::selection
{
	// Fields
	inline JObject SelectionBoundary::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.pdf.models.selection.SelectionBoundary",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SelectionBoundary::SelectionBoundary(android::graphics::Point arg0)
		: JObject(
			"android.graphics.pdf.models.selection.SelectionBoundary",
			"(Landroid/graphics/Point;)V",
			arg0.object()
		) {}
	inline SelectionBoundary::SelectionBoundary(jint arg0)
		: JObject(
			"android.graphics.pdf.models.selection.SelectionBoundary",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint SelectionBoundary::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint SelectionBoundary::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline jboolean SelectionBoundary::getIsRtl() const
	{
		return callMethod<jboolean>(
			"getIsRtl",
			"()Z"
		);
	}
	inline android::graphics::Point SelectionBoundary::getPoint() const
	{
		return callObjectMethod(
			"getPoint",
			"()Landroid/graphics/Point;"
		);
	}
	inline void SelectionBoundary::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics::pdf::models::selection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf::models::selection;
#endif
