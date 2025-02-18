#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./PromptVerticalListContentView.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	inline JObject PromptVerticalListContentView::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.biometrics.PromptVerticalListContentView",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PromptVerticalListContentView::getMaxEachItemCharacterNumber()
	{
		return callStaticMethod<jint>(
			"android.hardware.biometrics.PromptVerticalListContentView",
			"getMaxEachItemCharacterNumber",
			"()I"
		);
	}
	inline jint PromptVerticalListContentView::getMaxItemCount()
	{
		return callStaticMethod<jint>(
			"android.hardware.biometrics.PromptVerticalListContentView",
			"getMaxItemCount",
			"()I"
		);
	}
	inline jint PromptVerticalListContentView::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString PromptVerticalListContentView::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline JObject PromptVerticalListContentView::getListItems() const
	{
		return callObjectMethod(
			"getListItems",
			"()Ljava/util/List;"
		);
	}
	inline void PromptVerticalListContentView::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::biometrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::biometrics;
#endif
