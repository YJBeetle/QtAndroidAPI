#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./PromptContentViewWithMoreOptionsButton.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	inline JObject PromptContentViewWithMoreOptionsButton::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.biometrics.PromptContentViewWithMoreOptionsButton",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PromptContentViewWithMoreOptionsButton::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString PromptContentViewWithMoreOptionsButton::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline JObject PromptContentViewWithMoreOptionsButton::getMoreOptionsButtonListener() const
	{
		return callObjectMethod(
			"getMoreOptionsButtonListener",
			"()Landroid/content/DialogInterface$OnClickListener;"
		);
	}
	inline void PromptContentViewWithMoreOptionsButton::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
