#pragma once

#include "../../os/Parcel.def.hpp"
#include "./Dataset_Builder.def.hpp"
#include "../../../JString.hpp"
#include "./Dataset.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject Dataset::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.Dataset",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Dataset::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString Dataset::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Dataset::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
