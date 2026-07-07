#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "./TextAttribute.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject TextAttribute::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.TextAttribute",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextAttribute::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::PersistableBundle TextAttribute::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline JObject TextAttribute::getTextConversionSuggestions() const
	{
		return callObjectMethod(
			"getTextConversionSuggestions",
			"()Ljava/util/List;"
		);
	}
	inline void TextAttribute::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
