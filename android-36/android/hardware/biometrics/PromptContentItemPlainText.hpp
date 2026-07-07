#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./PromptContentItemPlainText.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	inline JObject PromptContentItemPlainText::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.biometrics.PromptContentItemPlainText",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PromptContentItemPlainText::PromptContentItemPlainText(JString arg0)
		: JObject(
			"android.hardware.biometrics.PromptContentItemPlainText",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint PromptContentItemPlainText::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void PromptContentItemPlainText::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
