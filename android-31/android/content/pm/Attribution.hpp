#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./Attribution.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject Attribution::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.Attribution",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Attribution::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint Attribution::getLabel() const
	{
		return callMethod<jint>(
			"getLabel",
			"()I"
		);
	}
	inline JString Attribution::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	inline void Attribution::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

