#pragma once

#include "./SelectionBoundary.def.hpp"
#include "../../../../os/Parcel.def.hpp"
#include "./PageSelection.def.hpp"

namespace android::graphics::pdf::models::selection
{
	// Fields
	inline JObject PageSelection::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.pdf.models.selection.PageSelection",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PageSelection::PageSelection(jint arg0, android::graphics::pdf::models::selection::SelectionBoundary arg1, android::graphics::pdf::models::selection::SelectionBoundary arg2, JObject arg3)
		: JObject(
			"android.graphics.pdf.models.selection.PageSelection",
			"(ILandroid/graphics/pdf/models/selection/SelectionBoundary;Landroid/graphics/pdf/models/selection/SelectionBoundary;Ljava/util/List;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline jint PageSelection::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint PageSelection::getPage() const
	{
		return callMethod<jint>(
			"getPage",
			"()I"
		);
	}
	inline JObject PageSelection::getSelectedTextContents() const
	{
		return callObjectMethod(
			"getSelectedTextContents",
			"()Ljava/util/List;"
		);
	}
	inline android::graphics::pdf::models::selection::SelectionBoundary PageSelection::getStart() const
	{
		return callObjectMethod(
			"getStart",
			"()Landroid/graphics/pdf/models/selection/SelectionBoundary;"
		);
	}
	inline android::graphics::pdf::models::selection::SelectionBoundary PageSelection::getStop() const
	{
		return callObjectMethod(
			"getStop",
			"()Landroid/graphics/pdf/models/selection/SelectionBoundary;"
		);
	}
	inline void PageSelection::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
