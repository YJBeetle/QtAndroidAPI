#pragma once

#include "../../os/Parcel.def.hpp"
#include "./CustomDescription_Builder.def.hpp"
#include "../../../JString.hpp"
#include "./CustomDescription.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject CustomDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.CustomDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CustomDescription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString CustomDescription::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CustomDescription::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
