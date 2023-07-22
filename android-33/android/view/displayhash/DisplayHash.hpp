#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./DisplayHash.def.hpp"

namespace android::view::displayhash
{
	// Fields
	inline JObject DisplayHash::CREATOR()
	{
		return getStaticObjectField(
			"android.view.displayhash.DisplayHash",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DisplayHash::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString DisplayHash::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DisplayHash::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::displayhash

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::displayhash;
#endif
